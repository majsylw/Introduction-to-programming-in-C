#include <stdio.h>
#include <math.h>

main(){
    float a, b, c, delta, x0, x1, x2;
    printf("Podaj wspolczynnik a: ");
    scanf("%f", &a);
    printf("Podaj wspolczynnik b: ");
    scanf("%f", &b);
    printf("Podaj wspolczynnik c: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;
    if(delta < 0){
        printf("Brak miejsc zerowych.\n");
    } else if (delta == 0){
        x0 = -b/(2.*a);
        printf("Funkcja ma jedno miejsce zerowe: x = %g.\n", x0);
    } else {
        x1 = (-b - sqrt(delta))/(2. * a);
        x2 = (-b + sqrt(delta))/(2. * a);
        printf("Funkcja ma dwa miejsca zerowe: x1 = %g; x2 = %g.\n", x1, x2);
    }

    return 0;
}
