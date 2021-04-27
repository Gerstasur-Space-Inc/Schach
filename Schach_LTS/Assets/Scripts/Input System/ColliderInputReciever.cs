using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderInputReciever : InputReciever {
    private Vector3 clickPosition;
    
    public Camera viewCam;//
    public Camera WhiteTeamCam;
    public Camera BlackTeamCam;
    public Piece selection;


    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = camRay();
            if (Physics.Raycast(ray, out hit))
            {
                clickPosition = hit.point;

                 selection = hit.transform.gameObject.GetComponent<Piece>();

                OnInputRecieved();
            }
        }
    }


    public Ray camRay()
    {
        if (WhiteTeamCam.enabled)
            return WhiteTeamCam.ScreenPointToRay(Input.mousePosition);
        if (BlackTeamCam.enabled)
            return BlackTeamCam.ScreenPointToRay(Input.mousePosition);
        return viewCam.ScreenPointToRay(Input.mousePosition);
    }

    public override void OnInputRecieved() {
        foreach (var handler in inputHandlers) {
            handler.ProcessInput(clickPosition, null, null,selection);
        }
    }
}