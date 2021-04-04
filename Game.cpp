#include "Game.h"

void Game::WelcomePlayers()
{
	cout << "Welcome to Left Center Right" << endl;

    cout << "How many players are playing? (You must have at least 3 players to play): \n";
    cin >> numberOfPlayers;

    if (numberOfPlayers <= 2)
    {
        cout << "More players are required.\n";
        WelcomePlayers();
    }

    static Player* players = new Player[numberOfPlayers];

    for (int i = 0; i < numberOfPlayers; i++) // Loop through the player Count to get the names of each player playing the game.
    {
        cout << "Please enter your name: " << endl;

        players[i].getName();
        players[i].playerChips = 3; // Each player starts with 3 chips.

        cout << players[i].playerName << " has " << players[i].playerChips << " chips\n";
    }

    Player::gameRules(); // Call the gameRules() method, which prints the Game Rules to the console.

}

void Game::RunGame()
{
    WelcomePlayers();

    // Infinite loop currently, will need to setup logic to determine only one player has chips left.
    while (true)
    {
        m_player.getChips();
    }
}