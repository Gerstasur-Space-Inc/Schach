using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class AudioManager : MonoBehaviour
{
    [SerializeField] private AudioClip takeSound;
    [SerializeField] public AudioSource source;

    private void OnTake()
    {
        gameObject.AddComponent<AudioSource>();
    }
}
