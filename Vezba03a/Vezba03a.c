// Vezba03a.c : This file contains the 'main' function. Program execution begins and ends there.
// Sortiranje nizova - Selection sort

#include <stdio.h>

int main()
{
	int niz[10] = { 5, 2, 7, 3, 9, 1, 8, 4, 6, 0 };
	int n = 10;
	int i, j, temp;
	for (i = 0; i < n - 1; i++)//do pretposlednjeg
	{
		for (j = i + 1; j < n; j++)//od sledeceg do poslednjeg
		{
			if (niz[i] > niz[j])//ako je levi veci od desnog
			{//zameni ih
				temp = niz[i];
				niz[i] = niz[j];
				niz[j] = temp;
			}
		}
	}
	// prikaz niza	
	for (i = 0; i < n; i++)
		printf("%d ", niz[i]);
}