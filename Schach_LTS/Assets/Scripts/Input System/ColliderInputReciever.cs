using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderInputReciever : InputReciever {
    private Vector3 clickPosition;

    public Camera playCam;//Main Camera
    public Camera viewCam;//


    void Update() {
        if (Input.GetMouseButtonDown(0)) {
            RaycastHit hit;
            Ray ray =playCam.isActiveAndEnabled ? playCam.ScreenPointToRay(Input.mousePosition) : viewCam.ScreenPointToRay(Input.mousePosition);
            
            if (Physics.Raycast(ray, out hit)) {
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