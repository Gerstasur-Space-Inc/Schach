using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Kamera : MonoBehaviour
{
    // Start is called before the first frame update

    private float RotateX = 5.0f;
    private float RotateY = 5.0f;
    private float RotateZ = 5.0f;

    public float XRotateSpeed;
    public float YRotateSpeed;
    public float ZRotateSpeed;

    public int zoom;
    private Vector3 mousePos;
   
    void Start()
    {
        Debug.Log("Mouse Pos: " + mousePos);
    }

    // Update is called once per frame
    void Update()
    {
        RotateX = Input.GetAxis("Horizontal");
        RotateY = Input.GetAxis("Vertical");
        RotateZ = Input.mouseScrollDelta.y;
             
        rotateCam();//kamera entsprechend drehen       
    }
   
    void rotateCam() {

        transform.Rotate(Vector3.up, RotateX * Time.deltaTime * XRotateSpeed * XRotateSpeed); //quadratisch: bessere Nutzerinteraktion
        transform.Rotate(Vector3.right, RotateY * Time.deltaTime * YRotateSpeed * YRotateSpeed);
        transform.Rotate(Vector3.forward, RotateZ * Time.deltaTime * ZRotateSpeed * ZRotateSpeed);

    }
}
