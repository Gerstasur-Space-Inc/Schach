using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Kamera2 : MonoBehaviour
{

    private float RotateX = 5.0f;
    private float RotateY = 5.0f;

    public float XRotateSpeed;
    public float YRotateSpeed;

    private Vector3 mousePos;

    void Start()
    {
        Debug.Log("Mouse Pos: " + mousePos);
    }

    // Update is called once per frame
    void Update()
    {
        RotateX = Input.GetAxis("Mouse x");
        RotateY = Input.GetAxis("Mouse y");

        rotateCam(); //kamera entsprechend drehen       
    }

    void rotateCam()
    {
        if (Input.GetMouseButton(2) && Input.GetAxis("Mouse X") < 0)
        {
            transform.Rotate(Vector3.up, RotateX * Time.deltaTime * XRotateSpeed * XRotateSpeed);
        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse X") > 0)
        {
            transform.Rotate(Vector3.right, RotateY * Time.deltaTime * YRotateSpeed * YRotateSpeed);
        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse Y") < 0)
        {

        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse X") > 0)


        }

    }
}
