using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HorizontalKameraMove : MonoBehaviour
{
    // Start is called before the first frame update
    private float RotateSpeed;
    void Start()
    {
        Kamera2 K2 = new Kamera2();
        RotateSpeed = K2.GetRotateSpeed();
    }

    // Update is called once per frame
    void Update()
    {
        rotateCamVertical();
    }
   
    void rotateCamVertical()
    {
        if (Input.GetMouseButton(2) && Input.GetAxis("Mouse Y") < 0)
        {
            transform.Rotate(Vector3.left * Time.deltaTime * RotateSpeed * -1);

        }
        else if (Input.GetMouseButton(2) && Input.GetAxis("Mouse Y") > 0)
        {
            transform.Rotate(Vector3.left * Time.deltaTime * RotateSpeed);

        }

      
    }
}
