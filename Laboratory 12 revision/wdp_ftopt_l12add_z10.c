/*Napisz program, kt�ry dla danej tablicy liczb ca�kowitych utworzy ich dowoln� permutacj�,
tzn. ustawi w losowej kolejno�ci wyst�puj�ce w niej liczby. Na koniec program wy�wietli zawarto�� tablicy.*/
#include <stdio.h>
#include <stdlib.h>
//#inculde <time.h>
#define N 5


main(){
    time_t seedd;
    srand(time(&seedd));

    int tab[N] = {1, 5, 6, 2, 4};
    int i, r, t;
    for(i=0; i < N; i++)
    {
        t = tab[i];
        r = rand() % N;
        tab[i] = tab[r];
        tab[r] = t;
        //swap(tab[i],tab[rand()%N]);
    }

    for(i=0; i< N; i++){
        printf("%d --> %d\n", i, tab[i]);
    }

    return 0;
}
