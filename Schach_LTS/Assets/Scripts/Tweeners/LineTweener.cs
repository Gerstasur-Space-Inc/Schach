
using DG.Tweening;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LineTweener : MonoBehaviour, IObjectTweener {

    private float movementSpeedMultiplyer = 150;
    private float movementSpeed;

    public void MoveTo(Transform transform, Vector3 targetPosition) 
    {
        float distance = Vector3.Distance(targetPosition, transform.position);

        movementSpeed = distance * Time.deltaTime * movementSpeedMultiplyer;

        transform.DOMove(targetPosition, distance / movementSpeed);
    }
}