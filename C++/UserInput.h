#pragma once

class UserInput
{
private:
    char playerChar[2];
public:
    void setPlayerChar(int, char);
    char getPlayerChar(int);
};

void getCharForUeser();