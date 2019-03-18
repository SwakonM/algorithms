
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int howMuch = 3;
	int tab[howMuch], minx;
	for (int i = 0; i < howMuch; i++)
	{
		cout << "Give numerous " << i + 1 << ":  ";
		cin >> tab[i];
		cin.ignore();
		if (i == 0)
			minx = tab[i];
		else if (tab[i] < minx) //jesli chcemy sprawdzic maxa wystarczy zmienic na ">"
			minx = tab[i];
	}
	cout << "The minimum number is: " << minx;


	getchar();
	return 0;
}

