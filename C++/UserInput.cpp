#include <iostream>
#include "UserInput.h"
#include "Drow.h"
#include "WinnerFinder.h"

// Global / Public
char playerChar[2];
int UserInputX, UserInputY;

void getCharForUeser()
{
    int PlayerNumber;

    PlayerNumber = 0;
    std::cout << "Enter Player's " << PlayerNumber + 1 << " character" << std::endl
              << ": ";
    std::cin >> playerChar[0];

    PlayerNumber = 1;
    std::cout << "Enter Player's " << PlayerNumber + 1 << " character" << std::endl
              << ": ";
    std::cin >> playerChar[1];
}

void getXYPosition(int index)
{

    do
    {
        std::cout << "Input X posion" << std::endl
                  << ": ";
        std::cin >> UserInputX;

    } while (!(UserInputX >= 0) || !(UserInputX <= CanvasX));
    UserInputX = UserInputX - 1;

    do
    {
        std::cout << "Input Y posion" << std::endl
                  << ": ";
        std::cin >> UserInputY;
    } while (!(UserInputY >= 0) || !(UserInputY <= CanvasY));
    UserInputY = UserInputY - 1;
}