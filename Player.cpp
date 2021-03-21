#include "stdafx.h"
#include "Player.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

// Get the players name from console input.
void Player::getName()
{
	cin >> playerName;
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