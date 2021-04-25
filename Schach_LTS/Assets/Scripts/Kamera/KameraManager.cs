using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KameraManager : MonoBehaviour
{
    // Start is called before the first frame update
    public ChessGameController chessGameController;
    [SerializeField] public Camera playCamWhite;
    [SerializeField] public Camera playCamBlack;
    [SerializeField] public Camera viewCam;
    private bool isviewCam;

    private void Awake()
    {
    }
    void Start()
    {
        switchToplayCamWhite();
    }

    // Update is called once per frame
    void Update()
    {
        if (chessGameController.activePlayer == chessGameController.whitePlayer && !viewCam)
        {
            switchToplayCamWhite();
            isviewCam = false;
        }
        else if (chessGameController.activePlayer == chessGameController.blackPlayer && !viewCam)
        {
            switchToplayCamBlack();
            isviewCam = false;
        }
        else if (Input.GetKeyDown(KeyCode.V) && !isviewCam)
        {
            switchoViewCam();
            isviewCam = true;

        }
        else if ((Input.GetKeyDown(KeyCode.V) && chessGameController.activePlayer == chessGameController.whitePlayer && isviewCam) || chessGameController.activePlayer == chessGameController.whitePlayer && !viewCam)
        {
            switchToplayCamWhite();
            isviewCam = false;
        }
        else if ((Input.GetKeyDown(KeyCode.V) && chessGameController.activePlayer == chessGameController.blackPlayer && isviewCam) || chessGameController.activePlayer == chessGameController.blackPlayer && !viewCam)
        {
            switchToplayCamBlack();
            isviewCam = false;
        }

    }


    public void switchoViewCam()
    {
        playCamWhite.enabled = false;
        playCamBlack.enabled = false;
        viewCam.enabled = true;
    }
    public void switchToplayCamWhite()
    {
        viewCam.enabled = false;
        playCamWhite.enabled = true;
    }
    public void switchToplayCamBlack()
    {
        viewCam.enabled = false;
        playCamBlack.enabled = true;
    }
}
