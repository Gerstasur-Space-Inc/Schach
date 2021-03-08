using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KameraManager : MonoBehaviour
{
    // Start is called before the first frame update

    public Camera playCam;//Main Camera
    public Camera viewCam;//

    private void Awake()
    {
        switchToplayCam();
    }
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.V))
        {
            switchoViewCam();
        }
        else if (Input.GetKeyDown(KeyCode.B))
        {
            switchToplayCam();
        }


    }


    public void switchoViewCam()
    {

        playCam.enabled = false;
        viewCam.enabled = true;

    }
    public void switchToplayCam()
    {
        viewCam.enabled = false;
        playCam.enabled = true;


    }
}
