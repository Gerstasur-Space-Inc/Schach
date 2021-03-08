using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Kamera2 : MonoBehaviour
{

    private float RotateX = 1f;
    private float RotateY = 1f;

    public float XRotateSpeed;
    public float YRotateSpeed;


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
        if (Input.GetMouseButtonDown(2) && Input.GetAxis("Mouse X") < 0)
        {
            transform.Rotate(Vector3.left * Time.deltaTime * XRotateSpeed * XRotateSpeed);
        }
        else if (Input.GetMouseButtonDown(2) && Input.GetAxis("Mouse X") > 0)
        {
            transform.Rotate(Vector3.right * Time.deltaTime * YRotateSpeed * YRotateSpeed);
        }
        else if (Input.GetMouseButtonDown(2) && Input.GetAxis("Mouse Y") < 0)
        {
            transform.Rotate(Vector3.down * Time.deltaTime * XRotateSpeed * XRotateSpeed);
        }
        else if (Input.GetMouseButtonDown(2) && Input.GetAxis("Mouse Y") > 0)
        {
            transform.Rotate(Vector3.up * Time.deltaTime * YRotateSpeed * XRotateSpeed);
        }

    }
}
