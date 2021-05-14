/*   SUMMARY   *
* Joshua Langer | IT-312 | April 17, 2021
* Left Center Right Dice Game
* Over the course of the project and the building block learnings assigned I was able to find a path to complete the project that had
* good program flow and utilized different systems we were able to learn in this course. The first version of this project I had started
* working leveraged a player class that would roll against the dice and then determine the value and input that into a switch statement.
* This led to some extensive run time errors and infinite loops, not allowing for players to monitor their game state and didn't run well
* any of the error checking I had implemented. Due to this I began a refactoring process and started to move code to new functions where 
* appropriate and remove code as a whole to create a better flow for the program. I completely rebuilt the Dice and Game classes from scratch
* with new functions and new variables to facilitate these changes. I also then took some advice I had received on a different program in 
* another course and leveraged arrays more heavily here to produce the desired results. By using these arrays I leveraged separate int value
* pointers to get the exact point in the array so players and their chip values don't get mixed up or lost somewhere. I also changed the game
* startup and put the player naming back into int main() so I could process data from this point and input it into their correct places.
* I leveraged for loops, if statements, switch cases and do while loops to control data flow and used these in tandem with a maxChips integer
* value to decide when there is only one player left with chips, by comparing the maxChips value with the value of the active player and the 
* chips in the center pile to determine if all chips are accounted for. If they are, the winner boolean flag is set to true and the game can 
* then end. I also needed to research how to capture any input and allow for players to keep playing, I found _getch() in the conio.h file and
* worked that into the rolling() function to give players time to look at what is happening in game.
*/

#include <iostream>
#include <ctime>
#include "Game.h"
#include "Dice.h"

using namespace std;

Game game;
Dice roll; //Provide reference for pointers

int main()
{
    srand((unsigned)time(nullptr)); // Used to spin up Random Number Generation based on the PCs current time at program startup.

    game.start_game();
    game.endGame();

    // Count the total number of players and assign them a name and array position
    for (int name_count = 1; name_count <= game.numPlayers; name_count++)
    {
        cout << "Player " << name_count << " please enter your first name:";
        cin >> game.name[game.x];
        roll.chips[roll.a] = 3;
        game.x++; // Increment the position in the name array.
        roll.a++; // Increment the position in the chips array.
    }
    // Keep the game looping as long as there is not a winner, reset array position
    do {
        game.x = 0;
        roll.a = 0;

        for (int name_count = 1; name_count <= game.numPlayers; name_count++)
        {
            roll.z = (game.numPlayers - 1); // z is for comparing the last position in the name array
            roll.c = game.x; // c is for comparing the position in the name array opposing z

            // Check win condition
            if (roll.chips[roll.a] + roll.center == game.maxChips)
            {
                game.winner = true;
                game.endGame(); // Declares the winner
                system("pause");
                cout << "Press any key to exit..." << endl;
                return 0;
            }
            else if (game.winner == false)
            {
                cout << endl << game.name[game.x] << " has " << roll.chips[roll.a] << " Chips." << endl;
                roll.run_game(); // Contains the statements to roll dice for the amount of chips each player has, to a maximum of 3.
                game.x++;
                roll.a++;
            }
        }
    } while (game.winner == false);
}


