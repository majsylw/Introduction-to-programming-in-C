/*Wstep do programowania
Zaliczenie czastkowe 1
05.11.2018 grupa P00-19h
imie:
nazwisko:
indeks:
*/

/*Zadanie 3 (6 pkt.)
Ponizszy program powinien wypisywac na ekranie napis: Hello world!
Znajduja sie w nim jednak bledy.
Popraw bledy, aby program dzialal prawidlowo.
Opisz wprowadzone zmiany w komentarzach*/

#include <stdio.h> //1 - byl znak % zamiast # w dyrektywie preprocesora
                   //2 - bylo studio.h zamiast stdio.h
main(){                         //3 - byla funkcja mein zamiasy main
                                //4 - byly nawiasy [] zamiast ()
    printf("Hello world!");      //5 - lancuch znakowy w '' zamiast w ""
                                //6 - brakujacy srednik
}
