#pragma once

#include "stdafx.h"
#include <iostream>

class Player
{
public:
	int numPlayers;
	int playerChips;
	std::string playerName = "";

	Player() = default;

	void getChips();
	void getName();
	static void gameRules();
};
