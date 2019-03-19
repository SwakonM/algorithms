
#include "pch.h"
#include <iostream>
using namespace std;
int GCD(int, int); //greatest common divisor 

int main()
{
	int a, b;
	cout << "Enter two numbers from which I have to find GCD: \n";
	cin >> a >> b;
	cin.ignore();

	cout << GCD(a, b);
	getchar();
	return 0;
}
int GCD(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
