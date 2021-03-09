using System.Collections.Generic;
using UnityEngine;

public class Knight : Piece
{

    Vector2Int[] offsets = new Vector2Int[]//Richtungen in die sich ein Springer | das Pferd bewegen kann
    
     {
        new Vector2Int(2, 1),
        new Vector2Int(2, -1),
        new Vector2Int(1, 2),
        new Vector2Int(1, -2),
        new Vector2Int(-2, 1),
        new Vector2Int(-2, -1),
        new Vector2Int(-1, 2),
        new Vector2Int(-1, -2),
     };

    public override List<Vector2Int> SelectAvaliableSquares()//Methode um alle freien Felder in einer Liste zu erfassen
    {
        avaliableMoves.Clear();//die letzte List der Möglichkeiten wird gelehrt

        for (int i = 0; i < offsets.Length; i++) //für jede Zugmöglichkeit werden dir freien Felder berechnet
        {
            Vector2Int nextCoords = occupiedSquare + offsets[i];//die nächste Koordinate auf der der  Läufer stehen könnte [occupiedSquare ist in Piece definiert]
            Piece piece = board.GetPieceOnSquare(nextCoords);//die Figur die eventuell auf dem Feld steht wird geladen
            if (!board.CheckIfCoordinatesAreOnBoard(nextCoords))
                continue;
            if (piece == null || !piece.IsFromSameTeam(this))//Wenn keine Figur auf dem Feld steht oder die Figur nicht vom selben Team ist 
                TryToAddMove(nextCoords);//Ist es ein möglicher Zug
        }
        return avaliableMoves;// Wenn alle möglichen Züge zur Liste hinzugefügt wurden, werden diese zurückgegeben
    }
}
