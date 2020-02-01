#include <stdio.h>
#include <math.h>

main(){
    float kart, kol;
    printf("Podaj liczbe punktow z kartkowek: ");
    scanf("%f", &kart);
    printf("Podaj liczbe punktow z kolokwium: ");
    scanf("%f", &kol);

    if(kol >= 20 && (kart + kol) >= 50){
        if (kol + kart < 60){
            printf("Uzyskana ocena to %.1f.", 3.);
        } else if (kol + kart < 70){
            printf("Uzyskana ocena to %.1f.", 3.5);
        } else if (kol + kart < 80){
            printf("Uzyskana ocena to %.1f.", 4.);
        } else if (kol + kart < 90){
            printf("Uzyskana ocena to %.1f.", 4.5);
        } else if (kol + kart < 100){
            printf("Uzyskana ocena to %.1f.", 5.);
        } else {
            printf("Uzyskana ocena to %.1f.", 5.5);
        }
    } else {
        printf("Uzyskana ocena to %.1f.", 2.);
    }

    return 0;
}
