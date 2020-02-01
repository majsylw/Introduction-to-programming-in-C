/*Napisz program, który pozwoli u¿ytkownikowi na wprowadzenie macierz M liczb rzeczywistych rozmiaru 2x2,
a nastêpnie wyliczy jej wyznacznik det(M) oraz drug¹ potêgê M2. Zaprezentuj wyniki w stosowny sposób na ekranie.*/

#include <stdio.h>


main(){
    float a, b, c, d, det;

    printf("Wprowadzana macierz M:\n");
    printf("a\tb\nc\td\n\n");

    printf("Podaj wartosc dla a = ");
    scanf("%f", &a);
    printf("Podaj wartosc dla b = ");
    scanf("%f", &b);
    printf("Podaj wartosc dla c = ");
    scanf("%f", &c);
    printf("Podaj wartosc dla d = ");
    scanf("%f", &d);

    printf("Wyznacznik macierzy det(M) = %.2f\n", a*d - c*b);
    printf("Potega macierz M^2 wynosi:\n");
    printf("%.2f\t%.2f\n%.2f\t%.2f\n\n", a*a+c*b, a*b+b*d, a*c+c*d, c*b+d*d);


    return 0;
}
