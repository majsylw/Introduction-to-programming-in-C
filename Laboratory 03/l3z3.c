#include <stdio.h>

#define C 2.99792e8
main() {
    float a, b, x;

    printf("Podaj argument (x): ");
    scanf(" %f", &x);
    printf("Podaj wspolczynnik a: ");
    scanf(" %f", &a);
    printf("Podaj wspolczynnik b: ");
    scanf(" %f", &b);

    printf("Wartosc funkcji f(x) = %f*x + %f w punkcie x = %f wynosi %f.\n", a, b, x, a * x + b);

    return 0;
}
