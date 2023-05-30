#include <iostream>
#include "WinnerFinder.h"
#include "Drow.h"
#include "UserInput.h"

bool Tie();

bool CheckIfTheSpaceIsUsed()
{
    if (Canvas[UserInputX][UserInputY] == '+')
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool CheckIfWeHaveAWinner()
{
    if (Tie())
    {
        ShowCanvas();
        std::cout << "The game has finish, and it's a tie" << std::endl;
        return Tie;
    }
    return false;
}

bool Tie()
{
    int tie = 0;
    for (int i = 0; i < CanvasX; i++)
    {
        for (int j = 0; j < CanvasY; j++)
        {
            if (Canvas[i][j] == '+')
            {
                tie++;
            }
        }
    }
    if (tie == 0)
    {
        return true;
        // Stop The game
    }
    return false;
}
