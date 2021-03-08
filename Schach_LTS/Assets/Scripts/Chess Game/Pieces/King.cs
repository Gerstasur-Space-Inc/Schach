using System.Collections.Generic;
using UnityEngine;

public class King : Piece
{




    Vector2Int[] directions = new Vector2Int[] //Richtungen in die sich ein König bewegen kann
    
    {
        new Vector2Int(-1, 1),
        new Vector2Int(0, 1),
        new Vector2Int(1, 1),
        new Vector2Int(-1, 0),
        new Vector2Int(1, 0),
        new Vector2Int(-1, -1),
        new Vector2Int(0, -1),
        new Vector2Int(1, -1),
    };

    private Piece leftRook;
    private Piece rightRook;

    private Vector2Int leftCastlingMove;
    private Vector2Int rightCastlingMove;

    public override List<Vector2Int> SelectAvaliableSquares()//Methode um alle freien Felder in einer Liste zu erfassen
    {
        avaliableMoves.Clear();//die letzte List der Möglichkeiten wird gelehrt
        AssignStandardMoves();//Testen für "normalen" Zug
        AssignCastlingMoves();//Testen für "Rochade"
        return avaliableMoves; //beide fügen die Möglichen Züge zur liste hinzu

    }

    private void AssignCastlingMoves()
    {
        leftCastlingMove = new Vector2Int(-1, -1);//Zug für link / rechte rochade
        rightCastlingMove = new Vector2Int(-1, -1);
        if (!hasMoved)//Rochade nur, wenn sich der nicht bewegt hat
        {
            leftRook = GetPieceInDirection<Rook>(team, Vector2Int.left); //Man braucht den Turm, um ihn zu bewegen
            if (leftRook && !leftRook.hasMoved) //Rochade nur sich der Turm nicht bewegt hat
            {
                leftCastlingMove = occupiedSquare + Vector2Int.left * 2;//Rochade "berechnen"
                avaliableMoves.Add(leftCastlingMove);//Zur Liste mit den möglichen Zügen hinzufügen
            }
            rightRook = GetPieceInDirection<Rook>(team, Vector2Int.right);//Man braucht den Turm, um ihn zu bewegen
            if (rightRook && !rightRook.hasMoved)//Rochade nur sich der Turm nicht bewegt hat
            {
                rightCastlingMove = occupiedSquare + Vector2Int.right * 2;//Rochade "berechnen"
                avaliableMoves.Add(rightCastlingMove);//Zur Liste mit den möglichen Zügen hinzufügen
            }
        }
    }

    private Piece GetPieceInDirection<T>(TeamColor team, Vector2Int direction) //Methode, die für die Rochadee benötig wird, weil man die Türme bewegen muss
    {
        for (int i = 1; i <= Board.BOARD_SIZE; i++)//die Türme können überall auf dem brett sein

        {
            Vector2Int nextCoords = occupiedSquare + direction * i; //die nächste Koordinate auf der der Turm stehen könnte [occupiedSquare ist in Piece definiert]
            Piece piece = board.GetPieceOnSquare(nextCoords);//die Figur die eventuell auf dem Feld steht wird geladen
            if (!board.CheckIfCoordinatesAreOnBoard(nextCoords)) //Wenn die Koordinaten für den nächsten Zug außerhalb des Bretts sind, sind diese nicht relevant
                return null;//weitersuchen
            if (piece != null) //wenn eine Figur auf dem Feld steht
            {
                if (piece.team != team || !(piece is T))//Wenn die Figur weder im selben team noch ein Turm ist @Rafael: generics musst du noch lernen... T ist die Art von figur
                    return null;//weitersuchen
                else if (piece.team == team && piece is T)// Wenn die Figur im selben Team ist und ein Turm ist
                    return piece;//dann muss nicht mehr weitergesucht werden, sondern wir haben den Turm [in dieser Richtung] gefunden
            }
        }
        return null;//Wenn keine der Suchen erfolgreich war, gibt es keinen Turm mehr
    }

    private void AssignStandardMoves()
    {
        float range = 1;//Der König kann nur ein Feld weit gehn
        foreach (var direction in directions)//für jede Richtung werden nun die freien Felder berechnet
        {
            for (int i = 1; i <= range; i++)//für jede Zugweite werden die freien Felder berechnet
            {
                Vector2Int nextCoords = occupiedSquare + direction * i; //die nächste Koordinate auf der der  Läufer stehen könnte [occupiedSquare ist in Piece definiert]
                Piece piece = board.GetPieceOnSquare(nextCoords);//die Figur die eventuell auf dem Feld steht wird geladen
                if (!board.CheckIfCoordinatesAreOnBoard(nextCoords))//Wenn die Koordinaten für den nächsten Zug außerhalb des Bretts sind wird dieser nicht mehr zur Liste mit dem möglichen Zügen hinzugefügt
                    break;//kein möglicher Zug
                if (piece == null)//wenn keine Figur auf dem Feld steht
                    TryToAddMove(nextCoords);//Dann ist das ein möglicher Zug
                else if (!piece.IsFromSameTeam(this))//Wenn die Figur vom gegnerischen Team ist
                {
                    TryToAddMove(nextCoords);//Dann ist das ein möglicher Zug
                    break;
                }
                else if (piece.IsFromSameTeam(this))//Wenn die Figur vom selben Team ist
                    break;//Dann ist das kein möglicher Zug
            }
        }
    }

    public override void MovePiece(Vector2Int coords)//Methode um den König zu bewegen
    {
        base.MovePiece(coords);//Auf diese Koordinaten
        if (coords == leftCastlingMove)//bei Rochade:
        {
            board.UpdateBoardOnPieceMove(coords + Vector2Int.right, leftRook.occupiedSquare, leftRook, null);//der König wird bewegt
            leftRook.MovePiece(coords + Vector2Int.right);//der Turm wird bewegt
        }
        else if (coords == rightCastlingMove)
        {
            board.UpdateBoardOnPieceMove(coords + Vector2Int.left, rightRook.occupiedSquare, rightRook, null);//der König wird bewegt
            rightRook.MovePiece(coords + Vector2Int.left); //der Turm wird bewegt
        }
    }
}