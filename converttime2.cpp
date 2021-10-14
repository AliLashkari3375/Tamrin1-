// converttime2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari

#include <iostream>
using namespace std;
void Convertday(int a, int b, int c, int f);

int main()
{
    int a, b, c, f;
    cout << "Enter your days: ";
    cin >> a;
    cout << "Enter your hours: ";
    cin >> b;
    cout << "Enter your minutes: ";
    cin >> c;
    cout << "Enter your seconds: ";
    cin >> f;
    cout << "your time: " << a << " day" << ":" << b << " hours" << ":" << c << " minutes" << ":" << f << " seconds" << endl;
    Convertday(a, b, c, f);
}

void Convertday(int a, int b, int c, int f)
{
    int hours = a * 24;
    int minutes = hours * 60;
    int seconds = minutes * 60;
    int minutes2 = b * 60;
    int seconds2 = minutes2 * 60;
    int seconds3 = c * 60;
    int all = seconds + seconds2 + seconds3 + f;
    cout << "And when you converted you have " << all << " seconds!!!" << endl;
}//Ali lashkari