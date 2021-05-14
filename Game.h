#pragma once

#include <fstream>
#include <string>

using namespace std;

class Game {
private:
	ifstream inputFile;
	string line;

public:
	void start_game();
	void endGame();
	int numPlayers;
	int maxChips;
	int x; // Position in name array
	string name[100]; // Player array
	string winnerName;
	bool winner;
};