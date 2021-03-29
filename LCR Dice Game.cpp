// 
// TODO: Write out the summary of the project here and details about methodology.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "Player.h"

using namespace std;

int setPlayers()
{
    int numOfPlayers = 0;
    cout << "How many players are playing? (You must have at least 3 players to play): \n";
    cin >> numOfPlayers;

    if (numOfPlayers <= 2)
    {
        cout << "More players are required.\n";
        setPlayers();
    }

    return numOfPlayers;
}

int main()
{
    int currPlayerID = 0;
    srand((unsigned)time(NULL)); // Used to spin up Random Number Generation based on the PCs current time at program startup.

    const int numPlayers = setPlayers();  // When the game is running the amount of players can't be changed until the next games run by using const(constant).
    static Player* players = new Player[numPlayers];

    for (int i = 0; i < numPlayers; i++) // Loop through the player Count to get the names of each player playing the game.
    {
        cout << "Please enter your name: " << endl;

        players[i].getName();
        players[i].playerChips = 3; // Each player starts with 3 chips.

        cout << players[i].playerName << " has " << players[i].playerChips << " chips\n";
    }

    Player::gameRules(); // Call the gameRules() method, which prints the Game Rules to the console.
    

    return 0;
}


