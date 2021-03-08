using System.Collections.Generic;
using UnityEngine;



public class Bishop : Piece
{
    private Vector2Int[] directions = new Vector2Int[] //Richtungen in die sich ein Läufer bewegen kann
    {
        new Vector2Int(1, 1),
        new Vector2Int(1, -1),
        new Vector2Int(-1, 1),
        new Vector2Int(-1,- 1),
    };
    public override List<Vector2Int> SelectAvaliableSquares() //Methode um alle freien Felder in einer Liste zu erfassen
    {
        avaliableMoves.Clear();//die letzte List der Möglichkeiten wird gelehrt
        float range = Board.BOARD_SIZE;//Wie weit kann ein Läufer maximal ziehen
        foreach (var direction in directions) //für jede Richtung werden nun die freien Felder berechnet
        {
            for (int i = 1; i <= range; i++) //für jede Zugweite werden die freien Felder berechnet
            {
                Vector2Int nextCoords = occupiedSquare + direction * i; //die nächste Koordinate auf der der  Läufer stehen könnte [occupiedSquare ist in Piece definiert]
                Piece piece = board.GetPieceOnSquare(nextCoords); //die Figur die eventuell auf dem Feld steht wird geladen
                if (!board.CheckIfCoordinatesAreOnBoard(nextCoords))//Wenn die Koordinaten für den nächsten Zug außerhalb des Bretts sind wird dieser nicht mehr zur Liste mit dem möglichen Zügen hinzugefügt
                    break;//kein möglicher Zug
                if (piece == null)//wenn keine Figur auf dem Feld steht
                    TryToAddMove(nextCoords);//Dann ist das ein möglicher Zug
                else if (!piece.IsFromSameTeam(this)) //Wenn die Figur vom gegnerischen Team ist
                {
                    TryToAddMove(nextCoords);//Dann ist das ein möglicher Zug
                    break;
                }
                else if (piece.IsFromSameTeam(this))//Wenn die Figur vom selben Team ist
                    break;//Dann ist das kein möglicher Zug
            }
        }
        return avaliableMoves; // Wenn alle möglichen Züge zur Liste hinzugefügt wurden, werden diese zurückgegeben
    }
}