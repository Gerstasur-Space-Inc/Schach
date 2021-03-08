using System.Collections.Generic;
using UnityEngine;

public class Pawn : Piece
{
    //TODO: Hier muss En passen ?? implementiert werden
    public override List<Vector2Int> SelectAvaliableSquares()
    {
        avaliableMoves.Clear();//die letzte List der Möglichkeiten wird gelehrt

        Vector2Int direction = team == TeamColor.White ? Vector2Int.up : Vector2Int.down;//die Zugrichtung wird anhand des Teams bestimmt, da ein Bauer nicht zurückgehen kann
        float range = hasMoved ? 1 : 2;//Wenn er noch nicht bewegt wurde hat ein Bauer einen Doppelschritt
        for (int i = 1; i <= range; i++)//für jede Zugweite werden die freien Felder berechnet
        {
            Vector2Int nextCoords = occupiedSquare + direction * i;//die nächste Koordinate auf der der  Läufer stehen könnte [occupiedSquare ist in Piece definiert]
            Piece piece = board.GetPieceOnSquare(nextCoords);//die Figur die eventuell auf dem Feld steht wird geladen
            if (!board.CheckIfCoordinatesAreOnBoard(nextCoords))//Wenn die Koordinaten für den nächsten Zug außerhalb des Bretts sind wird dieser nicht mehr zur Liste mit dem möglichen Zügen hinzugefügt
                break;//kein möglicher Zug
            if (piece == null)//Wenn keine Figur dasteht
                TryToAddMove(nextCoords);//ist es ein möglicher Zug

            else
                break;
        }
        //Außer dem Geradeaus-Gehen kann ein Bauer auch schlagen
        Vector2Int[] takeDirections = new Vector2Int[] { new Vector2Int(1, direction.y), new Vector2Int(-1, direction.y) };//zugrichtungen zum Schlagen
        for (int i = 0; i < takeDirections.Length; i++)//für jede Zugweite werden die freien Felder berechnet
        {
            Vector2Int nextCoords = occupiedSquare + takeDirections[i];  //die nächste Koordinate auf der der  Läufer stehen könnte [occupiedSquare ist in Piece definiert]
            Piece piece = board.GetPieceOnSquare(nextCoords); //die Figur die eventuell auf dem Feld steht wird geladen
            if (!board.CheckIfCoordinatesAreOnBoard(nextCoords))//Wenn eine Figur da steht ist ein Zug möglich
                continue;
            if (piece != null && !piece.IsFromSameTeam(this))//wenn eine Figur dasteht und sie nicht vom selben Team ist
            {
                TryToAddMove(nextCoords);//Kann man schlagen
            }
        }
        return avaliableMoves;// Wenn alle möglichen Züge zur Liste hinzugefügt wurden, werden diese zurückgegeben
    }

    public override void MovePiece(Vector2Int coords)//Methode um den Bauern zu bewegen
    {
        base.MovePiece(coords);
        CheckPromotion();//Testen ob der Bauer an der letzten Reihe angekommen ist: *Dame*
    }

    private void CheckPromotion()
    {
        int endOfBoardYCoord = team == TeamColor.White ? Board.BOARD_SIZE - 1 : 0;// die letzte Reihe des jeweiligen Teams erhalten
        if (occupiedSquare.y == endOfBoardYCoord) // Wenn er auf dieser Reihe steht:
        {
            board.PromotePiece(this);//Diese Figur zur Dame machen
            //board macht das, weil nur Board über alle Figuren bescheid weiß
        }
    }
}
