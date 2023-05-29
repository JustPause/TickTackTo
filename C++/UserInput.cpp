#include <iostream>
#include "connection.h"

void getCharForUeser()
{
    int PlayerNumber = 0;
    std::cout << "Enter Player's " << PlayerNumber + 1 << " character" << std::endl<<": ";
    std::cin >> playerChar[PlayerNumber];

    PlayerNumber = 1;
    std::cout << "Enter Player's " << PlayerNumber + 1 << " character" << std::endl<<": ";
    std::cin >> playerChar[PlayerNumber];
}

