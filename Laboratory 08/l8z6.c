#include <stdio.h>


int main(){

    int h = 5;
    int i, N, k = 1;

    for(N = 0; N < h-1; ++N){
        for(i = h-1; i > N; --i){
            printf(" ");
        }
        for(i = 1; i <= N + k; ++i){
            printf("*");
        }
        ++k;
        printf("\n");
    }
    k = 0;
    for(N = 0; N <= h; ++N){
        for(i = 1; i <= N; ++i){
            printf(" ");
        }
        for(i = 9; i > N + k; --i){
            printf("*");
        }
        ++k;
        printf("\n");
    }
    return 0;
}
