#include <iostream>
#include <sstream>
#include <stdlib.h>

float kaszaidiza = 0;
char p1 = 'O';
char p2 = 'X';

float BigQ = false;

char Canvas[3][3] = {{'+', '+', '+'},
                     {'+', '+', '+'},
                     {'+', '+', '+'}};

int ChackForWiner(char A, char B, char C)
{
    if (A == B == C)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void patikrinimas(char Z)
{
    char winner = ' ';
    for (int i = 1; i < 3; i++)
    {
        if ((Canvas[1][i], Canvas[2][i], Canvas[3][i]) == true)
        {
            std::cout << "Done. " << Z << " Has won";
            winner = Z;
            BigQ = true;
        }
        if (Canvas[1][i] == Canvas[2][i] == Canvas[3][i] == Z)
        {
            std::cout << "Done. " << Z << " Has won";
            winner = Z;
            BigQ = true;
        }
        if (Canvas[1][1] == Canvas[2][2] == Canvas[3][3] == Z)
        {
            std::cout << "Done. " << Z << " Has won";
            winner = Z;
            BigQ = true;
        }
        if (Canvas[3][1] == Canvas[2][2] == Canvas[1][3] == Z)
        {
            std::cout << "Done. " << Z << " Has won";
            winner = Z;
            BigQ = true;
        }
    }
}

int input(int &X, int &Y)
{
    bool pass = false;
    X = char(X);
    Y = char(Y);

    std::string A = "Parasykite kur noretumetia dedi zenkla\n [X] \t[Y] ";
    std::string Z;

    X = int(X);
    Y = int(Y);

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

    while (!input(X, Y))
        ;

    Canvas[X - 1][Y - 1] = Zenklas;
    if (kaszaidiza == 0)
    {
        kaszaidiza = 1;
    }

    else
    {
        kaszaidiza = 0;
    }
}

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

int main()
{
    while (!klausimas())
    {
        if (BigQ == true)
        {
            return 0;
        }
    }
    // a comnet
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
        patikrinimas(kaszaidiza);
    }

    return 0;
}