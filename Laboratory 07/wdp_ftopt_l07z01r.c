/*Wstep do programowania
Zaliczenie czastkowe 2
20.11.2017 grupa P00-53a
imie:
nazwisko:
indeks:
*/

/*Zadanie 1 (4 pkt.)
Napisz program, ktory oblicza sume dwoch liczb wymiernych.
Popros kolejno o wprowadzenie licznika i mianownika ulamkow.
Dopuszczalnym jest wprowadzenie przez uzytkownika ulamkow niewlasciwych (licznik jest wiekszy od mianownika),
ale nie ma mozliwosci wprowadzenia liczb mieszanych (liczba calkowita i ulamek).
Pamietaj zeby nie dopuscic do dzielenia przez zero.
Wyswietl ostateczny wynik w zrozumialej postaci.
*/

#include <stdio.h>

int main(){
    int licznik1=0, licznik2=0, mianownik1=0, mianownik2=0;
    int licznik_new=0, mianownik_new=0;

    printf("Program dodajacy dwa ulamki.\n\n");
    printf("Podaj pierwszy ulamek: (jako separator licznika i mianownika uzyj /) ");
    scanf("%d/%d", &licznik1, &mianownik1);
    printf("Podaj drugi ulamek: (jako separator licznika i mianownika uzyj /) ");
    scanf("%d/%d", &licznik2, &mianownik2);

    if( mianownik2 != 0 && mianownik1 != 0){
        mianownik_new = mianownik1 * mianownik2;
        licznik_new = licznik1*mianownik2;
        licznik_new += licznik2*mianownik1;

        printf("\nWynikiem dodawania jest:\n");
        printf("%d/%d + %d/%d = %d/%d \n", licznik1, mianownik1, licznik2, mianownik2, licznik_new, mianownik_new);
    } else{
        printf("Nie mozna dzielic przez 0!");
    }

    return 0;
}
