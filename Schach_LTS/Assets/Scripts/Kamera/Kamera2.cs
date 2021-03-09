using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Kamera2 : MonoBehaviour
{
    private float RotateSpeed;
    private Vector3 mousePosVorher;
    private Vector3 mousePosAktuell;
    private Vector3 mousePosDiff;

    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        mousePosVorher = mousePosAktuell;
        mousePosAktuell = Input.mousePosition;
        mousePosDiff = mousePosVorher - mousePosAktuell;
        RotateSpeed = mousePosDiff.x * 50;

        rotateCam(); //kamera entsprechend drehen  
    }

    void rotateCam()
    {
        if ((Input.GetMouseButton(2) || Input.GetKey(KeyCode.LeftShift)) && Input.GetAxis("Mouse X") != 0)
        {
            transform.Rotate(Vector3.up * Time.deltaTime * RotateSpeed * -1);
        }
    }

  public  float GetRotateSpeed()
    {
        return RotateSpeed;
    }
}
