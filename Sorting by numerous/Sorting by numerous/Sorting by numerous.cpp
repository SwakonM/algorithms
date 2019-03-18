
#include <iostream>
#include "pch.h"
#include <iostream>


#include <string>
void showStatus();
const int howMuch = 3;
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
	//wypisywanie stanu
	showStatus();

	int k ,temp;
	
	for (int i = 0; i < howMuch - 1; i++)
	{
		k = i;
		for (int j = i+1; j < howMuch; j++)
		
			if (tab[j] < tab[k])
				k = j;
			temp = tab[i];
			tab[i] = tab[k];
			tab[k] = temp;
		
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



