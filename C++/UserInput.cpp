#include <iostream>
#include "UserInput.h"

void UserInput::setPlayerChar(int index, char charInput)
{
    playerChar[index] = charInput;
}

char UserInput::getPlayerChar(int index)
{

    return playerChar[index];
}

void getCharForUeser()
{
    UserInput UserInput;

    char InputChar;
    int PlayerNumber;

    PlayerNumber = 0;
    std::cout << "Enter Player's " << PlayerNumber + 1 << " character" << std::endl
              << ": ";
    std::cin >> InputChar;
    UserInput.setPlayerChar(PlayerNumber, InputChar);

    PlayerNumber = 1;
    std::cout << "Enter Player's " << PlayerNumber + 1 << " character" << std::endl
              << ": ";
    std::cin >> InputChar;
    UserInput.setPlayerChar(PlayerNumber, InputChar);
}

