/*Wstep do programowania
Zaliczenie czastkowe 1
06.11.2017 grupa P00-53a
imie:
nazwisko:
indeks:
*/

/*Zadanie 3 (5 pkt.)
Rownanie Clapeyrona opisuje zwiazek pomiedzy temperatura, cisnieniem i objetoscia gazu doskonalego.
Sformulowane zostalo w 1834 roku przez Benoit Clapeyrona.
Prawo to wyraza sie wzorem:
pV = nRT,
gdzie:
p – cisnienie [Pa],
V – objetosc [m^3],
n – liczba moli gazu,
T – temperatura bezwzglêdna [K],
R – stala gazowa 8,314 J/(mol·K).

Znajac trzy z czterech parametrow (p, V, n, T) mozna wyznaczyc czwarty.
Napisz program, ktory pobiera od uzytkownika trzy wielkosci,
a nastepnie oblicza czwarta (wybierz dowolna). */

#include <stdio.h>
#define R 8.314

int main(){
    double p, V, n, T;

    printf("Podaj cisnienie [Pa]: ");
    scanf("%lf",&p);
    printf("Podaj objetosc [m^3]: ");
    scanf("%lf",&V);
    printf("Podaj temperature [K]: ");
    scanf("%lf",&T);
    n = p*V/R/T;
    printf("Liczba moli gazu n = %g",n);
    return 0;
}
