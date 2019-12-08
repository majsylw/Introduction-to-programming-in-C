/*Wstep do programowania
Zaliczenie czastkowe 3
07.01.2019 grupa P00-19h
imie:
nazwisko:
indeks:
*/

/*Zadanie 2 (8 pkt.)
Napisz program, ktory bedzie prosil uzytkownika o podanie 5 liczb rzeczywistych,
ktorych podwojone wartosci wczyta do uprzednio zadeklarowanej tablicy. Nastepnie wyswietl
wszystkie elementy znajdujace sie w tablicy. Dodatkowo oblicz sume wszystkich elementow w tablicy
oraz wyswietl jej wartosc.
----------------------------------------------------------------------------------------------------
Przyklady wywolania
----------------------------------------------------------------------------------------------------
Podaj 0. liczbe: 6
Podaj 1. liczbe: 11
Podaj 2. liczbe: -9
Podaj 3. liczbe: 1
Podaj 4. liczbe: 8

Liczby w tablicy to: 12.0 22.0 -18.0 2.0 16.0
Ich suma wynosi 34.
*/

#include <stdio.h>
#include <math.h>

#define N 5

main(){
    int i;
    float x, tab[N]; // 1pkt

    for(i=0; i<N; i++){ //2pkt
        printf("Podaj %d. liczba: ", i);
        scanf("%f", &x);
        tab[i] = 2*x; //0.5pkt
    }

    printf("Liczby w tablicy to: "); //2pkt
    for(i=0; i<N; i++){

        printf("%.1f ", tab[i]);
    }

    float suma = 0; // 0.5pkt
    for(i=0; i<N; i++){//2pkt
        suma += tab[i];
    }
    printf("\nIch suma wynosi %.1f.", suma);
    return 0;
}


