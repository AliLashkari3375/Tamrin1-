// converttime1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//ALi lashkari
#include <iostream>
using namespace std;
void Converttime(int a);

int main()
{
    int a;
    cout << "Enter your seconds: ";
    cin >> a;
    Converttime(a);
    return 0;
}

void Converttime(int a)
{
    int day = a / (24 * 3600);

    a = a % (24 * 3600);
    int hour = a / 3600;

    a %= 3600;
    int minutes = a / 60;

    a %= 60;
    int seconds = a;

    cout << "you have " << day << " " << "days " << hour << " " << "hours " << minutes << " " << "minutes " << seconds << " " << "seconds!!! " << endl;
}//ALi lashkari