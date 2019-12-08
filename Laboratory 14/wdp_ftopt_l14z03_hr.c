/*Wstep do programowania
grupa P00-19h
21.01.2019 Kolokwium
imie:
nazwisko:
indeks:
*/

/*Zadanie 3 (10 pkt.)
Napisz program, który poprosi użytkownika o podanie liczby naturalnej n i akoluje dynamicznie tablicę o takim rozmiarze.
Nastepnie do tej tablicy zapisuje kolejne wyrazy ciagu Fibonacciego i wypisuje je na ekran.
Ciąg Fibonacciego ma dwa pierwsze wyrazy równe 0 i 1. Każdy nastepny to suma dwóch poprzednich.
Następnie program mnoży każdy element tablicy przez losową liczbę całkowitą z przedzialu do -2 do 2
i wypisuje wynik na ekran.

Nie zapomnij o zwolnieniu pamieci!
*/

/* /10 pkt.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	srand(time(NULL));
	int *tab, n, elem1, elem2, temp, i;

	printf("Ile wyrazow ciagu obliczyc?: ");
	scanf("%d", &n);
	tab = malloc(n * sizeof(*tab));		// dynamiczna deklaracja tablicy -> 1

	// obliczenie wyrazow ciagu i wpisanie ihc do tablicy -> 2
	tab[0]=0;
	tab[1]=1;
	for(i = 2; i < n; ++i){
		tab[i] = tab[i-1] + tab[i-2];
	}
	for(i = 0; i < n; ++i){	//	wypisanie tablicy -> 2
		printf("%9d\t%9d\n", i, tab[i]);
	}
	printf("\n");

	//	generacja liczb -> 2
	for(i = 0; i < n; ++i){
		tab[i] *= rand()%5-2;
	}
	for(i = 0; i < n; ++i){	//	wypisanie tablicy -> 2
		printf("%9d\t%9d\n", i, tab[i]);
	}
	printf("\n");

	free(tab);		// zwolnienie pamieci -> 1
	return 0;
}

