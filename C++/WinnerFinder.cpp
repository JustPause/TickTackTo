#include <iostream>
#include "WinnerFinder.h"
#include "Drow.h"
#include "UserInput.h"

bool Tie();
bool Horizontal();
bool Vertical();

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
        return Tie();
    }

    else if (Horizontal())
    {
        ShowCanvas();
        std::cout << "The game has finish, and winner is Player " << std::endl;
        return Horizontal();
    }

    else if (Vertical())
    {
        ShowCanvas();
        std::cout << "The game has finish, and winner is Player " << std::endl;
        return Vertical();
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

bool Horizontal()
{
    int y = 0;
    for (int i = 0; i < CanvasX; i++)
    {
        if ((Canvas[i][y] == Canvas[i][y + 1] && Canvas[i][y + 1] == Canvas[i][y + 2]) && Canvas[i][y + 1] != '+')
        {
            return true;
        }
    }
    return false;
}

bool Vertical()
{
    int x = 0;
    for (int i = 0; i < CanvasX; i++)
    {
        if ((Canvas[x][i] == Canvas[x + 1][i] && Canvas[x + 1][i] == Canvas[x + 2][i]) && Canvas[x + 1][i] != '+')
        {
            return true;
        }
    }
    return false;
}

bool Diagonal()
{
    if (Canvas[0][0] == Canvas[1][1] && Canvas[1][1] == Canvas[2][2] && Canvas[2][0] == Canvas[1][1] && Canvas[1][1] == Canvas[0][2])
    {
        return true;
    }
    return false;
}