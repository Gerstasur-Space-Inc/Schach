using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KameraZoom : MonoBehaviour
{
    private float zoom;
    [SerializeField] private float zoomspeed;
    [SerializeField] private KameraManager kameraManager;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        zoom = Input.mouseScrollDelta.y;

        if (kameraManager.isviewCam == true)
        {
           zoomCam();
        }
        else
        {
            
        }
        
    }
    void zoomCam() 
    {
        transform.Translate(Vector3.forward * Time.deltaTime * zoom * zoomspeed);
    }
}
