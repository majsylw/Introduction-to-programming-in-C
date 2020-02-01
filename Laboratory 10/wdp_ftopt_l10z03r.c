/*Wstep do programowania
Zaliczenie czastkowe 2
20.11.2017 grupa P00-53a
imie:
nazwisko:
indeks:
*/

/*Zadanie 3 (4 pkt.)
Napisz program drukuj¹cy na ekranie liczby w postaci trojkata.
Wysokosc wczytujemy z klawiatury majac na wzgledzie ze ma byc ona wieksza od 0 i mniejsza od 5.

Uwaga 1. Postaraj sie aby program prosil uzytkownika o podanie wysokosci
i wypisywal na ekran liczby tak dlugo az uzytkownik nie zadecyduje ze konczy prace.
Uwaga 2. Niech wypisywane w wierszach liczby beda kolejnymi potegami liczby wpisanej w pierwszej kolumnie.
*/

#include <stdio.h>
#include <math.h>

main(){

    int odp = 0, i = 0, k = 0;
    int h = 0;

    while(!odp){
        printf("Podaj wysokosc: ");
        scanf("%d", &h);

        if(h <= 0 || h >= 5){
            printf("Podana wysokosc musi byc liczba wieksza od 0 i mniejsza od 5!\n");
            continue;
        }

        for(i = 1; i <= h; ++i){
            //printf("%d ", i);
            for(k = 0; k < i; ++k){
                //printf("%g ", pow(i, k + 1));
                printf("%g ", (float)i + k);
            }
            printf("\n");
        }

        printf("Czy chcesz zakonczyc? (podaj odpowiedz w postaci nie - 0 lub tak - 1)\n");
        scanf("%d", &odp);
    }

    printf("\nDziekuje za wspolna prace. Do widzenia.");

    return 0;
}
