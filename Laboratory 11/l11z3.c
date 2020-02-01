#include <stdio.h>
#define n 7

main(){
    int i;
    float tab[7];

    for(i = 0; i < n; ++i){
        printf("Podaj %d. ocene: ", i);
        int odp;
        do{
            scanf("%f", &tab[i]);
            if(tab[i] == 2 || tab[i] == 3 || tab[i] == 3.5 ||
               tab[i] == 4 || tab[i] == 4.5 || tab[i] == 5.5 || tab[i] == 5){
                odp = 0;
            } else {
                printf("Ocena niepoprawna!\nPodaj %d. ocene: ", i);
                odp = 1;
            }

        } while(odp);
    }

    printf("indeks   liczba\n");
    float minimum = tab[0], maximum = tab[0];
    int poz_min=0, poz_max=0;
    for(i=0; i<n; ++i){
        printf("%d \t %3.1f\n", i, tab[i]);
        if(tab[i] < minimum){
            minimum = tab[i];
            poz_min = i;
        }
        if(tab[i] > maximum){
            maximum = tab[i];
            poz_max = i;
        }
    }

    printf("Najwieksza ocena to %g na pozycj %d.\n", maximum, poz_max);
    printf("Najmniejsza ocena to %g na pozycj %d.\n", minimum, poz_min);

    return 0;
}
