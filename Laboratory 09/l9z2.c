#include <stdio.h>
#include <math.h>
#define N 20

int main(){
    char znak = '5';
    char tab[N];
    int i, j, liczba = 0;
    printf("Podaj liczbe dwojkowa: ");
    i = 0;
    do{
        znak = getchar();
        ++i;
        if(znak != '1' && znak != '0'){
            break;
        }
        tab[i-1] = znak;
    }while(znak == '1' || znak == '0');
    --i;
    tab[i] = '\0';
    for(j = 0; j < i; ++j){
        //printf("i %d \t %c \n", j, tab[i-1-j]);
        if(tab[i-1-j] != '0')
            liczba += pow(2, j);
    }

    printf("Twoja liczba to: %d\n", liczba);
    return 0;
}
