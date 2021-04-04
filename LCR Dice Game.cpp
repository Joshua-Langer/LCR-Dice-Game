// 
// TODO: Write out the summary of the project here and details about methodology.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include "Player.h"
#include "Game.h"

using namespace std;

int main()
{
    Game game;
    srand((unsigned)time(NULL)); // Used to spin up Random Number Generation based on the PCs current time at program startup.

    game.RunGame();
    

    return 0;
}


