/*Wstep do programowania
Zaliczenie czastkowe 2
20.11.2017 grupa P00-53f
imie:
nazwisko:
indeks:
*/

/*Zadanie 2 (6 pkt.)
Napisz program, ktory prosi uzytkownika o podanie dlugosci trzech odcinkow,
a nastepnie sprawdzi czy z odcinkow o podanych przez uzytkownika dlugosciach
mozna zbudowac trojkat. Jesli tak, to dodatkowo sprawdz czy dany trojkat jest prostokatny.
Program powinien w odpowiedzi wyswietlac stosowne komunikaty.
*/

#include <stdio.h>

main(){

    float a=0, b=0, c=0;

    printf("Podaj dlugosci bokow trojkata:\n");
    printf("a = ");
    scanf("%f", &a);
    printf("b = ");
    scanf("%f", &b);
    printf("c = ");
    scanf("%f", &c);

    if(a+b>c && a+c>b && b+c>a){
        printf("\nZ podanych odcinkow mozna zbudowac trojkat ");
        if(a > b){
            if(a > c){
                if(c*c + b*b == a*a)
                    printf("i jest to trojkat prostokatny!\n");
                else
                    printf("i nie jest to trojkat prostokatny!\n");
            } else{
                if(a*a + b*b == c*c)
                    printf("i jest to trojkat prostokatny!\n");
                else
                    printf("i nie jest to trojkat prostokatny!\n");
            }
        } else{
            if(b > c){
                if(c*c + a*a == b*b)
                    printf("i jest to trojkat prostokatny!\n");
                else
                    printf("i nie jest to trojkat prostokatny!\n");
            } else{
                if(a*a + b*b == c*c)
                    printf("i jest to trojkat prostokatny!\n");
                else
                    printf("i nie jest to trojkat prostokatny!\n");
            }
        }
    }
    else
        printf("\nZ podanych odcinkow nie mozna zbudowac trojkata!\n");

    return 0;
}
