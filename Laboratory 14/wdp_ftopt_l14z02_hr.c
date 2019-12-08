/*Wstêp do programowania
grupa P00-19h
21.01.2019 Kolokwium
imie:
nazwisko:
indeks:

*/


/* Zadanie 2 (15 pkt.)

   Napisz program, który oblicza wartoœci funkcji sin(x)/x
   dla przedzia³u podanego przez u¿ytkownika.
   Liczba punktów powinna byæ podawana przez u¿ytkownika z klawiatury.
   Jeœli u¿ytkownik poda liczbê niedodatnia poproœ o podanie
   liczby kolejny raz (a¿ do momentu uzyskania prawid³owej liczby).

   Wynik dzia³ania sin(x)/x dla x = 0 zast¹p wartoœci¹ granicy sin(x)/x przy x->0.

   Wyniki wypisz w postaci tabeli o dwóch kolumnach.

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
