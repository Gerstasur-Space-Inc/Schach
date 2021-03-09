using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KameraManager : MonoBehaviour {
   

    public Camera playCam;//Main Camera
    public Camera viewCam;//

    private void Awake() {
        switchToplayCam();
    }
    void Start() {

    }


    void Update() {
        if (Input.GetKeyDown(KeyCode.V) && !isviewCam) {
            switchoViewCam();
            isviewCam = true;

        } else if (Input.GetKeyDown(KeyCode.V) && isviewCam) {



            switchToplayCam();
        }


    }


    public void switchoViewCam() {

        playCam.enabled = false;
        viewCam.enabled = true;

    }
    public void switchToplayCam() {
        viewCam.enabled = false;
        playCam.enabled = true;


    }
}
