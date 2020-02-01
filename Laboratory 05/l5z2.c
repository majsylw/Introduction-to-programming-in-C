#include <stdio.h>

main(){
    float liczba1;
    float liczba2;

    printf("Podaj liczbe rzeczywista (a): ");
    scanf(" %f", &liczba1);
    printf("Podaj liczbe rzeczywista (b): ");
    scanf(" %f", &liczba2);
    printf("a*b = \t%f", liczba1*liczba2);
    printf("\na/b = \t%f", liczba1/liczba2);
    printf("\na+b = \t%f", liczba1+liczba2);
    printf("\na-b = \t%f", liczba1-liczba2);

    return 0;
}
