/*Wstep do programowania
Zaliczenie czastkowe 2
04.12.2018 grupa P00-19h
imie:
nazwisko:
indeks:
*/

/*Zadanie 1 (9 pkt.)
Liczba pierwsza to taka liczba naturalna, ktora jest wieksza od 1
i dzieli sie tylko przez 1 i sama siebie, czyli posiada jedynie dwa dzielniki.
Napisz program, ktory sprawdzi czy podana przez uzytkownika liczba calkowita
jest liczba pierwsza. W obu przypadkach wypisz na ekran stosowny komunikat.
Pamietaj aby sprawdzic czy uzytkownik nie wprowadzil liczby ujemnej!

Przyklady wywolania:
1)
Podaj liczbe: -1
To nie jest liczba pierwsza!
2)
Podaj liczbe: 2
To jest liczba pierwsza!
*/

#include <stdio.h>
#include <math.h>

int main(){
    int i, liczba;

    printf("Podaj liczbe: "); // 1pkt
    scanf("%d", &liczba);

    if(liczba < 2){// 2pkt
        printf("To nie jest liczba pierwsza!\n");
    } else {
        for(i = 2; i <= (int)sqrt(liczba); ++i){ // 2pkt
            //printf("%d --> %d <---\n", liczba, i);
            if(liczba%i==0){ // 2pkt
                printf("To nie jest liczba pierwsza!\n");
                break;
            }

        }
        if( i > (int)sqrt(liczba)) // 2pkt
            printf("To jest liczba pierwsza!\n");
    }

    return 0;
}
