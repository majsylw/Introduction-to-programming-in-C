#include <stdio.h>
#include <stdlib.h>

main(){
    int a, b, wieksza, mniejsza, roznica;
    float gv, lv;

    printf("Podaj liczbe calkowita (a): ");
    scanf(" %d", &a);
    printf("Podaj liczbe calkowita (b): ");
    scanf(" %d", &b);

    roznica = abs(a - b);
    wieksza = (a + b + abs(a - b))/2;
    mniejsza = a + b - wieksza;
    //gv = roznica/mniejsza * 100; //niepoprawne: wynik dzielenia pozostaje intem
    //lv = roznica/wieksza * 100; //niepoprawne: wynik dzielenia pozostaje intem
    gv = roznica/(float)mniejsza * 100;
    lv = roznica/(float)wieksza * 100;

    printf("Liczba %d jest wieksza od %d o %.2f%%\n", wieksza, mniejsza, gv);
    printf("Liczba %d jest mniejsza od %d o %.2f%%", mniejsza, wieksza, lv);

    return 0;
}
