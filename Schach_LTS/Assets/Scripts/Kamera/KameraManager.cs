﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KameraManager : MonoBehaviour
{
    // Start is called before the first frame update
    public ChessGameController chessGameController;
    [SerializeField] public Camera playCamWhite;
    [SerializeField] public Camera playCamBlack;
    [SerializeField] public Camera viewCam;

    private void Awake()
    {
        switchToplayCamWhite();
    }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //changeCam();

        changecam2();
    }


   private void  changecam2()
    {

        if((chessGameController.activePlayer == chessGameController.whitePlayer) && viewCam.enabled == false)
        {
            switchToplayCamWhite();
        }

        if(chessGameController.activePlayer == chessGameController.blackPlayer && viewCam.enabled == false)
        {
            switchToplayCamBlack();
        }

        if (Input.GetKeyDown(KeyCode.V) && viewCam.enabled == false)
        {
            switchoViewCam();
        }

        else if (Input.GetKeyDown(KeyCode.V) && viewCam.enabled == true)
        {
            if (chessGameController.activePlayer == chessGameController.whitePlayer)
            {
                switchToplayCamWhite();
            }

            if (chessGameController.activePlayer == chessGameController.blackPlayer)
            {
                switchToplayCamBlack();
            }
        }
    }
   
    public void deactivateAllCams()
    {
        playCamBlack.enabled = false;
        playCamWhite.enabled = false;
        viewCam.enabled = false;
    }

    public void switchoViewCam()
    {
        deactivateAllCams();
       
        viewCam.enabled = true;
    }
    public void switchToplayCamWhite()
    {
        deactivateAllCams();
        playCamWhite.enabled = true;
    }
    public void switchToplayCamBlack()
    {
        deactivateAllCams();
        playCamBlack.enabled = true;
    }

}
