# Pierwsza kartkówka

## Zadanie 1
Ponizszy program powinien wypisywac na ekranie napis: Hello world!
Znajduja sie w nim jednak bledy.
Popraw bledy, aby program dzialal prawidlowo.
Opisz wprowadzone zmiany w komentarzach*/

<pre>
%include <studio.h>

mein[]{                         
                                
    printf('Hello world!')      
                                
}
</pre>



## Zadanie 2
Ponizszy program ma wypisywac tabele z przedrostkami SI (od kilo do mili).
Przykladowy wyglad generowanej tabeli:

<pre>
nazwa  symbol mnoznik wykladnik
kilo   k         1000         3
hekto  h          100         2
deka   da          10         1
                    1         0
decy   d          0.1        -1
centy  c         0.01        -2
mili   m        0.001        -3
</pre>

Wszystkie dane do wyswietlenia sa wprowadzone do programu (w postaci tablicy struktur).
Do wypisania tablicy wykorzystano funkcje printf() [linie 82 oraz 85].

Uzupelnij lancuchy kontrolne w dwoch wywolaniach funkcji printf,
tak aby program dzialal prawidlowo.
Zwroc uwage na komentarz w linii 86, w ktorym zaznaczono jakiego
typu sa poszczegolne argumenty w linii 85.

Nie modyfikuj innych fragmentow kodu!

<pre>
#include <stdio.h>
#include <string.h>

struct prefix{
    char name[6];
    char symbol[3];
    float factor;
    int exponent;
};

main(){
    int i;

    struct prefix data[7];
    strcpy(data[0].name,"kilo");
    strcpy(data[0].symbol,"k");
    data[0].factor = 1e3;
    data[0].exponent = 3;

    strcpy(data[1].name,"hekto");
    strcpy(data[1].symbol,"h");
    data[1].factor = 1e2;
    data[1].exponent = 2;

    strcpy(data[2].name,"deka");
    strcpy(data[2].symbol,"da");
    data[2].factor = 1e1;
    data[2].exponent = 1;

    strcpy(data[3].name,"");
    strcpy(data[3].symbol,"");
    data[3].factor = 1;
    data[3].exponent = 0;

    strcpy(data[4].name,"decy");
    strcpy(data[4].symbol,"d");
    data[4].factor = 1e-1;
    data[4].exponent = -1;

    strcpy(data[5].name,"centy");
    strcpy(data[5].symbol,"c");
    data[5].factor = 1e-2;
    data[5].exponent = -2;

    strcpy(data[6].name,"mili");
    strcpy(data[6].symbol,"m");
    data[6].factor = 1e-3;
    data[6].exponent = -3;

    printf("nazwa  symbol mnoznik wykladnik\n");

    for(i=0;i<7;i++)
        printf("%6s %6s %7g %9d\n",data[i].name,data[i].symbol,data[i].factor,data[i].exponent);
      //                char[],        char[],         float,        int     );

    return 0;
}
</pre>

## Zadanie 3
Rownanie Clapeyrona opisuje zwiazek pomiedzy temperatura, cisnieniem i objetoscia gazu doskonalego.
Sformulowane zostalo w 1834 roku przez Benoit Clapeyrona.
Prawo to wyraza sie wzorem:
pV = nRT,
gdzie:<br>
p – cisnienie [Pa],<br>
V – objetosc [m^3],<br>
n – liczba moli gazu,<br>
T – temperatura bezwzględna [K],<br>
R – stala gazowa 8,314 J/(mol·K).<br>

Znajac trzy z czterech parametrow (p, V, n, T) mozna wyznaczyc czwarty.
Napisz program, ktory pobiera od uzytkownika trzy wielkosci,
a nastepnie oblicza czwarta (wybierz dowolna). 
