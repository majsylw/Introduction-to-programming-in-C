#include <stdio.h>


int main(){

    int h = 5;
    int i, N;

    for(N = 1; N <= h; ++N){
        for(i = 1; i <= N; ++i){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
