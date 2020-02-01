/*W matematyce i jej zastosowaniach bardzo wa¿n¹ funkcj¹ jest ca³ka z f(x)=e-x2.
Niestety, nie da siê takiej ca³ki zapisaæ przy pomocy funkcji elementarnych,
trzeba jej wartoœci obliczaæ numerycznie. Zadanie polega na napisaniu programu,
który bêdzie obliczaæ ca³kê oznaczon¹ z f(x)=e-x2 na zbiorze [0,t], gdzie t bêdzie zadan¹ dodatni¹ liczb¹.
Obliczenia nale¿y przeprowadziæ metod¹ trapezów na równo roz³o¿onych N wêz³ach,
to znaczy dzielimy zbiór [0,t] na N-1 równych pododcinków o koñcach w punktach:
0 = x1, x2,..., xN-1, xN = t, i dla ka¿dego pododcinka obliczamy pole trapezu
ograniczonego punktami (xi,0), (xi,f(xi)), (xi+1, f(xi+1)), (xi+1,0).
Ca³ka po ca³ym przedziale jest sum¹ oszacowañ dla ka¿dego podprzedzia³u.
Oceñ jakoœæ tego oszacowania dla ró¿nych t i N porównuj¹c wartoœci z wynikiem dzia³ania funkcji erf z biblioteki math.
*/

#include <stdio.h>
#include <math.h>

/*double MetodaTrapezow(int N, double t)
{
    double suma=0.0,x=0.0;
    double h=t/(N-1);

    while(x+h <= t)
    {
       suma += (exp(-1*pow(x,2))+exp(-1*pow((x+h),2)))/2*h;
       x += h;
    }
    return suma;
}*/

int main()
{

    printf("%2c \t %4c \t %14s \t %s \n", 'N', 't', "Metoda", "erf");
    int i;
    float x;
    for (i = 30; i<=70; i++)
    {
        for(x = 0.1; x <= 3.1; x += 0.5)
        {
            float suma = 0.0, y = 0.0;
            float h = x/(i-1);

            while(y+h <= x)
            {
               suma += (exp(-1*pow(y,2))+exp(-1*pow((y+h),2)))/2*h;
               y += h;
            }
            printf("%d \t %.4f \t %.4f \t %.4f\n", i, x, suma, erf(x)*sqrt(M_PI)/2);
            //printf("%d \t %.4f \t %.4f \t %.4f\n", i, x, MetodaTrapezow(i,x), erf(x)*sqrt(M_PI)/2);
        }
    }

    return 0;
}
