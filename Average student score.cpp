// Average student score.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int mn, mx, sum,i, b;
    float average;
    const int Numb = 20;
    float a[Numb];
    cout << "Enter the number of students:";
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cout << "\nEnter score: ";
        cin >> a[i];
    }

    mn = a[0];
    mx = a[0];
    for (int i = 1; i < b; i++)
    {
        if (mn > a[i])
        {
            mn = a[i];
        }
        else if (mx < a[i])
        {
            mx = a[i];
        }
    }
    sum = 0;
    for (i = 0; i < b; i++)
    {
        sum += a[i];
    }
    average = (float)sum / b;
    cout << "Average = " << average << endl;
    cout << "Maximum score is: " << mx << endl;
    cout << "Minimum score is: " << mn << endl;

    return 0;

}//Ali lashkari
