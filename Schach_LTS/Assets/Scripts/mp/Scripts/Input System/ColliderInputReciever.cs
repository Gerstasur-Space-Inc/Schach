using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColliderInputReciever : InputReciever
{
    private Vector3 clickPosition;
    [SerializeField] private Camera viewCam;
    [SerializeField] private Camera mainCam;
    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hit;
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit))
            {
                clickPosition = hit.point;
                OnInputRecieved();
            } 
        }
    }
    public Ray camRay()
    {
        if (viewCam.enabled)
            return viewCam.ScreenPointToRay(Input.mousePosition);
        if (mainCam.enabled)
            return mainCam.ScreenPointToRay(Input.mousePosition);
        return viewCam.ScreenPointToRay(Input.mousePosition);
    }
    
    public override void OnInputRecieved()
    {
        foreach (var handler in inputHandlers)
        {
            handler.ProcessInput(clickPosition, null, null);
        }
    }
}
