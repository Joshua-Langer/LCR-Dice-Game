#include "stdafx.h"
#include "Dice.h"
#include <time.h>
#include <iostream>

// int method to roll dice and get the side it lands on, will be used for determining where chips go.
int Dice::rollDice()
{
	int diceOutcome;
	
	diceOutcome = (rand() % 6) + 1;
	return diceOutcome;
}