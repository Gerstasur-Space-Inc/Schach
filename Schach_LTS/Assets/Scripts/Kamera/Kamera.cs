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
<<<<<<< HEAD
   
=======


>>>>>>> parent of 2e46235 (Merge pull request #7 from Gerstasur-Space-Inc/Kamera-verbesserung)
    void Start()
    {
        Debug.Log("Mouse Pos: " + mousePos);
    }

    // Update is called once per frame
    void Update()
    {
        RotateX = Input.GetAxis("Horizontal");
        RotateY = Input.GetAxis("Vertical");
<<<<<<< HEAD
        // RotateZ = Input.mouseScrollDelta.y;
             
        rotateCam();//kamera entsprechend drehen       
=======
        RotateZ = Input.mouseScrollDelta.y;



        rotateCam();//kamera entsprechend drehen




>>>>>>> parent of 2e46235 (Merge pull request #7 from Gerstasur-Space-Inc/Kamera-verbesserung)
    }
   
    void rotateCam() {

        transform.Rotate(Vector3.up, RotateX * Time.deltaTime * XRotateSpeed * XRotateSpeed);//quadratisch: bessere Nutzerinteraktion
        transform.Rotate(Vector3.right, RotateY * Time.deltaTime * YRotateSpeed * YRotateSpeed);
        transform.Rotate(Vector3.forward, RotateZ * Time.deltaTime * ZRotateSpeed * ZRotateSpeed);


    }
}
