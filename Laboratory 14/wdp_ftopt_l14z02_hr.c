/*Wst�p do programowania
grupa P00-19h
21.01.2019 Kolokwium
imie:
nazwisko:
indeks:

*/


/* Zadanie 2 (15 pkt.)

   Napisz program, kt�ry oblicza warto�ci funkcji sin(x)/x
   dla przedzia�u podanego przez u�ytkownika.
   Liczba punkt�w powinna by� podawana przez u�ytkownika z klawiatury.
   Je�li u�ytkownik poda liczb� niedodatnia popro� o podanie
   liczby kolejny raz (a� do momentu uzyskania prawid�owej liczby).

   Wynik dzia�ania sin(x)/x dla x = 0 zast�p warto�ci� granicy sin(x)/x przy x->0.

   Wyniki wypisz w postaci tabeli o dw�ch kolumnach.

   x        sin(x)/x

*/


int main()
{
    int n,i;// 1pt zmiennne calkowite
    do
    {
        printf("Podaj liczbe punktow ");//1pt
        scanf("%d",&n);
    }
    while (n<=0);//1pt za do while


    float xp,xk,x,y;//1pt zmienne rzeczywiste

    printf("Podaj pocztek przedzialu ");
    scanf("%f",&xp);//1pt

    printf("Podaj koniec przedzialu ");
    scanf("%f",&xk);//1pt

    for (i=0; i<n; i++) //2pt
    {
        x=xp+i*(xk-xp)/(n-1);//3pt
        if (x==0)
            y=1;//3pt poprawny if
        else
            y=sin(x)/x;
        printf("%f %f\n",x,y);//1pt
    }

    return 0;
}
