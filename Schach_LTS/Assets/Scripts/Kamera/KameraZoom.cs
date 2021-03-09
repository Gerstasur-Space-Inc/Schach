using System.Collections;
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

        zoom = Input.mouseScrollDelta.y;
        zoomCam();
    }
    void zoomCam() 
    {

        transform.Translate(Vector3.forward * Time.deltaTime * zoom * zoompeed);
    }
}
