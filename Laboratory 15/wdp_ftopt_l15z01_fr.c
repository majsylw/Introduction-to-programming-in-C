/*Wstep do programowania
grupa P00-53f
22.01.2018 Kolokwium
imie:
nazwisko:
indeks:
*/

/* Zadanie 1 (15 pkt)

Napisz program, ktory:
- pobiera od uzytkownika dlugosci trzech odcinkow,
- sprawdza czy z tych odcinkow mozna zbudowac trojkat,
- jesli tak to sprawdza czy jest to trojkat prostokatny,
- jesli tak, to oblicza jego pole.
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
----------------------------------------------------
Przykladowe wyniki uruchomienia programu:

Podaj dlugosci trzech odcinkow
a: 3.0
b: 4.0
c: 5.0
Trojkat jest prostokatny.
Pole tego trojkata wynosi: 6.00
----------------------------------------------------

*/

/* ??/15 pkt */

#include<stdio.h>

main(){
    /* deklaracja zmiennych - 1 pkt */
    float a,b,c,a2,b2,c2;
    /* interakcja z uzytkownikiem - 1 pkt */
    printf("Podaj dlugosci trzech odcnikow:\n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);

    /* odpowiednia konstrukcja warunku/warunkow - 3 pkt */
    if(a+b<c || a+c<b || b+c<a)
    {
        /* wyswietlenie odpowiedniej informacji - 1 pkt */
        printf("Podane odcinki nie moga utworzyc trojkata.\n");
    }
    else
    {
        a2=a*a; /*obliczenie kwadratow do sprawdzania war. na trojkat prostokatny */
        b2=b*b; /*2 pkt*/
        c2=c*c;
        /* odpowiednie sformulowanie warunkow na trojkat prostokatny - 3 pkt */
        if(a2+b2==c2)
        {
            printf("Trojkat jest prostokatny.\n");
            /* obliczenie i wyswietlenie pola - 2 pkt */
            printf("Pole tego trojkata wynosi: %.2f\n",0.5*a*b);
        }
        else if(a2+c2==b2) /*odpowiednia konstrukcja else if do kilku potencjalnych mozliwosci - 1 pkt*/
        {
            printf("Trojkat jest prostokatny.\n");
            printf("Pole tego trojkata wynosi: %.2f\n",0.5*a*c);
        }

        else if(b2+c2==a2)
        {
            printf("Trojkat jest prostokatny.\n");
            printf("Pole tego trojkata wynosi: %.2f\n",0.5*b*c);
        }
        else
        {
            /* uwzglednienie opcji trojkata nieprostokatnego - 1 pkt */
            printf("Trojkat nie jest prostokatny.\n");
        }
    }
    return 0;
}
