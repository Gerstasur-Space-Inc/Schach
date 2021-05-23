using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SingleplayerChessGameController : ChessGameController
{
	protected override void SetGameState(GameState state)
	{
		this.state = state;
	}

	public override void TryToStartThisGame()
	{
		SetGameState(GameState.Play);

	}
	protected override void ChangeActiveTeam()
	{

		activePlayer = activePlayer == whitePlayer ? blackPlayer : whitePlayer;
		cameraSetup.FlipCamera();

	}

	public override bool CanPerformMove()
	{
		if (!IsGameInProgress())
			return false;
		return true;
	}
}
