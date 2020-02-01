/*Wstep do programowania
grupa P00-53f
15.01.2018 Kolokwium
imie:
nazwisko:
indeks:
*/

/* Zadanie 1 (15 pkt)

Napisz program, ktory realizuje "slynny" schemat,
wedlug ktorego kazdy problem mozna rozwiazac przy
uzyciu tasmy klejacej albo preparatu WD40.

Program powinien zadan pytanie „Czy to się rusza?”
a uzytkownik powinien udzielac odpowiedzi,
- jesli "to" (czyli przedmiot problemu) sie rusza
  program powinien zadac pytanie czy to powinno sie
  ruszac,
- jesli powinno, to problem jest rozwiazany,
- jesli nie powinno to trzeba uzyc tasmy i problem
  rozwiazany.

- jesli "to" sie nie rusza program powiniene zadac
  pytanie czy powinno,
- jesli nie powinno, to problem jest rozwiazany,
- jesli powinno to trzeba uzyc WD40 i problem
  rozwiazany.

Szczegolowe wymogi dotyczace implementacji programu:
- zadeklaruj potrzebne zmienne odpowiedniego typu (1 pkt)
- poprawnie zaprogramuj interakcje z uzytkownikiem - daj
  mu mozliwosc wyboru odpowiedzi (3 pkt)
- skonstruuj odpowiedni warunek sprawdzajacy odpowiedz
  i kierujacy dalsza czescia programu (3 pkt)
- przypisz instrukcji else odpowiednie dzialanie (1 pkt)
- rozwiaz problem z kilkoma funkcjami scanf w jednym
  programie (1 pkt)
- zaprogramuj kolejna interakcje z uzytkownikiem wewnatrz
  warunku (2 pkt)
- dla kazdego mozliwego wyniku wypisz odpowiedni komunikat
  (4 pkt)

Program bedzie oceniany tylko w przypadku,
gdy bedzie mozna go skompilowac i uruchomic!
----------------------------------------------------
Przykladowe wyniki uruchomienia programu:

Czy to sie rusza? (T/N) T
A powinno? (T/N) n
Uzyj tasmy!
----------------------------------------------------

*/

/* ??/15 pkt */

#include <stdio.h>

main()
{
    /* deklaracja zmiennych - 1 pkt */
	char odp;
	/* interakcja z uzytkownikiem, wybor i opis opcji T/N, 1/2, Tak/Nie, itp. - 3 pkt */
    printf("Czy to sie rusza? (T/N)");
    scanf("%c",&odp);
    /* odpowiednia konstrukcja warunku - 1 pkt */
    if(toupper(odp)=='T') /* odpowiednia skladnia warunku - 2 pkt */
    {
        getchar(); /* rozwiazanie problemu kilku kolejnych funkcji scanf - 1 pkt */
        printf("A powinno? (T/N)"); /* kolejna interakcja z uzytkownikiem - 1 pkt*/
        scanf("%c",&odp);
        if(toupper(odp)=='T')
            printf("Problem rozwiazany!\n"); /* wypisanie odpowiedniego komunikatu - 1 pkt */
        else
            printf("Uzyj tasmy!\n"); /* wypisanie odpowiedniego komunikatu - 1 pkt */
    }
    else /* odpowiednie operowanie funkcja else - 1 pkt */
    {
        getchar();
        printf("A powinno? (T/N)\n"); /* kolejna interakcja z uzytkownikiem - 1 pkt*/
        scanf("%c",&odp);
        if(toupper(odp)=='T')
            printf("Uzyj WD40!\n"); /* wypisanie odpowiedniego komunikatu - 1 pkt */
        else
            printf("Problem rozwiazany!\n");/* wypisanie odpowiedniego komunikatu - 1 pkt */
    }
    return 0;
}
