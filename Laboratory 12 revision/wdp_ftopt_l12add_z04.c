/*Napisz program, kt�ry podejmie bezpieczn� pr�b� wczytania cyfry z konsoli.
W przypadku, kiedy u�ytkownik wpisze co�, co nie jest cyfra, program poinformuje go
o niepowodzeniu i ponowi pr�b�. Kiedy wreszcie u�ytkownik poda cyfr�, program zwr�ci jej warto��.
*/

#include <stdio.h>
#include <ctype.h>

main(){
    char cyfra;
    int odp = 0;
    do{
        printf("Wpisz cyfre: ");
        cyfra = getchar();
        getchar();

        if(isdigit(cyfra)){
            printf("\nWpisales %c\n", cyfra);
            odp = 0;
        }
        else{
            printf("Wpisany znak nie jest cyfra! Sprobuj raz jeszcze.\n");
            odp = 1;
        }
    }while(odp);

}
