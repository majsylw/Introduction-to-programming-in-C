/*Wstep do programowania
grupa P00-53f
15.01.2018 Kolokwium
imie:
nazwisko:
indeks:
*/

/*Zadanie 2 "cRPG na PWr w A-1" (15 pkt.)

Należy uzupełnić kod zgodnie komentarzami opisującymi poszczególne jego elementy.
Wprowadzane linie kodu odnoszące się do zadanych komentarzy powinny zostać umieszczone
między komentarzem wyjaśniającym a odpowiednią serią kropek, która już jest umieszczona pod każdym komentarzem.
Komentarzy nie wolno modyfikować ani usuwać. Wprowadzonych linii kodu nie wolno usuwać,
można dopisywać do nich treści, gdy jest to wymagane w komentarzu.

*/
#include <stdio.h>
#include <stdlib.h>
// Zdefiniuj stałą o nazwie PI_42, która przechowuje wartość 9. (1 pkt)
#define PI_42 9
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
    do
    {
        // Pobierz z konsoli liczbe i wprowadz ją do zmiennej to_co_upadlo (1 pkt)
        scanf("%d",&to_co_upadlo);
        // ........................

        // Skorzystaj z instrukcji "switch" oraz pobranej zmiennej "to_co_upadlo" (3 pkt)
        // do wypisania na ekranie odpowiednich komunikatów:
        // gdy to_co_upadlo równa się 1 to wypisywana jest treść "Budzisz sie w sali wykladowej 322 w budyku A-1.\n"
        // gdy to_co_upadlo równa się 2 to wypisywana jest treść "Budzisz sie w sali komputerowej 250 w budynku A-1.\n"
        // gdy to_co_upadlo równa się 3 to wypisywana jest treść "Budzisz sie niewiadomo gdzie w budynku A-1, najpewniej w piwnicy.\n"
        // w innym przypadku (domyślnie)   wypisywana jest treść "Ewidentnie cos jest nie tak. Co upadlo?\n"
        switch(to_co_upadlo)
        {
        case(1):
            printf("Budzisz sie w sali wykladowej 322 w budyku A-1.\n");
            break;
        case(2):
            printf("Budzisz sie w sali komputerowej 250 w budynku A-1.\n");
            break;
        case(3):
            printf("Budzisz sie niewiadomo gdzie w budynku A-1, najpewniej w piwnicy.\n");
            break;
        default:
            printf("Ewidentnie cos jest nie tak. Co upadlo?\n");
            break;
        }
        // ........................
    }
    while(to_co_upadlo>3 || to_co_upadlo<1);
    // ........................

    printf("Probujesz przypomniec sobie wartosc cyfry stojacej na 42 miejscu po przecinku\n");
    printf("w dziesietnym rozwinieciu liczby pi. Jaka wartosc sobie przypominasz?\n");

    // Zainicjalizuj funkcję losującą oraz (1 pkt)
    // wylosuj cyfre i zapisz ją do zmiennej pi_42_rand. (1 pkt)
    srand(time(NULL));
    pi_42_rand = rand()%10;
    // ........................

    // Pobierz z konsoli liczbe i wprowadz ją do zmiennej pi_42_mem (0.5 pkt)
    scanf("%d",&pi_42_mem);
    // ........................

    // Utwórz pętlę "while", która będzie się wykonywać gdy gdy pi_42_mem jest różne
    // od wartości wcześniej wylosowanej(1 pkt)
    // UWAGA! Pętla powinna zawierać dwie poniższe linie z wywołaniem funkcji prontf
    // oraz treść objętą kolejnym komentarzem.
    while(pi_42_mem!=pi_42_rand)
    {
       printf("Nie prawda, w twym umysle pojawia sie inna wartosc.\n");
       printf("Jaka wartosc sobie przypominasz?\n");
       // Pobierz z konsoli liczbe i wprowadz ją do zmiennej pi_42_mem (0.5 pkt)
       scanf("%d",&pi_42_mem);
       // ........................
    }
    // ........................

    // Uzupełnij warunek w funkcji if tak by zwracał wartoćś "prawda" gdy (1 pkt)
    // wylosowana wcześniej wartość równa jest wartości przechowywanej w PI_42
    if(pi_42_rand == PI_42)
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
    // Wypisz, w jednej linii, oddzielone spacjami liczby od 100 do 1 co 3, za pomocą zmiennej "sto_trzy" oraz pętli "for".(2 pkt)
    for(sto_trzy = 100; sto_trzy>=1; sto_trzy-=3)
    {
        printf("%d ",sto_trzy);
    }
    // ........................

    printf("\nTak, to byl tylko koszmar. Budzisz sie na zajeciach podstaw programowania\n");
    printf("i juz wiesz jaka cyfra znajduje sie na 42 miescu po przecinku w dziesietnym\n");

    // Za pomocą stałej PI_42 wypisz w konsoli następujący tekst:
    // "rozwinieciu liczby pi. Wynosi ona 9. Zdobywasz 100 Exp." (1 pkt)
    printf("rozwinieciu liczby pi. Wynosi ona %d. Zdobywasz 100 Exp.",PI_42);
    // ........................

    return 0;
}
