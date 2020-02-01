#include <stdio.h>

int main() {
    float y, x, A, B;

    // Z Celsjusza na Farenheita
    /* * /
    A = 1.8;
    B = 32;
    x = 36.6;
    /* */

    // Z Farenheita na Celsjusza
    /* * /
    A = 0.56;
    B = -17.78;
    x = 97.88;
    /* */

    // Z Celsjusza na Kelwina
    /* * /
    A = 1;
    B = 273.15;
    x = 36.6;
    /* */

    // Z Kelwina na Celsjusza
    /* */
    A = 1;
    B = -273.15;
    x = 309.75;
    /* */

    y = A * x + B;

    printf("Temperatura wejsciowa:\t%.2f \n", x);
    printf("Temperatura wyjsciowa:\t%.2f \n", y);

    return 0;
}
