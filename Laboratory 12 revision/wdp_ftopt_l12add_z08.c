/*Napisz program, kt�ry dla zadanej tablicy liczb znajdzie w�r�d nich warto�� minimaln�,
a nast�pnie zast�pi wszystkie warto�ci w tej tablicy r�nic� danej warto�ci i owej minimalnej.
Wy�wietl na ekranie zmodyfikowane (nowe) warto�ci tablicy.*/

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
