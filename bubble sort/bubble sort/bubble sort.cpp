
#include <iostream>
#include "pch.h"
#include <iostream>

using namespace std;
#include <string>
void showStatus();
const int howMuch = 5;
int tab[howMuch];



	int main()
	{

		//wczytywanie wartosci
		for (int i = 0; i < 5; i++)
		{
			cout << "Please: " << i + 1 << " number: " << endl;
			cin >> tab[i];
		}

		//wypisywanie stanu
		showStatus();

		int temp;
		// sortowanie babelkowe - wypycha jednego babelka i porownuje od najwiekszej do najmniejszej
		for (int i = 0; i < howMuch; i++)
		{
			for (int j = 0; j < howMuch - 1; j++)
			{
				if (tab[j] > tab[j + 1])
				{
					temp = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = temp;
				}
			}
		}
		//wypisywanie stanu po sortowaniu
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



