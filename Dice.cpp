// Dice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari
#include <iostream>
#include<random>
using namespace std;

int main()
{
    int a, r;
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        r = rand() % 6 + 1;
        cout << r << endl;
        if (r == 6)
        {
            for (int i = 0; i < 2; i++)
            {
                cout << "**Award**" << "\t";
                r = rand() % 6 + 1;
                cout << r << endl;
            }
        }
    }
    return 0;
}//Ali lashkari