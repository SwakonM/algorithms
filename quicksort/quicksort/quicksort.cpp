#include <iostream>
#include "pch.h"
#include <iostream>



using namespace std;

void showStatus();
void Sort(int, int);
const int howMuch = 5;
int tab[howMuch] =  {5 ,25,30,40,3 };


int main()
{
	showStatus();
	Sort(0, howMuch - 1);

	showStatus();

	getchar();
	return 0;
}
void Sort (int left , int right)
{
	int i, j, t, piwot;
	i = (left + right) / 2;
	piwot = tab[i];
	tab[i] = tab[right];

	for(j = i = left; i <right;i++)
		if (tab[i] < piwot)
		{
			t = tab[i];
			tab[i] = tab[j];
			tab[j] = t;
			j++;
		}
	tab[right] = tab[j];
	tab[j] = piwot;

	if (left < i - 1)
		Sort(left, j - 1);
	if (j + 1 < right)
		Sort(j + 1, right);
		
}


void showStatus()
{
	cout << "our table looks as follows: \n " << endl;
	for (int i = 0; i < howMuch; i++)
	{
		cout << i + 1 << ".= " << tab[i] << "\n";
	}
}
