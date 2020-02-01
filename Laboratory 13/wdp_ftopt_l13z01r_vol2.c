/*Wstep do programowania
Zaliczenie czastkowe 4
11.01.2018 grupa P00-53f
imie: Sylwia
nazwisko: Majchrowska
*/

/*Zadanie 1.(6pkt)
Napisz program, który poprosi u¿ytkownika o podanie liczby przedmiotów n, z których uzyska³ ocenê koñcow¹.
Nastêpnie alokuje pamiêæ, do której wczyta n liczb reprezentuj¹cych oceny (mamy do dyspozycji: {2, 3, 3.5, 4, 4.5, 5, 5.5}),
po czym wyznaczy maksymaln¹ uzyskan¹ ocenê. W przypadku podania niepoprawnych danych program powinien ponowiæ proœbê
o podanie oceny. Dodatkowo wydrukuj na ekranie informacjê mówi¹c¹ o tym, ile razy maksymalna ocena wyst¹pi³a
w podanym ci¹gu liczb.*/

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
