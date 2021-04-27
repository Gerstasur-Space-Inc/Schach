using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceInputHandler : MonoBehaviour,IInputHandler
{

    [SerializeField] private Board board;
   
   

    public void ProcessInput(Vector3 inputPosition, GameObject selectedObject, Action onClick, Piece selectedPiece)
    {
        Debug.Log("selected position:" + inputPosition.x +"|" +inputPosition.y );
        board.OnPieceSelected(selectedPiece);
    }
}
