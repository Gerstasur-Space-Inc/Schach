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
    private bool isviewCam = false;

    [SerializeField] private float Camdelay = 2;

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
        //changeCam3();
    }


    private void changecam2()
    {
        if (Input.GetKeyDown(KeyCode.V)) { isviewCam = isviewCam ? false : true; }
        if (!isviewCam)
        {

            if (chessGameController.activePlayer == chessGameController.whitePlayer)
            {
                // switchToplayCamWhite();
                StartCoroutine(SwitchToPlayCamWhiteDelay(Camdelay));
            }

            if (chessGameController.activePlayer == chessGameController.blackPlayer)
            {
                //switchToplayCamBlack();
                StartCoroutine(SwitchToPlayCamBlackDelay(Camdelay));
            }
        }
        else
        {
            StartCoroutine(SwitchToViewCamDelay(Camdelay));
        }

    }

    private void changeCam3()
    {


        if ((chessGameController.activePlayer == chessGameController.whitePlayer) && viewCam.enabled == false)
        {
            StartCoroutine(SwitchToPlayCamWhiteDelay(Camdelay));
        }

        if (chessGameController.activePlayer == chessGameController.blackPlayer && viewCam.enabled == false)
        {
            StartCoroutine(SwitchToPlayCamBlackDelay(Camdelay));
        }

        if (Input.GetKeyDown(KeyCode.V) && viewCam.enabled == false)
        {
            StartCoroutine(SwitchToViewCamDelay(Camdelay));
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

    public IEnumerator SwitchToPlayCamWhiteDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        switchToplayCamWhite();
    }

    public IEnumerator SwitchToPlayCamBlackDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        switchToplayCamBlack();
    }

    public IEnumerator SwitchToViewCamDelay(float delay)
    {
        yield return new WaitForSeconds(delay);
        switchoViewCam();
    }


    private void changeCam()
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


    #region Camera methods
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
    #endregion
}
