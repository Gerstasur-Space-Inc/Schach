﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KameraZoom : MonoBehaviour
{



    public int zoom;
    public float zoompeed;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
<<<<<<< HEAD
        zoom = Input.mouseScrollDelta.y;
        zoomCam();
    }
    void zoomCam() 
=======

        if (Input.GetKeyDown(KeyCode.KeypadMinus))
        {//Zoom wird auf positiv / negativ oder null gesetzt
            zoom = 1;
        }
        else if (Input.GetKeyDown(KeyCode.KeypadPlus))
        {
            zoom = -1;
        }
        if (Input.GetKeyUp(KeyCode.KeypadMinus) || Input.GetKeyUp(KeyCode.KeypadPlus))
        {
            zoom = 0;
        }


        zoomCam();

    }
    void zoomCam()
>>>>>>> parent of 2e46235 (Merge pull request #7 from Gerstasur-Space-Inc/Kamera-verbesserung)
    {

        transform.Translate(Vector3.forward * Time.deltaTime * zoom * zoompeed);
    }
}
