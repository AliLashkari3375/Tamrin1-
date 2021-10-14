// fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari

#include <iostream>
using namespace std;

int fib(int a)
{
    if (a <= 1)
        return a;
    return fib(a - 1) + fib(a - 2);
}

int main()
{
    int a;
    cout << "enter your num: ";
    cin >> a;
    cout << fib(a);
}//Ali lashkari