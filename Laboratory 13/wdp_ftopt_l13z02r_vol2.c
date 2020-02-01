/*Wstep do programowania
Zaliczenie czastkowe 4
11.01.2018 grupa P00-53f
imie: Sylwia
nazwisko: Majchrowska
*/

/*Zadanie 3.(5pkt)
Napisz program, który wczytuje wpisany przez u¿ytkownika napis, a nastêpnie sprawdza, z dok³adnoœci¹ co do spacji,
czy jest on palindromem (zdanie czytane wprost i wspak jest w ten sam sposób, np. kajak). Pamiêtaj o ignorowaniu bia³ych znaków,
na przyk³ad s³owo abb b ba w tym rozumieniu tak¿e bêdzie palindromem.*/

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

    // i - pokazuje na kolejne litery wyrazu pocz¹wszy od pocz¹tku, j - zaczyna od koñca
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
