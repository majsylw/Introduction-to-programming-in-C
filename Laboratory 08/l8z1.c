#include <stdio.h>
#define n 7

main(){
    int i;
    float tab[n];

    for(i=0; i<n; ++i){
        printf("Podaj %d liczbe: ", i);
        scanf("%f", &tab[i]);
    }
    printf("indeks   liczba\n");
    float suma = 0, srednia = 0;
    for(i=0; i<n; ++i){
        printf("%d \t %3f\n", i, tab[i]);
        suma += tab[i];
    }
    printf("Suma = %f,\n", suma);
    printf("Srednia = %f.", suma/n);
}
