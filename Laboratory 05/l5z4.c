#include <stdio.h>

main(){
    float x;

    printf("Podaj liczbe rzeczywista x: ");
    scanf(" %f", &x);
    printf("x^6 = %f\n", x*x*x*x*x*x);

    return 0;
}
