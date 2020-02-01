/*Napisz program, który dla danej tablicy liczb ca³kowitych utworzy ich dowoln¹ permutacjê,
tzn. ustawi w losowej kolejnoœci wystêpuj¹ce w niej liczby. Na koniec program wyœwietli zawartoœæ tablicy.*/
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
