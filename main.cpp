#include <iostream>
#include <sstream>

float kaszaidiza = 0;
char p1 = 'O';
char p2 = 'X';

char Canvas[3][3] = {{'+', '+', '+'},
                     {'+', '+', '+'},
                     {'+', '+', '+'}};

int input(int &X, int &Y)
{
    bool pass = false;
    std::cout << "Parasykite kur noretumetia dedi zenkla" << std::endl
              << "[X] \t[Y] " << std::endl;
    std::cin >> X >> Y;
    std::stringstream() >> X >> Y;

    if (X < 1 || X > 3 && Y < 1 || Y > 3)
    {
        pass = false;
    }
    else
    {
        pass = true;
    }
    return pass;
}

void draw(char Zenklas)
{
    int X, Y;

    std::cout << "Žaidžia " << Zenklas << std::endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << " " << Canvas[i][j];
        }
        std::cout << std::endl;
    }
    while (!input(X, Y));

    Canvas[X-1][Y-1] = Zenklas;
    if(kaszaidiza == 0){
        kaszaidiza = 1;
    }

    else{
        kaszaidiza = 0;
    }
}

float BigQ = false;

float klausimas()
{
    std::cout << "Pasiruosias žaisti?" << std::endl
              << "Y - Taip\t N - Ne" << std::endl;
    char a;
    std::cin >> a;
    std::cout << std::endl;

    if (a == 'N' || a == 'n')
    {
        std::cout << "Lauksiu sugystant" << std::endl;
        BigQ = true;
        return false;
    }

    if (a == 'Y' || a == 'y')
    {
        std::cout << "Tada pa gaminame" << std::endl;
        BigQ = false;
        return true;
    }

    else
    {
        std::cout << "Prasome pakartotinai ivesti atsakyma" << std::endl;
        return false;
    }
}

void play(int X, int Y)
{
}

int main()
{
    while (!klausimas()){
        if(BigQ == true){
            return 0;
        }
    }

    while (BigQ == false)
    {
        if (kaszaidiza)
        {
            draw(p1);
        }
        else
        {
            draw(p2);
        }
    }

    return 0;
}