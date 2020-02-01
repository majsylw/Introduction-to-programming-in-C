#include <stdio.h>

main(){
    int liczba1;
    int liczba2;

    printf("Podaj liczbe calkowita (a): ");
    scanf(" %d", &liczba1);
    printf("Podaj liczbe calkowita (b): ");
    scanf(" %d", &liczba2);
    printf("a*b = \t%d", liczba1*liczba2);
    printf("\na/b = \t%d", liczba1/liczba2);
    printf("\na%b = \t%d", liczba1%liczba2);
    printf("\na+b = \t%d", liczba1+liczba2);
    printf("\na-b = \t%d", liczba1-liczba2);

    return 0;
}
