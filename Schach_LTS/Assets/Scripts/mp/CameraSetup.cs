using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraSetup : MonoBehaviour
{
    [SerializeField] Camera mainCamera;
    [SerializeField] private Camera viewCam;
    [SerializeField] private GameObject KameraHolder;
    public static bool isviewCam = false;

    public void SetupCamera(TeamColor team)
    {

        if (team == TeamColor.White)
        {
            FlipCamera();
            Debug.LogWarning("cameraflipped");
        }
    }

    public void FlipCamera()
    {
        if (ChessUIManager.gamemode == 1)//brakes the game
        {
            mainCamera.transform.position = new Vector3(mainCamera.transform.position.x, mainCamera.transform.position.y, -mainCamera.transform.position.z);
            mainCamera.transform.Rotate(Vector3.up, 180f, Space.World);
        }
        mainCamera.transform.position = new Vector3(mainCamera.transform.position.x, mainCamera.transform.position.y, -mainCamera.transform.position.z);
        mainCamera.transform.Rotate(Vector3.up, 180f, Space.World);
    }
    public void FlipCamerawithDelay()
    {
        throw new NotImplementedException();
    }

    private void Update()
    {
        changeCam();
    }

    private void changeCam()
    {
        if (Input.GetKeyDown(KeyCode.V)) { isviewCam = isviewCam ? false : true; }
        if (isviewCam)
        {
            switchToViewCam();
        }
        else
        {
            switchToPlayCam();
        }

    }

    public void switchToViewCam()
    {
        activateViewCam();
        viewCam.gameObject.SetActive(true);
        mainCamera.gameObject.SetActive(false);
    }
    public void switchToPlayCam()
    {
        deactivateViewCam();
        viewCam.gameObject.SetActive(false);

        mainCamera.gameObject.SetActive(true);
    }


    public void activateViewCam()
    {
        KameraHolder.SetActive(true);
    }
    public void deactivateViewCam()
    {
        KameraHolder.SetActive(false);
    }
}
