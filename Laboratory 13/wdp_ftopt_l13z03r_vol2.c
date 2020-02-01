/*Wstep do programowania
Zaliczenie czastkowe 4
11.01.2018 grupa P00-53f
imie: Sylwia
nazwisko: Majchrowska
*/

/*Zadanie 3.(5pkt)
Napisz program wczytuj¹cy z klawiatury n liczb ca³kowitych (dynamicznie zaalokuj pamiêæ na tablice tego rozmiaru).
Nastêpnie wprowadŸ do tablicy liczby losowe z zakresu od -7 do 10 i wyznacz ich medianê, któr¹ wypiszesz na ekranie.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
    srand(time(NULL)); // zapewniamy inne wyniki co uruchomienie programu
    // deklaracja zmiennych
    int i, j, t, n;
    int *tab;

    // podajemy iloma liczbami wypelnimy nasza tablice tab
    printf("Podaj liczbe ocen n: ");
    scanf("%d", &n);

    // dynamicznie alkoujemy pamiec
    tab = malloc(n * sizeof(*tab));

    // wypelniamy tablice liczbami losowymi w zakresie -7 do 10
    for(i=0; i<n; ++i){
        tab[i] = rand()%18 - 7;// bo mamy 18 cyfr i przedzial zaczyna sie od -7
    }

    // sortujemy zeby moc wyznaczyc mediane
    for(i=0; i<n-1; ++i){
        for(j=0; j<n-i-1; ++j){
            if(tab[j] > tab[j+1]){
                t = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = t;
            }
        }
    }

    // szukamy mediany
    float mediana = 0;
    if(n%2 == 0){// mamy parzysta liczbe danych w tabeli
        mediana = (tab[n/2] + tab[n/2 - 1])/2.0; // srednia z 2 srodkowych elementow
        //printf("%d -> %d\n", tab[n/2], tab[n/2 - 1]);
    } else { // mamy nieparzysta liczbe danych
        mediana = tab[(int)floor(n/2.0)]; // srodkowy element -> wystarczyloby: mediana = tab[n/2];
    }
    // drukuje tak dla siebie wylosowane liczby
    for(i=0; i<n; ++i){
        printf("%d ", tab[i]);
    }

    // wyswietlenie wyniku
    printf("\nMediana dla tego zestawu liczb wynosi %.1f.", mediana);

    free(tab); // zwalniamy pamiec
    return 0;
}
