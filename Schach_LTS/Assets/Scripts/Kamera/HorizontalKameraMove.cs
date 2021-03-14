﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HorizontalKameraMove : MonoBehaviour
{
    // Start is called before the first frame update
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
        RotateSpeed = mousePosDiff.y * 50;

        rotateCamVertical();
    }

    void rotateCamVertical()
    {
        if ((Input.GetMouseButton(2) || Input.GetKey(KeyCode.LeftShift)) && Input.GetAxis("Mouse Y") != 0)
        {
            transform.Rotate(Vector3.left * Time.deltaTime * RotateSpeed * -1);
        }
    }
}
