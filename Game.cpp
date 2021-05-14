#include <iostream>
#include <string>
#include <fstream>
#include "Game.h"

using namespace std;

// Opens and Reads the file containing rules, Gets the player count and sets the win condition
void Game::start_game()
{
	inputFile.open("Rules.txt");
	if (inputFile.is_open())
	{
		while (getline(inputFile, line))
		{
			cout << line << endl;
		}
		inputFile.close();
	}
	else // Error checking
	{
		cout << "Unable to access rule file..." << endl;
	}

	do {
		cout << "\nEnter the number of players:" << endl;
		cin >> numPlayers;

		if (numPlayers < 3 && cin.good())
		{
			cout << "You need at least 3 players to play Left Center Right..." << endl;
		}
		else if (cin.fail())
		{
			cout << "Unrecognized number was entered..." << endl;
			cin.clear();
			cin.ignore(256, '\n');
		}
	} while (numPlayers < 3 || cin.fail());

	maxChips = numPlayers * 3;
}

void Game::endGame()
{
	winnerName = name[x];

	cout << "The winner of this game is: " << winnerName << endl;
}