/*Wstep do programowania
Zaliczenie czastkowe 2
04.12.2018 grupa P00-19h
imie:
nazwisko:
indeks:
*/

/*Zadanie 2 (9 pkt.)
Napisz program, ktory bedzie prosil uzytkownika o podanie cyfry (liczby calkowitej w zakresie 0-9),
a nastepnie odpowiednio zamieni ja na liczebnik (cyfre zapisana slownie)
i wprowadzi ja do ponizej zapisanych zdan:
Ala ma <podany liczebnik> kota.
Tomek wyniosl <podany liczebnik> kosz smieci.

Ile pamieci zajmuja wprowadzone zmienne lancuchowe? Wyswietl stosowne komunikaty.
Uwaga: Pamietaj o odpowiedniej odmianie zarowno liczebnika, jak i nastepujacego po nim rzeczownika!

----------------------------------------------------------------------------------------------------
Przyklady wywolania
----------------------------------------------------------------------------------------------------
Podaj liczbe calkowita w zakresie 0-9: 6

Ala ma szesc kotow.
Tomek wyniosl szesc koszy smieci.

Rozmiar lancuchow wynosi 30 bajtow.
Rozmiar wprowadzonej liczby wynosi 4 bajty.

----------------------------------------------------------------------------------------------------
Podaj liczbe calkowita w zakresie 0-9: -1

Nie wprowadzono liczby z zakresu 0-9.
*/

#include <stdio.h>
#include <string.h>

main(){
    int liczebnik = 0;
    int rozmiary;
    char licz[15], licz2[15]; // 1pkt
    //printf("Program .\n");
    printf("Podaj liczbe calkowita w zakresie 0-9: "); // 1pkt
    scanf("%d", &liczebnik);

    switch(liczebnik){ //5pkt
        case 0:{
            strcpy(licz, "zero kotow");
            strcpy(licz2, "zero koszy");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 1:{
            strcpy(licz, "jednego kota");
            strcpy(licz2, "jeden kosz");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 2:{
            strcpy(licz, "dwa koty");
            strcpy(licz2, "dwa kosze");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 3:{
            strcpy(licz, "trzy koty");
            strcpy(licz2, "trzy kosze");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 4:{
            strcpy(licz, "cztery koty");
            strcpy(licz2, "cztery kosze");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 5:{
            strcpy(licz, "piec kotow");
            strcpy(licz2, "piec koszy");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 6:{
            strcpy(licz, "szesc kotow");
            strcpy(licz2, "szesc koszy");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 7:{
            strcpy(licz, "siedem kotow");
            strcpy(licz2, "siedem koszy");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 8:{
            strcpy(licz, "osiem kotow");
            strcpy(licz2, "osiem koszy");
            rozmiary = sizeof(licz) + sizeof(licz2);
        }
        case 9:{
            strcpy(licz, "dziewiec kotow");
            strcpy(licz2, "dziewiec koszy");
            rozmiary = sizeof(licz) + sizeof(licz2);
            break;
        }
        default: {
            printf("Nie wprowadzono liczby z zakresu 0-9.\n\n");
        }
    }
    if(liczebnik >= 0 && liczebnik <= 9){
        printf("Ala ma %s.\n", licz);
        printf("Tomek wyniosl %s smieci.\n\n", licz2);
        printf("Rozmiar lancuchow wynosi %d.\n", rozmiary); // 1pkt
        printf("Rozmiar wprowadzonej liczby wynosi %d.\n", sizeof(liczebnik)); // 1pkt
    }

    return 0;
}


