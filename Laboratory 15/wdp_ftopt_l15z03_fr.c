/*Wstep do programowania
grupa P00-53f
22.01.2018 Kolokwium
imie:
nazwisko:
indeks:
*/

/*
Zadanie 3 (10 pkt.)

Napisz program, ktory pobiera od uzytkownika liczbe calkowita n,
alokuje pamiec (dynamiczna tablica dla n elementow) i wypelnia ja
losowymi liczbami calkowitymi z przedzialu od 1 do 20.
Nastepnie program wyswietla zawartosc tablicy na ekranie i zwalnia pamiec do niej przypisana.

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int *tab;
  int i,n;
  time_t t;

  printf("Podaj rozmiar tablicy \n");
  scanf("%d",&n);

  tab = malloc(n*sizeof(int));

  srand(time(&t));

  for(i=0; i<n; i++)
    *(tab+i) = rand()%20+1;

  printf("\nZawartosc tablicy: \n");
  for(i=0; i<n; i++ )
    printf("%d \n",*(tab+i));

  printf("\n");

  free(tab);

}

/*
Punktacja:

1. Alokacja tablicy: 5pkt.
2. Wczytanie do tablicy ciagu liczb losowych: 3pkt.
3. Wypisanie elementow tablicy na ekranie: 1pkt.
4. Zwolnienie pamieci: 1pkt.

*/



