/*Wstep do programowania
Zaliczenie czastkowe 4
8.01.2018 grupa P00-53f
imie: Sylwia
nazwisko: Majchrowska
*/

/*Zadanie 1.(5pkt)
Napisz program, który poprosi u¿ytkownika o podanie liczby przedmiotów N,
z których uzyskal ocene koncowa. Nastepnie alokuje pamiec, do której wczyta N liczb reprezentujacych oceny,
po czym obliczy srednia z tych ocen, ktore sa pozytywne, tj. wieksze od dwoch.
W przypadku podania niepoprawnych danych program powinien ponowic prosbe o podanie oceny.*/

#include <stdio.h>
#include <stdlib.h>

main(){
    // deklaracja zmiennych
    int i, N;
    float *tab;

    // podajemy iloma liczbami wypelnimy nasza tablice tab
    printf("Podaj N: ");
    scanf("%d", &N);

    // dynamicznie alkoujemy pamiec
    tab = malloc(N * sizeof(*tab));

    float suma = 0;
    int licznik = 0;
    for(i = 0; i < N; ++i){
        printf("Podaj ocene: ");
        int odp;
        do{
            scanf("%f", &tab[i]);
	    // sprawdzamy czy zmienne sa w odpowiednim zakresie
            if(tab[i] == 2 || tab[i] == 3 || tab[i] == 3.5 ||
               tab[i] == 4 || tab[i] == 4.5 || tab[i] == 5.5 || tab[i] == 5){
                odp = 0;
            } else {
                printf("Bledna ocena! Sprobuj raz jeszcze: ");
                odp = 1;
            }

        } while(odp); // wczytujemy ocene tak dlugo az odp == 0 czyli az zostanie wprowadzona jej poprawna wartosc
        if(tab[i] > 2){
            suma += tab[i]; // sumujemy oceny wieksze od 2
            ++licznik; // liczymy ile jest ocen wiekszych od 2
        }
    }

    // wyznaczamy wartosc sredniej
    float srednia = 0;
    if(licznik != 0){
        srednia = suma/licznik;
    }

    // Drukujemy wyniki na ekran
    printf("Srednia z podanych pozytywnych ocen wynosi %.2f.", srednia);
    free(tab); // zwalniamy pamiec
    return 0;
}
