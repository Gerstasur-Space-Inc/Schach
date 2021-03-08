using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(SquareSelectorCreator))] //SquareSelectorCreator muss bei dem Gameobject hinzugefügt sein
public class Board : MonoBehaviour
{
    public const int BOARD_SIZE = 8;//8x8 Brett

    [SerializeField] private Transform bottomLeftSquareTransform;//Koordinaten des unteren linken Quadrats (für die Berechnung von den Zugweiten und Zügen)
    [SerializeField] private float squareSize;

    private Piece[,] grid;//2D Array vom Feld
    private Piece selectedPiece; // Ausgewählte figur, für die alles berechnet wird...
    private ChessGameController chessController; //
    private SquareSelectorCreator squareSelector;


    private void Awake()
    {
        squareSelector = GetComponent<SquareSelectorCreator>(); //initialisierung von square selector
        CreateGrid();//und grid
    }

    public void SetDependencies(ChessGameController chessController)
    {
        this.chessController = chessController;
    }



    private void CreateGrid() //initialisierung von dem Feld
    {
        grid = new Piece[BOARD_SIZE, BOARD_SIZE];
    }

    public Vector3 CalculatePositionFromCoords(Vector2Int coords) //Umrechnung von Position in feld || wo steht eine Figur mit den gegebenen Koordinaten
    {
        return bottomLeftSquareTransform.position + new Vector3(coords.x * squareSize, 0f, coords.y * squareSize);
    }

    private Vector2Int CalculateCoordsFromPosition(Vector3 inputPosition) //andere Richtung
    {
        int x = Mathf.FloorToInt(transform.InverseTransformPoint(inputPosition).x / squareSize) + BOARD_SIZE / 2;
        int y = Mathf.FloorToInt(transform.InverseTransformPoint(inputPosition).z / squareSize) + BOARD_SIZE / 2;
        return new Vector2Int(x, y);
    }

    public void OnSquareSelected(Vector3 inputPosition)// Wenn ein feld ausgeählt wurde (an der position inputPosition)
    {
        Vector2Int coords = CalculateCoordsFromPosition(inputPosition);//Koordinaten berechnen
        Piece piece = GetPieceOnSquare(coords);// genaues Figur importieren
        if (selectedPiece)
        {
            if (piece != null && selectedPiece == piece)// Wenn die Figur nicht leer UND die Ausgewählte Figur der figur an dieser Position ist
                DeselectPiece();//Figur abwählen
            else if (piece != null && selectedPiece != piece && chessController.IsTeamTurnActive(piece.team))// wenn die Figur nicht null UND die ausgewählte Figur nicht die Figur ist und dieses Team am Zug ist:
                SelectPiece(piece);//wähle diese Figur  aus
            else if (selectedPiece.CanMoveTo(coords))//Wenn die 
                OnSelectedPieceMoved(coords, selectedPiece);
        }
        else
        {
            if (piece != null && chessController.IsTeamTurnActive(piece.team))
                SelectPiece(piece);
        }
    }



    private void SelectPiece(Piece piece)
    {
        chessController.RemoveMovesEnablingAttakOnPieceOfType<King>(piece);
        selectedPiece = piece;
        List<Vector2Int> selection = selectedPiece.avaliableMoves;
        ShowSelectionSquares(selection);
    }

    private void ShowSelectionSquares(List<Vector2Int> selection)
    {
        Dictionary<Vector3, bool> squaresData = new Dictionary<Vector3, bool>();
        for (int i = 0; i < selection.Count; i++)
        {
            Vector3 position = CalculatePositionFromCoords(selection[i]);
            bool isSquareFree = GetPieceOnSquare(selection[i]) == null;
            squaresData.Add(position, isSquareFree);
        }
        squareSelector.ShowSelection(squaresData);
    }

    private void DeselectPiece()
    {
        selectedPiece = null;
        squareSelector.ClearSelection();
    }
    private void OnSelectedPieceMoved(Vector2Int coords, Piece piece)
    {
        TryToTakeOppositePiece(coords);
        UpdateBoardOnPieceMove(coords, piece.occupiedSquare, piece, null);
        selectedPiece.MovePiece(coords);
        DeselectPiece();
        EndTurn();
    }

    private void EndTurn()
    {
        chessController.EndTurn();
    }

    public void UpdateBoardOnPieceMove(Vector2Int newCoords, Vector2Int oldCoords, Piece newPiece, Piece oldPiece)
    {
        grid[oldCoords.x, oldCoords.y] = oldPiece;
        grid[newCoords.x, newCoords.y] = newPiece;
    }

    public Piece GetPieceOnSquare(Vector2Int coords)
    {
        if (CheckIfCoordinatesAreOnBoard(coords))
            return grid[coords.x, coords.y];
        return null;
    }

    public bool CheckIfCoordinatesAreOnBoard(Vector2Int coords)
    {
        if (coords.x < 0 || coords.y < 0 || coords.x >= BOARD_SIZE || coords.y >= BOARD_SIZE)
            return false;
        return true;
    }

    public bool HasPiece(Piece piece)
    {
        for (int i = 0; i < BOARD_SIZE; i++)
        {
            for (int j = 0; j < BOARD_SIZE; j++)
            {
                if (grid[i, j] == piece)
                    return true;
            }
        }
        return false;
    }

    public void SetPieceOnBoard(Vector2Int coords, Piece piece)
    {
        if (CheckIfCoordinatesAreOnBoard(coords))
            grid[coords.x, coords.y] = piece;
    }

    private void TryToTakeOppositePiece(Vector2Int coords)
    {
        Piece piece = GetPieceOnSquare(coords);
        if (piece && !selectedPiece.IsFromSameTeam(piece))
        {
            TakePiece(piece);
        }
    }

    private void TakePiece(Piece piece)
    {
        if (piece)
        {
            grid[piece.occupiedSquare.x, piece.occupiedSquare.y] = null;
            chessController.OnPieceRemoved(piece);
            Destroy(piece.gameObject);
        }
    }


    public void PromotePiece(Piece piece)
    {
        TakePiece(piece);
        chessController.CreatePieceAndInitialize(piece.occupiedSquare, piece.team, typeof(Queen));
    }

    internal void OnGameRestarted()
    {
        selectedPiece = null;
        CreateGrid();
    }

}
