#pragma once

#include "stdafx.h"
#include <iostream>

class Player
{
public:
	//int numPlayers;
	std::string playerName = "";

	Player() = default;

	void getName();
	static void gameRules();
};

// TODO: Setup Player Chip Logic in the header and implement in the cpp.
