/*Wstep do programowania
grupa P00-19h
21.01.2019 Kolokwium
imie:
nazwisko:
indeks:
*/

/* Zadanie 1 (15 pkt)

Aby zrelaksować się w trakcie kolokwium postanawiasz
napisać grę "papier, kamień, nożyce" i zagrać z komputerem.
Reguły gry:
- papier wygrywa z kamieniem, kamień wygrywa z nożycami
  a nożyce wygrywają z papierem,
- papier z papierem, kamień z kamieniem i nożyce z nożycami remisują.

Punktacja:
- deklaracja zmiennych odpowiednich typów (1 pkt),
- komunikacja z użytkownikem i pobranie wartości zmiennych (4 pkt.),
- sprawdzenie, czy użytkownik podał poprawną wartość (1 pkt),
- wylosowanie wyboru komputera i przypisanie go do zmiennej (2 pkt.),
- porównanie wyboru komputera z wyborem użytkownika i ustalenie
  zwycięstwa jednej ze stron lub remisu (7 pkt.).


Program będzie oceniany tylko w przypadku,
gdy będzie można go skompilować i uruchomić!
----------------------------------------------------
Przykładowe wyniki uruchomienia programu:

Zagrajmy w "papier, kamien, nozyce"!
Zaczyna uzytkownik, wybierajac:
1 - papier
2 - kamien
3 - nozyce
3
Uzytkownik wybral papier.
Komputer wylosowal kamien.
Uzytkownik wygrywa.

Zagrajmy w "papier, kamien, nozyce"!
Zaczyna uzytkownik, wybierajac:
1 - papier
2 - kamien
3 - nozyce
3
Uzytkownik wybral nozyce.
Komputer wylosowal kamien.
Komputer wygrywa.

Zagrajmy w "papier, kamien, nozyce"!
Zaczyna uzytkownik, wybierajac:
1 - papier
2 - kamien
3 - nozyce
3
Uzytkownik wybral nozyce.
Komputer wylosowal nozyce.
Remis.

----------------------------------------------------

*/

/* ??/15 pkt */

#include <stdio.h>
#include <time.h>

int main() {
    /* deklaracja zmiennych */
    int u, k;
    /* interakcja z uzytkownikiem */
    printf("Zagrajmy w \"papier, kamien, nozyce\"!\n");
    printf("Zaczyna uzytkownik, wybierajac: \n");
    printf("1 - papier\n");
    printf("2 - kamien\n");
    printf("3 - nozyce\n");
    scanf("%d", &u);
    /* sprawdzenie, czy uzytkownik podal poprawna wartos */
    if ((u != 1) && (u != 2) && (u != 3)) {
        printf("Nie wybrano 1, 2, lub 3. Koniec gry.\n");
        return -1;
    }
    if (u == 1)
        printf("Uzytkownik wybral papier.\n");
    else if (u == 2)
        printf("Uzytkownik wybral kamien.\n");
    else if (u == 3)
        printf("Uzytkownik wybral nozyce.\n");

    if ((u == 1) || (u == 2) || (u == 3)) {
        /* wylosowanie wyboru komputera i przypisanie go do zmiennej */
        srand(time(NULL));
        k = rand()%3 + 1;
        /* porownanie wyboru komputera z wyborem uzytkownika i ustalenie
           zwyciestwa jedenj ze stron lub remisu */
        if (k == 1) {
            printf("Komputer wylosowal papier.\n");
            if (u == 1)
                printf("Remis.\n");
            else if (u == 2)
                printf("Komputer wygrywa.\n");
            else if (u == 3)
                printf("Uzytkownik wygrywa.\n");
        } else if (k == 2) {
            printf("Komputer wylosowal kamien.\n");
            if (u == 1)
                printf("Uzytkownik wygrywa.\n");
            else if (u == 2)
                printf("Remis.\n");
            else if (u == 3)
                printf("Komputer wygrywa.\n");
        } else if (k == 3) {
            printf("Komputer wylosowal nozyce.\n");
            if (u == 1)
                printf("Komputer wygrywa.\n");
            else if (u == 2)
                printf("Uzytkownik wygrywa.\n");
            else if (u == 3)
                printf("Remis.\n");
        }
    }
    return 0;
}
