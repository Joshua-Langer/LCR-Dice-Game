#pragma once

#include "stdafx.h"
#include "Player.h"

using namespace std;

class Game
{
private:
	int numberOfPlayers;
	Player m_player;

	void WelcomePlayers();
	void GetPlayerInput(string& playerInput) const;
public:
	void RunGame();
};