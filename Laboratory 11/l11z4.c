#include <stdio.h>
#define n 5

main(){
    int i;
    float tab[n];
    int ects[n];

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

    for(i=0; i<n; ++i){
        printf("Podaj %d. punkty ECTS: ", i);
        int odp;
        do{
            scanf("%d", &ects[i]);
            if(ects[i] > 0){
                odp = 0;
            } else {
                printf("Punktacja niepoprawna!\nPodaj %d. punkty ECTS: ", i);
                odp = 1;
            }

        } while(odp);

    }
    printf("indeks \t liczba \t ECTS\n");
    float suma = 0, srednia = 0;
    for(i=0; i<n; ++i){
        printf("%d \t %3.1f \t %d\n", i, tab[i], ects[i]);
        srednia += tab[i] * ects[i];
        suma += ects[i];
    }

    printf("Srednia wazona to = %.3f.", srednia/suma);
}
