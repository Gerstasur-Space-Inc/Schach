﻿using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;

public class ChessUIManager : MonoBehaviour
{
    [Header("Dependencies")]
    [SerializeField] private NetworkManager networkManager;
    [SerializeField] private CameraSetup camsetup;

    [Header("Buttons")]
    [SerializeField] private Button whiteTeamButtonButton;
    [SerializeField] private Button blackTeamButtonButton;

    [Header("Texts")]
    [SerializeField] private Text finishText;
    [SerializeField] private Text connectionStatus;

    [Header("Screen Gameobjects")]
    [SerializeField] private GameObject GameOverScreen;
    [SerializeField] private GameObject ConnectScreen;
    [SerializeField] private GameObject TeamSelectionScreen;
    [SerializeField] private GameObject GameModeSelectionScreen;

    [Header("Other UI")]
    [SerializeField] private Dropdown gameLevelSelection;

    public static int gamemode = 0;

    private void Awake()
    {
        gameLevelSelection.AddOptions(Enum.GetNames(typeof(ChessLevel)).ToList());
        OnGameLaunched();
    }



    internal void OnGameLaunched()
    {
        GameOverScreen.SetActive(false);
        TeamSelectionScreen.SetActive(false);
        ConnectScreen.SetActive(false);
        GameModeSelectionScreen.SetActive(true);
    }

    public void OnSinglePlayerModeSelected()
    {
        GameOverScreen.SetActive(false);
        TeamSelectionScreen.SetActive(false);
        ConnectScreen.SetActive(false);
        GameModeSelectionScreen.SetActive(false);
        gamemode = 1;
    }

    public void OnMultiPlayerModeSelected()
    {
        connectionStatus.gameObject.SetActive(true);
        GameOverScreen.SetActive(false);
        TeamSelectionScreen.SetActive(false);
        ConnectScreen.SetActive(true);
        GameModeSelectionScreen.SetActive(false);
        gamemode = 2;

    }

    internal void OnGameFinished(string winner)
    {

        GameOverScreen.SetActive(true);
        TeamSelectionScreen.SetActive(false);
        ConnectScreen.SetActive(false);
        finishText.text = string.Format("{0} won", winner);

    }

    public void OnConnect()
    {
        networkManager.SetPlayerLevel((ChessLevel)gameLevelSelection.value);
        networkManager.Connect();
    }

    public void SetConnectionStatusText(string status)
    {
        connectionStatus.text = status;
    }

    internal void ShowTeamSelectionScreen()
    {
        GameOverScreen.SetActive(false);
        TeamSelectionScreen.SetActive(true);
        ConnectScreen.SetActive(false);
    }

    public void OnGameStarted()
    {
        GameOverScreen.SetActive(false);
        TeamSelectionScreen.SetActive(false);
        ConnectScreen.SetActive(false);
        connectionStatus.gameObject.SetActive(false);
        GameModeSelectionScreen.SetActive(false);
    }

    public void SelectTeam(int team)
    {
        Debug.Log("TeamSelected!");

        networkManager.SetPlayerTeam(team);

        // camsetup.SetupCamera((TeamColor)team);

        if (team.Equals(1))
        {
            Debug.Log("CameraFlipped!");
            camsetup.FlipCamera();
        } else if (team.Equals(0))
        {
            Debug.Log("CameraFlipped!");
            camsetup.FlipCamera();
        }
    }

    internal void RestrictTeamChoice(TeamColor occpiedTeam)
    {
        Button buttonToDeactivate = occpiedTeam == TeamColor.White ? whiteTeamButtonButton : blackTeamButtonButton;
        buttonToDeactivate.interactable = false;
    }
}
