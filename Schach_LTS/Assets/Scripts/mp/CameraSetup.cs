using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraSetup : MonoBehaviour
{
    [SerializeField] Camera mainCamera;
    [SerializeField] private Camera viewCam;
    bool isviewCam = false;

    public void SetupCamera(TeamColor team)
    {
        if(team == TeamColor.Black)
        {
            FlipCamera();
        }
    }

    public void FlipCamera()
    {
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
        viewCam.enabled = true;
        Camera.main.enabled = false;
    }
    public void switchToPlayCam()
    {
        viewCam.enabled = false;
        Camera.main.enabled = true;
    }
}
