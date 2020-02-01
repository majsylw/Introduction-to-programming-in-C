/*Napisz program, który dla zadanej przez u¿ytkownika liczby zespolonej
wyznaczy jej modu³ i argument podany w stopniach.
*/

#include <stdio.h>
#include <math.h>
//#incude <complex.h>

main(){
    float real, imag, modul, arg;
    printf("Podaj czesc rzeczywista liczby: ");
    scanf("%f", &real);
    printf("Podaj czesc urojona liczby: ");
    scanf("%f", &imag);

    modul = sqrt(pow(real, 2)+ pow(imag, 2));
    printf("\nModul liczby wynosi %.2f.\n", modul);
    if( real > 0)
        arg = atan(imag/real);
    else {
        if(real < 0)
            arg = atan(imag/real) + M_PI;
        else if( imag > 0)
                arg = 0.5 * M_PI;
            else if (imag < 0){
                arg = - 0.5 * M_PI;
            }
            else{
                printf("Dla podanej liczby argument jest nieokreslony.\n");
            }
    }
    printf("Argument podanej liczby wynosi %.2f.", arg * 180/M_PI);
    return 0;
}
