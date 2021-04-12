#pragma once

#include "stdafx.h"

class Dice {
private:
	int rollResult;

public:
	void rolling();
	void roll();
	void runGame();
	int center, a, z, c, chips[100];
	// a is the position in the chips array
	// z is for comparing the last position in the name array from Game class
	// c is for comparing the current position in the name array and compare it to z
	// chips[100] is the array for the max amount of players and their count of chips
};