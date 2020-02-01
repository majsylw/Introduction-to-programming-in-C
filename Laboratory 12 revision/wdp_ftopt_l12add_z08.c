/*Napisz program, który dla zadanej tablicy liczb znajdzie wœród nich wartoœæ minimaln¹,
a nastêpnie zast¹pi wszystkie wartoœci w tej tablicy ró¿nic¹ danej wartoœci i owej minimalnej.
Wyœwietl na ekranie zmodyfikowane (nowe) wartoœci tablicy.*/

#include <stdio.h>
#define N 5

main(){
    float tablica[N] = {6, 3, 7.8, 4.2, 3.4};

    float minimum = tablica[0];
    int i;
    for(i = 0; i<N; ++i){
        if(minimum > tablica[i]){
            minimum = tablica[i];
        }
    }
    for(i=0; i<N; ++i){
        tablica[i] -= minimum;
    }

    for(i=0; i<N; ++i){
        printf("%d --> %.2f\n", i, tablica[i]);
    }
    return 0;
}
