/*Wstep do programowania
Zaliczenie czastkowe 2
20.11.2017 grupa P00-53a
imie:
nazwisko:
indeks:
*/

/*Zadanie 3 (5 pkt.)
Napisz program, ktory bedzie prosil uzytkownika o podanie cyfry (liczby calkowitej w zakresie 0-9),
a nastepnie odpowiednio zamieni ja na liczebnik (cyfre zapisana slownie)
i wprowadzi ja do ponizej zapisanych zdan:
Ala ma <podany liczebnik> kota.
Tomek wyniosl <podany liczebnik> kosz smieci.
Ile pamieci zajmuja wprowadzone zmienne? Wyswietl stosowne komunikaty.
Uwaga: Pamietaj o odpowiedniej odmianie zarowno liczebnika, jak i nastepujacego po nim rzeczownika!
*/

#include <stdio.h>
#include <string.h>

main(){
    int liczebnik = 0;
    char licz[15], licz2[15];
    //printf("Program .\n");
    printf("Podaj liczbe calkowita w zakresie 0-9: ");
    scanf("%d", &liczebnik);

    if(liczebnik <= 9 && liczebnik >= 0){
        if (liczebnik == 0){
            strcpy(licz, "zero kotow");
            strcpy(licz2, "zero koszy");
        }
        if (liczebnik == 1){
            strcpy(licz, "jednego kota");
            strcpy(licz2, "jeden kosz");
        }
        if (liczebnik == 2){
            strcpy(licz, "dwa koty");
            strcpy(licz2, "dwa kosze");
        }
        if (liczebnik == 3){
            strcpy(licz, "trzy koty");
            strcpy(licz2, "trzy kosze");
        }
        if (liczebnik == 4){
            strcpy(licz, "cztery koty");
            strcpy(licz2, "cztery kosze");
        }
        if (liczebnik == 5){
            strcpy(licz, "piec kotow");
            strcpy(licz2, "piec koszy");
        }
        if (liczebnik == 6){
            strcpy(licz, "szesc kotow");
            strcpy(licz2, "szesc koszy");
        }
        if (liczebnik == 7){
            strcpy(licz, "siedem kotow");
            strcpy(licz2, "siedem koszy");
        }
        if (liczebnik == 8){
            strcpy(licz, "osiem kotow");
            strcpy(licz2, "osiem koszy");
        }
        if (liczebnik == 9){
            strcpy(licz, "dziewiec kotow");
            strcpy(licz2, "dziewiec koszy");
        }

        printf("Ala ma %s.\n", licz);
        printf("Tomek wyniosl %s smieci.\n\n", licz2);
    } else {

        printf("Nie wprowadzono liczby z zakresu 0-9.\n\n");
    }

    printf("Rozmiar lancuchow wynosi %d.\n", sizeof(licz));
    printf("Rozmiar wprowadzonej liczby wynosi %d.\n", sizeof(liczebnik));

    return 0;
}
