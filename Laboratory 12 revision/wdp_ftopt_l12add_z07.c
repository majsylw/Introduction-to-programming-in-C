/*Napisz program, kt�ry prosi u�ytkownika o podanie dw�ch liczb ca�kowitych dodatnich,
a nast�pnie wyznacza ich najmniejsz� wsp�ln� wielokrotno��.
*/

#include <stdio.h>

main()
{
    int a, b, NWW;
    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    int c, liczba1 = a, liczba2 = b;
    while(b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    printf("NWD(%d,%d) = %d\n", liczba1, liczba2, a);
    printf("NWW(%d,%d) = %d\n", liczba1, liczba2, liczba1*liczba2/a);

    return 0;
}
