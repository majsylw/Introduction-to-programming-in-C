/*Wstep do programowania
Zaliczenie czastkowe 4
11.01.2018 grupa P00-53f
imie: Sylwia
nazwisko: Majchrowska
*/

/*Zadanie 3.(5pkt)
Napisz program, kt�ry wczytuje wpisany przez u�ytkownika napis, a nast�pnie sprawdza, z dok�adno�ci� co do spacji,
czy jest on palindromem (zdanie czytane wprost i wspak jest w ten sam spos�b, np. kajak). Pami�taj o ignorowaniu bia�ych znak�w,
na przyk�ad s�owo abb b ba w tym rozumieniu tak�e b�dzie palindromem.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100

main(){
    // deklaracja zmiennych
    int i, j;
    char napis[N];

    // zczytujemy napis
    printf("Zapisz zdanie do sprawdzenia: ");
    gets(napis);

    // i - pokazuje na kolejne litery wyrazu pocz�wszy od pocz�tku, j - zaczyna od ko�ca
    for(i = 0, j = strlen(napis) - 1; i < j; ++i, --j){
        while (napis[i] == ' ')
            ++i;
        while (napis[j] == ' ')
            --j;
        if (napis[i] != napis[j])
            break;
    }

    // wypisujemy odpowiedni komunikat
    if (i < j)
        printf("Podany wyraz nie jest palindromem. \n");
    else
        printf("Podany wyraz jest palindromem. \n");

    return 0;
}
