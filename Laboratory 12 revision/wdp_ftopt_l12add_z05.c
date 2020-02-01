/*W matematyce i jej zastosowaniach bardzo wa�n� funkcj� jest ca�ka z f(x)=e-x2.
Niestety, nie da si� takiej ca�ki zapisa� przy pomocy funkcji elementarnych,
trzeba jej warto�ci oblicza� numerycznie. Zadanie polega na napisaniu programu,
kt�ry b�dzie oblicza� ca�k� oznaczon� z f(x)=e-x2 na zbiorze [0,t], gdzie t b�dzie zadan� dodatni� liczb�.
Obliczenia nale�y przeprowadzi� metod� trapez�w na r�wno roz�o�onych N w�z�ach,
to znaczy dzielimy zbi�r [0,t] na N-1 r�wnych pododcink�w o ko�cach w punktach:
0 = x1, x2,..., xN-1, xN = t, i dla ka�dego pododcinka obliczamy pole trapezu
ograniczonego punktami (xi,0), (xi,f(xi)), (xi+1, f(xi+1)), (xi+1,0).
Ca�ka po ca�ym przedziale jest sum� oszacowa� dla ka�dego podprzedzia�u.
Oce� jako�� tego oszacowania dla r�nych t i N por�wnuj�c warto�ci z wynikiem dzia�ania funkcji erf z biblioteki math.
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
