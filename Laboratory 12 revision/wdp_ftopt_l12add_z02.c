/*Opracuj algorytm, który dla zadanej liczby naturalnej w systemie dziesiêtnym
zapisze j¹ jako liczbê w systemie pozycyjnym o podanej przez u¿ytkownika podstawie,
tzn. np. 2510 w zapisie przy podstawie 8 daje 31, bo 2510 = 81*3+80*1.
Napisz program, który kolejno: zapyta u¿ytkownika o liczbê naturaln¹, przeprowadzi stosowne operacje,
a nastêpnie zapyta u¿ytkownika, czy chce podaæ jeszcze jedn¹ liczbê.
Je¿eli odpowiedŸ u¿ytkownika bêdzie na tak, program przejdzie znów ca³y cykl:
wprowadzenie danej - wypisanie wyniku-pytanie o kontynuacjê.
Je¿eli odpowiedŸ bêdzie na nie to program podziêkuje i skoñczy pracê.
UWAGA: Interesuj¹ nas uk³ady pozycyjne o podstawach od 2 do 10 w³¹cznie.
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>

int main(void)
{
    int statement = 0;
    do{
        printf("Podaj liczbe w systemie dziesietnym: ");
        int liczba = 0;
        scanf("%d", &liczba);
        printf("\nPodaj podstawe systemu pozycyjnego: ");
        int podstawa;
        scanf("%d", &podstawa);

        printf("%d = ", liczba);

        int pomocnicza = 0;
        if(liczba < 0)
        {
            printf("-");
            liczba = -1*liczba;
        }

        int i=0, dodatkowa = liczba;
        while(dodatkowa > podstawa-1)
        {
          dodatkowa = dodatkowa/podstawa;
          i++;
        }

        int wykladnik = i;
        while(wykladnik!=-1)
        {
            pomocnicza = 0;
            i = -1;
            dodatkowa = liczba;
            do
            {
                pomocnicza = dodatkowa % podstawa;
                dodatkowa = dodatkowa / podstawa;
                i++;
            } while(i != wykladnik);

            if(pomocnicza < 10)
                printf("%d", pomocnicza);
            else
            {
                if(pomocnicza == 10)
                    printf("A");
                if(pomocnicza == 11)
                    printf("B");
                if(pomocnicza == 12)
                    printf("C");
                if(pomocnicza == 13)
                    printf("D");
                if(pomocnicza == 14)
                    printf("E");
                if(pomocnicza == 15)
                    printf("F");
                if(pomocnicza == 16)
                    printf("G");
                if(pomocnicza == 17)
                    printf("H");
                if(pomocnicza == 18)
                    printf("I");
                if(pomocnicza == 19)
                    printf("J");
                if(pomocnicza == 20)
                    printf("K");
                if(pomocnicza == 21)
                    printf("L");
                if(pomocnicza == 22)
                    printf("M");
                if(pomocnicza == 23)
                    printf("N");
                if(pomocnicza == 24)
                    printf("O");
                if(pomocnicza == 25)
                    printf("P");
                if(pomocnicza == 26)
                    printf("R");
            }

            wykladnik = wykladnik-1;

        }
        printf("\nCzy chcesz kontynuowac? (tak-1,nie-0) ");
        scanf("%d", &statement);
    } while(statement);
    printf("\nDziekuje za wspolna prace.");
    return 0;
}
