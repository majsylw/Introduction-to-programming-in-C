#include <stdio.h>
#define n 15

main(){
    int seedd;
    srand(time(&seedd));
    int i,j,t;
    int tab[n];

    for(i=0; i<n; ++i){
        tab[i] = rand()%100;
    }
    printf("Wczytane dane:\n");
    for(i=0; i<n; ++i){
        printf("%d ", tab[i]);
    }
    printf("\n");

    for(i=0; i<n-1; ++i){
        for(j=0; j<n-i-1; ++j){
            if(tab[j] > tab[j+1]){
                t = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = t;
            }
        }
    }

    printf("Posortowane dane:\n");
    for(i=0; i<n; ++i){
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
