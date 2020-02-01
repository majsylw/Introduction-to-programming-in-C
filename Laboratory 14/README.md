# Kolokwium

## Zadanie 1
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


## Zadanie 2
Należy uzupełnić kod zgodnie komentarzami opisującymi poszczególne jego elementy.
Wprowadzane linie kodu odnoszące się do zadanych komentarzy powinny zostać umieszczone
między komentarzem wyjaśniającym a odpowiednią serią kropek, która już jest umieszczona pod każdym komentarzem.
Komentarzy nie wolno modyfikować ani usuwać. Wprowadzonych linii kodu nie wolno usuwać,
można dopisywać do nich treści, gdy jest to wymagane w komentarzu.

<pre>
#include <stdio.h>
#include <stdlib.h>
// Zdefiniuj stałą o nazwie PI_42, która przechowuje wartość 9. (1 pkt)
// ........................
int main()
{
    int to_co_upadlo,
        pi_42_mem,
        pi_42_rand;

    printf("Jest srodek nocy i panuje polmrok. Cos upada na odloge wytwarzajac tym duzo chalasu.\n");
    printf("Co upadlo na podloge?\n");
    printf("1 - Wahadlo\n2 - Monitor\n3 - Nie wiadomo co\n");

    // Utwórz pętlę "do while", która będzie się wykonywać do czasu aż gracz poda liczbę(2 pkt)
    // z przedziału od 1 do 3.
    // UWAGA: Kod opisany kolejnymi dwoma komentarzami powinien znaleźć się wewnątrz tej pętli

        // Pobierz z konsoli liczbe i wprowadz ją do zmiennej to_co_upadlo (1 pkt)
        // ........................

        // Skorzystaj z instrukcji "switch" oraz pobranej zmiennej "to_co_upadlo" (3 pkt)
        // do wypisania na ekranie odpowiednich komunikatów:
        // gdy to_co_upadlo równa się 1 to wypisywana jest treść "Budzisz sie w sali wykladowej 322 w budyku A-1.\n"
        // gdy to_co_upadlo równa się 2 to wypisywana jest treść "Budzisz sie w sali komputerowej 250 w budynku A-1.\n"
        // gdy to_co_upadlo równa się 3 to wypisywana jest treść "Budzisz sie niewiadomo gdzie w budynku A-1, najpewniej w piwnicy.\n"
        // w innym przypadku (domyślnie)   wypisywana jest treść "Ewidentnie cos jest nie tak. Co upadlo?\n"
        // ........................

    // ........................

    printf("Probujesz przypomniec sobie wartosc cyfry stojacej na 42 miejscu po przecinku\n");
    printf("w dziesietnym rozwinieciu liczby pi. Jaka wartosc sobie przypominasz?\n");

    // Zainicjalizuj funkcję losującą oraz (1 pkt)
    // wylosuj cyfre i zapisz ją do zmiennej pi_42_rand. (1 pkt)
    // ........................

    // Pobierz z konsoli liczbe i wprowadz ją do zmiennej pi_42_mem (0.5 pkt)
    // ........................

    // Utwórz pętlę "while", która będzie się wykonywać gdy gdy pi_42_mem jest różne
    // od wartości wcześniej wylosowanej(1 pkt)
    // UWAGA! Pętla powinna zawierać dwie poniższe linie z wywołaniem funkcji prontf
    // oraz treść objętą kolejnym komentarzem.
       printf("Nie prawda, w twym umysle pojawia sie inna wartosc.\n");
       printf("Jaka wartosc sobie przypominasz?\n");
       // Pobierz z konsoli liczbe i wprowadz ją do zmiennej pi_42_mem (0.5 pkt)
       // ........................
    // ........................

    // Uzupełnij warunek w funkcji if tak by zwracał wartoćś "prawda" gdy (1 pkt)
    // wylosowana wcześniej wartość równa jest wartości przechowywanej w PI_42
    if()
    // ........................
    {
        printf("Przypomniales sobie odpowiednia liczbe, oraz wiesz gdzie jestes\n");
        printf("i jak wydostac sie z obecnej sytuacji. Dodatkowo wzrosly twoje\n");
        printf("umiejetnosci programowania. Zdobywasz 100 Exp.");
        return 0;
    }
    else
    {
        printf("Jest zle. Nie wiesz co sie z toba dzieje wiec postanawiasz policzyc\n");
        printf("od 100 do 1 co 3. Moze to tylko koszmar i zaraz sie obudzisz?\n");
    }

    int sto_trzy;
    // Wypisz, w jednej linii konsoli, oddzielone spacjami liczby od 100 do 1 co 3, za pomocą zmiennej "sto_trzy" oraz pętli "for".(2 pkt)
    // ........................

    printf("\nTak, to byl tylko koszmar. Budzisz sie na zajeciach podstaw programowania\n");
    printf("i juz wiesz jaka cyfra znajduje sie na 42 miescu po przecinku w dziesietnym\n");

    // Za pomocą stałej PI_42 wypisz w konsoli następujący tekst:
    // "rozwinieciu liczby pi. Wynosi ona 9. Zdobywasz 100 Exp." (1 pkt)
    // ........................

    return 0;
}
</pre>


## Zadanie 3
Napisz program, ktory poprosi uzytkownika o podanie liczby naturalnej n.
Nastepnie alokuje pamiec dla tablicy zawierajacej n liczb calkowitych.
Stworz 2 wskazniki do obiektow tablicy znajdujacych sie na losowych pozycjach.
Upewnij sie, ze za kazdym uruchomieniem programu, jest mozliwe wylosowanie innych indeksow.
Sprawdz czy ustawione wskazniki pokazuja na ten sam obiekt i wyswietl stosowny komunikat.