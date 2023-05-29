#include <iostream>
#include "Drow.h"
#include "UserInput.h"

int const CanvasX = 3;
int const CanvasY = 3;

char Canvas[CanvasX][CanvasY];

void ShowCanvas()
{
    for (int i = 0; i < CanvasX; i++)
    {
        for (int j = 0; j < CanvasY; j++)
        {
            std::cout << " " << Canvas[i][j];
        }
        std::cout << std::endl;
    }
}

void InitCanvas()
{
    for (int i = 0; i < CanvasX; i++)
    {
        for (int j = 0; j < CanvasY; j++)
        {
            Canvas[i][j] = '+';
        }
    }
}

int NowPlaying(int index)
{
    UserInput UserInput;
    std::cout << "Now playing player: " << index << " with char: " << UserInput.getPlayerChar(index) << std::endl;

    if (index == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}