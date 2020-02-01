# Kolokwium

## Zadanie 1
Napisz program, ktory:
- pobiera od uzytkownika dlugosci trzech odcinkow,
- sprawdza czy z tych odcinkow mozna zbudowac trojkat,
- jesli tak to sprawdza czy jest to trojkat prostokatny,
- jesli tak, to oblicza jego pole.<br>

W sytuacji, w ktorej jeden z warunkow nie jest spelniony
program powinien wyswietlic odpowiednia informacje.

Szczegolowe wymogi dotyczace implementacji programu:
- zadeklaruj zmienne odpowiedniego typu przechowujace
  dlugosci odcinkow (1 pkt)
- poprzez interacje z uzytkownikiem pobierz ich dlugosci
  (1 pkt)
- sprawdz czy podane odcinki w jakiejkolwiek konfiguracji
  moga utworzyc trojkat (3 pkt)
- jesli nie jest to mozliwe, wyswietl odpowiednia informacje
  (1 pkt)
- jesli jest to mozliwe, to sprawdz czy trojkat jest prostokatny
  (3 pkt)
- jesli jest to oblicz i wyswietl jego pole (4 pkt)
- jesli nie jest, to wyswietl odpowiednia informacje (1 pkt)
- zadbaj o to, aby program obliczal pole tylko dla trojkata
  prostokatnego i nie powielal tych samych komunikatow w roznych
  przypadkach (1 pkt)

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!


## Zadanie 2
<pre>
#include <stdio.h>
#include <stdlib.h>
#include  <math.h>

int main()
{
    char wybor;
    int i,n;
    float x,y;

    n=20;
    i=0;

    printf("Program tablicuje funkcje sin(x) na przedziale 0 pi\n");
    // Po przez tablicowanie funkcji sin(x) rozumie się wypisanie w konsoli dwóch kolumn liczb,
    // gdzie w pierwszej kolumnie znajdują się kolejne wartości x a w drugiej kolejne wartości sin(x).
    printf("Wybierz jak chcesz dokonac obliczen.\n");

    // Napisz menu, z którego wybierzesz jak będą prowadzone policzenia
    // 1: przy pomocy pętli "for"
    // 2: przy pomocy pętli "while"
    // W przeciwnym wypadku przy pomcy petli "do while"

    //3pt za wypisanie menu na ekranie komputera i wczytanie zmiennej wybor
    printf("x\tsin(x)\n");
    switch(wybor)
    {
    case(1):
        {
            for ()//4pt za poprawne wykonanie działań w tej pętli
                {
                }
        }
    case(2):
        {
            while()//4pt za poprawne wykonanie działań w tej pętli
                {
                }
        }
    default:
        {
            do//4pt za poprawne wykonanie działań w tej pętli
                {
                }
            while();
        }
    }
    return 0;
}
</pre>


## Zadanie 3
Napisz program, ktory pobiera od uzytkownika liczbe calkowita n,
alokuje pamiec (dynamiczna tablica dla n elementow) i wypelnia ja
losowymi liczbami calkowitymi z przedzialu od 1 do 20.
Nastepnie program wyswietla zawartosc tablicy na ekranie i zwalnia pamiec do niej przypisana.