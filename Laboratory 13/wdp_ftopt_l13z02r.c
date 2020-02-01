/*Wstep do programowania
Zaliczenie czastkowe 4
8.01.2018 grupa P00-53f
imie: Sylwia
nazwisko: Majchrowska
*/

/*Zadanie 2. (6pkt)
Jednym z algorytmów sortowania jest Bogosort - algorytm oparty na metodzie prób i bledow.
Polega on na ciaglym losowym ustawianiu sortowanych elementow i sprawdzaniu czy po wymieszaniu
elementy sa posortowane. Operacje mieszania powtarzane sie az do posortowania elementów.
Aby posortowaæ talie kart tym algorytmem nalezy wyrzucic talie w powietrze, pozbierac z podlogi
i sprawdziæ czy karty ulozyly sie w oczekiwany porzadek. Czynnosc powtarzamy az do uzyskania
oczekiwanego efektu. Napisz program, który posortuje w ten sposob tablice skladajaca sie z 4 elementow.
Wyswietl poczatkowa i koncowa zawartosc tablicy. Dodatkowo podaj wykonana liczbe losowan.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 4

int main(){
    // deklaracja zmiennych
    time_t seedd;
    srand(time(&seedd)); // zapewniamy losowosc uruchomienia programu
    int a[N] = {3, 8, 2, 11};
    int i;

    // wyswietlamy tablice przed posortowaniem
    printf("Tablica przed posortowaniem: ");
    for(i=0; i<N; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");

    // Wlasciwy algorytm sortowania
    int posortowane = 1, iterator = 0;
    do{
        posortowane = 1; // zmienna mowiaca o tym czy tablica jest juz posortowana (1) czy nie (0)
        // sprawdzamy czy posortowane
        for(i = 0; i < N-1; ++i)
        {
            if(a[i] > a[i+1]){
                posortowane = 0; // elementy nie sa posortowane wiec zmieniamy wartosc zmiennej na 0
                break;
            }
        }

        if(!posortowane){ // jesli tablica nie jest posortowana losowo zamieniamy jej elementy
            int t; // zmienna pomocnicza przechowujaca wartosc elementu w tablicy do zamiany
            int r = 0;

            for(i=0; i < N; i++) // rozpoczynamy petle zamieniajaca miedzy soba wartosci zmiennych
            {
                t = a[i];
                r = rand() % N; // losujemy indeks tablicy z ktora zamienimy wartosc spod i-tego indeksu
                a[i] = a[r];
                a[r] = t;
            }
        }
        ++iterator; // zliczamy liczbe sortowan/losowan

    }while(!posortowane); // procedure powtarzamy tak dlugo az elementy w tablicy beda posortowane

    // Drukujemy na ekranie niezbedne komunikaty
    printf("\nTablica zostala posortowana w %d krokach.\n", iterator);
    printf("Tablica po posortowaniu: ");
    for(i=0; i<N; ++i){
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
