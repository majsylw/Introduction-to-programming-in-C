/*Wstep do programowania
grupa P00-53f
22.01.2018 Kolokwium
imie:
nazwisko:
indeks:
*/

/*Zadanie 2 (15 pkt.)*/

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
    printf("1:Petla for\n");
    printf("2:Petla while\n");
    printf("Pozostale:Petla do while\n");
    scanf("%d",&wybor);
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
            for (i=0;i<=n;i++)//4pt za poprawne wykonanie działań w tej pętli
                {x=i*3.1415/n;
                 y=sin(x);
                 printf("%f   %f\n",x,y);
                }
        }
        break;
    case(2):
        {
            while(i<=n)//4pt za poprawne wykonanie działań w tej pętli
                {x=i*3.1415/n;
                 y=sin(x);
                 printf("%f   %f\n",x,y);
                 i++;
                }
             break;
        }
    default:
        {
            do//4pt za poprawne wykonanie działań w tej pętli
                {x=i*3.1415/n;
                 y=sin(x);
                 printf("%f   %f\n",x,y);
                 i++;
                }
            while(i<=n);
            break;
        }
    }
    return 0;
}
