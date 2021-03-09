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
           
        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse X") > 0)
        {
            transform.Rotate(Vector3.up * Time.deltaTime * RotateSpeed);
         
        }
       /* else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse Y") < 0)
        {
            transform.Rotate(Vector3.left * Time.deltaTime * RotateSpeed * -1);
           
        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse Y") > 0)   
        {
            transform.Rotate(Vector3.left * Time.deltaTime * RotateSpeed);
           
        }*/

    }

  public  float GetRotateSpeed()
    {
        return RotateSpeed;
    }
}
