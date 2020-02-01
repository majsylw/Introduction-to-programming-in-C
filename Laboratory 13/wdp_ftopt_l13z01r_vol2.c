/*Wstep do programowania
Zaliczenie czastkowe 4
11.01.2018 grupa P00-53f
imie: Sylwia
nazwisko: Majchrowska
*/

/*Zadanie 1.(6pkt)
Napisz program, kt�ry poprosi u�ytkownika o podanie liczby przedmiot�w n, z kt�rych uzyska� ocen� ko�cow�.
Nast�pnie alokuje pami��, do kt�rej wczyta n liczb reprezentuj�cych oceny (mamy do dyspozycji: {2, 3, 3.5, 4, 4.5, 5, 5.5}),
po czym wyznaczy maksymaln� uzyskan� ocen�. W przypadku podania niepoprawnych danych program powinien ponowi� pro�b�
o podanie oceny. Dodatkowo wydrukuj na ekranie informacj� m�wi�c� o tym, ile razy maksymalna ocena wyst�pi�a
w podanym ci�gu liczb.*/

#include <stdio.h>
#include <stdlib.h>

main(){
    // deklaracja zmiennych
    int i, n;
    float *tab;

    // podajemy iloma liczbami wypelnimy nasza tablice tab
    printf("Podaj liczbe ocen n: ");
    scanf("%d", &n);

    // dynamicznie alkoujemy pamiec
    tab = malloc(n * sizeof(*tab));

    for(i = 0; i < n; ++i){
        printf("Podaj ocene: ");
        int odp;
        do{
            scanf("%f", &tab[i]); // wpisujemy ocene do tablicy
	    // sprawdzamy czy zmienne sa w odpowiednim zakresie
            if(tab[i] == 2 || tab[i] == 3 || tab[i] == 3.5 ||
               tab[i] == 4 || tab[i] == 4.5 || tab[i] == 5.5 || tab[i] == 5){
                odp = 0;
            } else {
                printf("Bledna ocena! Sprobuj raz jeszcze: ");
                odp = 1;
            }

        } while(odp); // wczytujemy ocene tak dlugo az odp == 0 czyli az zostanie wprowadzona jej poprawna wartosc
    }

    // szukamy maksimum
    float maximum = tab[0];
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
    printf("Najwieksza wprowadzona liczba jest %.1f i wystapila %d.", maximum, licznik);

    free(tab); // zwalniamy pamiec
    return 0;
}
