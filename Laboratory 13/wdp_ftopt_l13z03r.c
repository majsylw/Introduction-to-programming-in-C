/*Wstep do programowania
Zaliczenie czastkowe 4
8.01.2018 grupa P00-53f
imie: Sylwia
nazwisko: Majchrowska
*/

/*Zadanie 3. (4pkt)
Napisz program wczytuj�cy z klawiatury n liczb calkowitych.
Program ma znalezc najwieksz� sposrod podanych liczb oraz wydrukowac na ekranie
informacje mowiaca o tym, ile razy najwieksza liczba wyst�pi�a w podanym ci�gu liczb.
*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // deklaracja zmiennych
    int *tab;
    int i, n;

    // podajemy iloma liczbami wypelnimy nasza tablice tab
    printf("Podaj N: ");
    scanf("%d", &n);

    // dynamicznie alkoujemy pamiec
    tab = malloc(n * sizeof(*tab));

    // wypelniamy tabele liczbami
    for (i = 0; i < n; i++) {
        printf("Liczba nr %d. = ", i);
        scanf("%d", &tab[i]);
    }

    // szukamy maksimum
    int maximum = tab[0];
    for(i = 0; i < n; ++i)
    {
        if(tab[i] > maximum){
            maximum = tab[i];
        }
    }

    // zliczamy ile razy maksimum wystepuje
    int licznik = 0;
    for (i = 0; i < n; i++) {
        if(tab[i] == maximum){
            ++licznik;
        }
    }

    // wyswietlenie wyniku
    printf("Najwieksza wprowadzona liczba jest %d i wystapila %d.", maximum, licznik);

    free(tab); // zwalniamy pamiec
    return 0;
}
