using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderInputReciever : InputReciever {
    private Vector3 clickPosition;
<<<<<<< HEAD

    public Camera playCam;//Main Camera
    public Camera viewCam;//


    void Update() {
        if (Input.GetMouseButtonDown(0)) {
            RaycastHit hit;
            Ray ray =playCam.isActiveAndEnabled ? playCam.ScreenPointToRay(Input.mousePosition) : viewCam.ScreenPointToRay(Input.mousePosition);
            
            if (Physics.Raycast(ray, out hit)) {
=======
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
>>>>>>> parent of 2e46235 (Merge pull request #7 from Gerstasur-Space-Inc/Kamera-verbesserung)
                clickPosition = hit.point;
                OnInputRecieved();
            }
        }
    }

    public override void OnInputRecieved() {
        foreach (var handler in inputHandlers) {
            handler.ProcessInput(clickPosition, null, null);
        }
    }
}