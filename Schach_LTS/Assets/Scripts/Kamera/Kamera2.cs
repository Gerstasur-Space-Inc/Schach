using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Kamera2 : MonoBehaviour
{
    private float RotateSpeed = 200;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        rotateCam(); //kamera entsprechend drehen  
    }

    void rotateCam()
    {
        if (Input.GetMouseButton(2) && Input.GetAxis("Mouse X") < 0)
        {
            transform.Rotate(Vector3.up * Time.deltaTime * RotateSpeed * -1);
            // Debug.Log("Es funktioniert wahrscheinlich immer noch nicht");           
        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse X") > 0)
        {
            transform.Rotate(Vector3.up * Time.deltaTime * RotateSpeed);
            // Debug.Log("Es funktioniert wahrscheinlich immer noch nicht");
        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse Y") < 0)
        {
            transform.Rotate(Vector3.left * Time.deltaTime * RotateSpeed * -1);
            // Debug.Log("Es funktioniert wahrscheinlich immer noch nicht");
        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse Y") > 0)   
        {
            transform.Rotate(Vector3.left * Time.deltaTime * RotateSpeed);
            // Debug.Log("Es funktioniert wahrscheinlich immer noch nicht");
        }

    }
}
