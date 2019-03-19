
#include "pch.h"
#include <iostream>
#include <string>

void showStatus();
const int howMuch = 5;
int tab[howMuch];

using namespace std;

int main()
{
	for (int i = 0; i < howMuch; i++)
	{
		cout << "Give numerous " << i + 1 << ":  ";
		cin >> tab[i];
		cin.ignore();
	}
	showStatus();

	int x, i, j;

	for (j = howMuch - 2; j >= 0; j--)
	{
		x = tab[j];
		i = j + 1;
		while((i <howMuch) && (x > tab[i]))
		{
		tab[i - 1] = tab[i];
		i++;
		}
		tab[i - 1] = x;
	}
	
	showStatus();

	getchar();
	return 0;
	}
	void showStatus()
	{
		cout << "our table looks as follows: \n " << endl;
		for (int i = 0; i < howMuch; i++)
		{
			cout << i + 1 << ".= " << tab[i] << "\n";
		}
	}



