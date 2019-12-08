/*Wstep do programowania
Zaliczenie czastkowe 3
07.01.2019 grupa P00-19h
imie:
nazwisko:
indeks:
*/

/*Zadanie 1 (10 pkt.)
Napisz program, w ktorym zadeklarujesz dwie 7-elementowe tablice:
a) jedna w sposob statyczny,
b) druga - dynamiczny.
Obie tablice wypelnij calkowitymi liczbami losowymi z zakresu od -5 do 5.
Wyswietl na ekranie zawartosci obu tablic.
Dodatkowo wydrukuj adresy pierwszych elementow obu tablic
oraz podaj odleglosc miedzy nimi.

Przyklady wywolania
-------------------------------------------------------------------------
Zawartosc pierwszej tablicy (zaalokowanej dynamicznie):
-3 5 -3 -4 5 5 2
Zawartosc drugiej tablicy (zaalokowanej statycznie):
3 -2 -1 -2 3 -5 -2

Adres pierwszego obiektu tablicy dynamicznej wynosi 10956704.
Adres pierwszego obiektu tablicy statycznej wynosi 6356716.
Odleglosc miedzy tabliczami w bajtach wynosi 1149997.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7

int main(){
    srand(time(NULL));
    int *tab1;                                         // dynamiczna deklaracja tablicy -> 1
    tab1 = malloc(N * sizeof(*tab1));
    int tab2[N];                                       // statyczna deklaracja tablicy -> 1

    int i;
    for(i = 0; i < N; ++i){                            // wypelnienie tablic liczbami losowymi z odpowiedniego zakresu -> 2
        tab1[i] = rand()%11 - 5;
        tab2[i] = rand()%11 - 5;
    }

    printf("%9s\t%9s\t%9s\n", "Pozycja", "Tablica1", "Tablica2"); // wyswietlenie zawartosci tablic -> 2
    for(i = 0; i < N; ++i){
        printf("%9d\t%9d\t%9d\n", i, tab1[i], tab2[i]);
    }

    printf("Adres pierwszego obiektu tablicy dynamicznej wynosi %d.\n", tab1); // wyswietlenie adresu pierwszej tablicy -> 1
    printf("Adres pierwszego obiektu tablicy statycznej wynosi %d.\n", tab2); // wyswietlenie adresu drugiej tablicy -> 1

    printf("Odleglosc miedzy tablicamy w bajtach to %i.", abs(tab1 - tab2));   // wyswietlenie odleglosci miedzy tablicami -> 1

    free(tab1);                                              // zwolnienie pamieci -> 1
    return 0;
}

