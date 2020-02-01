/*Wstep do programowania
grupa P00-53f
15.01.2018 Kolokwium
imie:
nazwisko:
indeks:
*/

/*Zadanie 3 (10 pkt.)

Napisz program, ktory poprosi uzytkownika o podanie liczby naturalnej n.
Nastepnie alokuje pamiec dla tablicy zawierajacej n liczb calkowitych.
Stworz 2 wskazniki do obiektow tablicy znajdujacych sie na losowych pozycjach.
Upewnij sie, ze za kazdym uruchomieniem programu, jest mozliwe wylosowanie innych indeksow.
Sprawdz czy ustawione wskazniki pokazuja na ten sam obiekt i wyswietl stosowny komunikat.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));                                      // ustalenie ziarna generatora -> 1
    int *tab;                                               // deklaracja zmiennych -> 1
    int N;

    printf("Podaj liczbe elementow tablicy: ");             // komunikacja z uzytkownikiem -> 1
    scanf("%d", &N);

    tab = malloc(N * sizeof(*tab));                         // alokacja pamieci -> 1

    int *wsk1 = tab + rand()%N;                             // utworzenie wskaznikow i skorzystanie z funkcji rand() -> 3
    int *wsk2 = tab + rand()%N;
    //alternatywnie
    //int *wsk1 = &tab[rand()%N];
    //int *wsk2 = &tab[rand()%N];

    if(wsk1 == wsk2)                                        // porownanie wskaznikow i wydrukowanie komunikatow -> 2
        printf("Oba wskazniki pokazuja na ten sam obiekt.\n");
    else
        printf("Wskazniki pokazuja na rozne obiekty.\n");

    free(tab);                                              // zwolnienie pamieci -> 1
    return 0;
}

