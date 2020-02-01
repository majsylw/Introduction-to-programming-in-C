#include <stdio.h>

main(){
    float a, b, c, x, wynik;

    printf("Podaj argument (x): ");
    scanf(" %f", &x);
    printf("Podaj wspolczynnik a: ");
    scanf(" %f", &a);
    printf("Podaj wspolczynnik b: ");
    scanf(" %f", &b);
    printf("Podaj wspolczynnik c: ");
    scanf(" %f", &c);

    wynik = a * x * x + b * x + c;

    printf("Trojmian kwadratowy %f*x^2 + %f*x + %f dla x = %f przyjmuje wartosc %f.\n", a, b, c, x, wynik);

    return 0;
}
