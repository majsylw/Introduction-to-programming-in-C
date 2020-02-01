/*Napisz program, kt�ry przy pomocy zagnie�d�onych p�tli
wypisze na ekran tabliczk� mno�enia z zachowaniem uk�adu kolumn.
*/

#include <stdio.h>

int main(void)
{
    int i, a = 1, b = 1, n = 1, col = 10, row = 10;
    printf("Tabliczka monozenia\n\n");
    printf("   ");
    for(i = 1; i <= col; i++){
        printf("%4d", i);
    }
    printf("\n");

    do
    {
        printf("%3d ", a);
        do
        {
            printf("%3d ",a*b);
            ++b;
        } while(b <= col);
        printf("\n");
        ++a;
        b = 1;
    }while(a <= row);
    return 0;
}
