#include <iostream>
#include "Dice.h"
#include <conio.h>

using namespace std;

// Pauses the game so the active player can begin their roll.
void Dice::rolling()
{
	cout << "Press any key to roll...\n";
	_getch(); // receive an input from the player to ensure they know to continue on.
	cout << "Rolling...\n";
}

// Checks the amounts of dice the current player has and assigns the amount of rolls.
void Dice::runGame()
{
	if (chips[a] == 1)
	{
		rolling();
		roll();
	}
	else if (chips[a] == 2)
	{
		rolling();
		roll();
		roll();
	}
	else if (chips[a] == 3)
	{
		rolling();
		roll();
		roll();
		roll();
	}
}

// Handles the results and displays each time roll is called
void Dice::roll()
{
	rollResult = (rand() % 6) + 1; // Generates a random roll

	switch (rollResult)
	{
	case 1:
		if (c == 0) // First position in the array
		{
			cout << "L" << endl;
			chips[0] += -1;
			chips[z] += 1;
			break;
		}
		else
		{
			cout << "L" << endl;
			chips[a] += -1;
			chips[a - 1] += 1;
			break;
		}
	case 2:
		if (z == c) // Last position in the array
		{
			cout << "R" << endl;
			chips[z] += -1;
			chips[0] += 1;
			break;
		}
		else
		{
			cout << "R" << endl;
			chips[a] += -1;
			chips[a + 1] += 1;
			break;
		}
	case 3:
		cout << "C" << endl;
		chips[a] += -1;
		center += 1;
		break;
	case 4:
		cout << "4" << endl;
		break;
	case 5:
		cout << "5" << endl;
		break;
	case 6:
		cout << "6" << endl;
		break;
	}
}