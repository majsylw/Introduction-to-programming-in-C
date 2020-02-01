#include <stdio.h>
#include <stdlib.h>

main(){
    int i, j, t, N;
    int *tab;

    printf("Podaj N: ");
    scanf("%d", &N);

    tab = malloc(N * sizeof(*tab));

    for(i=0; i<N; ++i){
        printf("Podaj %d liczbe: ", i);
        scanf("%d", &tab[i]);
    }
    printf("Wczytane dane:\n");
    for(i=0; i<N; ++i){
        printf("%d \t %d\n", i, tab[i]);
    }

    for(i=0; i<N-1; ++i){
        for(j=0; j<N-i-1; ++j){
            if(tab[j] > tab[j+1]){
                t = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = t;
            }
        }
    }

    printf("Posortowane dane:\n");
    for(i=0; i<N; ++i){
        printf("%d \t %d\n", i, tab[i]);
    }
    free(tab);
    return 0;
}
