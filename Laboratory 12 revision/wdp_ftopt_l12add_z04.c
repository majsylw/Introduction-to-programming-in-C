/*Napisz program, który podejmie bezpieczn¹ próbê wczytania cyfry z konsoli.
W przypadku, kiedy u¿ytkownik wpisze coœ, co nie jest cyfra, program poinformuje go
o niepowodzeniu i ponowi próbê. Kiedy wreszcie u¿ytkownik poda cyfrê, program zwróci jej wartoœæ.
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
