/*Wstep do programowania
Zaliczenie czastkowe 2
20.11.2017 grupa P00-53f
imie:
nazwisko:
indeks:
*/

/*Zadanie 2 (6 pkt.)
Napisz program, ktory poprosi uzytkownika o podanie imion i nazwisk,
nastepnie wyswietli na ekranie napis zawieraj¹cy stosowne inicjaly.

Uwaga 1. Postaraj sie zwrocic inicialy w postaci duzych liter.
Uwaga 2. W przypadku posiadania kilku imion/nazwisk, np. Jan Maciej Karol Wscieklicy, wypisz ich liczbe.
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    int i, l_im = 0, l_nazw = 0;
    char imie[100], nazwisko[100];

    printf("Podaj imie: ");
    gets(imie);

    printf("Podaj nazwisko: ");
    gets(nazwisko);

    if(strlen(imie) != 0){
        l_im = 1;
    }

    if(strlen(imie) != 0){
        l_nazw = 1;
    }

    for(i = 0; i < strlen(imie); ++i){
        if(isblank(imie[i])){
            l_im += 1;
        }
    }
    for(i = 0; i < strlen(nazwisko); ++i){
        if(isblank(nazwisko[i])){
            l_nazw += 1;
        }
    }

    printf("Nazywasz sie: ");
    puts(strcat(strcat(imie," "), nazwisko));

    printf("Twoje inicjaly to: %c. %c.", toupper(imie[0]), toupper(nazwisko[0]));
    printf("\nLiczba posiadanych imion: %d", l_im);
    printf("\nLiczba posiadanych nazwisk: %d", l_nazw);

    return 0;
}
