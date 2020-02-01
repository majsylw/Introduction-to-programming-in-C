#include <stdio.h>
#define n 7

main(){
    int i;
    float tab[7];

    float suma = 0;
    for(i = 0; i < n; ++i){
        printf("Podaj %d. ocene: ", i);
        scanf("%f", &tab[i]); // pierwsze poproszenie o ocene i dopiero jak ona bedzie niepoprawna w warunku while bedziemy drukowac na ekran komunikat i prosic o ponowne podanie oceny (w tej samej iteracji)
        while(tab[i] != 2 && tab[i] != 3 && tab[i] != 3.5 && tab[i] != 4 && tab[i] != 4.5 && tab[i] != 5 && tab[i] != 5.5){//petla wykonuje sie tak dlugo jak uzytkownik nie podaje liczb z wypisanego zakresu
            printf("Ocena niepoprawna!\nPodaj %d. ocene: ", i);
            scanf("%f", &tab[i]);
        }
        suma += tab[i];
    }

    printf("indeks   liczba\n");

    for(i=0; i<n; ++i){
        printf("%d \t %3.1f\n", i, tab[i]);
    }

    printf("\nSuma = %.1f, \nsrednia z podanych pozytywnych ocen wynosi %.1f.", suma, suma/n);

    return 0;
}
