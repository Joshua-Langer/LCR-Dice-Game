#include "stdafx.h"
#include "Player.h"
#include "Dice.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

// Get the players name from console input.
void Player::getName()
{
	cin >> playerName;
}

// Get Player Chip count and roll the dice
void Player::getChips()
{
	switch (Dice::rollDice())
	{
	case 1:
		if (Dice::rollDice() == 1)
		{
			cout << "You rolled L. Move 1 chip left.\n";
			// Setup Logic to move a chip
		}
		break;
	case 2:
		if (Dice::rollDice() == 2)
		{
			cout << "You rolled R. Move 1 chip right.\n";
			// Setup Logic to move a chip
		}
		break;
	case 3:
		if (Dice::rollDice() == 3)
		{
			cout << "You rolled C. Place chip in center pile.\n";
			// Setup Logic to move a chip
		}
		break;
	case 4:
		if (Dice::rollDice() == 4)
		{
			cout << "You rolled 4. Next player's turn.\n";
		}
		break;
	case 5:
		if (Dice::rollDice() == 5)
		{
			cout << "You rolled 5. Next player's turn.\n";
		}
		break;
	case 6:
		if (Dice::rollDice() == 6)
		{
			cout << "You rolled 6. Next player's turn.\n";
		}
		break;
	}
}

// Print the Game Rules from the text file to the console.
void Player::gameRules()
{
	string getContent;
	ifstream openfile("Rules.txt");

	while (getline(openfile, getContent))
	{
		cout << getContent << endl;
	}
}