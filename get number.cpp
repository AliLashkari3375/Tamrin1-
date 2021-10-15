// get number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ali lashkari

#include <iostream>

using namespace std;
int main()
{
	float a;
	int sum = 0;
	cout << "For Exit the app press:= 0.0  " << endl;
	for (; ;)
	{
		cout << "\nEnter number: ";
		cin >> a;
		sum += a;
		if (a==0.0)
		{
			cout << sum;
			break;
		}
		
	}
	
}//Ali lashkari