using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceInputHandler : MonoBehaviour,IInputHandler
{

    [SerializeField] private Board board;
   
   

   /* public void ProcessInput(Vector3 inputPosition, GameObject selectedObject, Action onClick, Piece selectedPiece)
    {

        // board.OnPieceSelected(selectedPiece, inputPosition);
        board.OnSquareSelected(inputPosition);
        
    }*/

    public void ProcessInput(Vector3 inputPosition, GameObject selectedObject, Action onClick)
    {
        board.OnSquareSelected(inputPosition);
    }
}
