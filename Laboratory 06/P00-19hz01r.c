/*Wstep do programowania
Zaliczenie czastkowe 1
05.11.2018 grupa P00-19h
imie:
nazwisko:
indeks:
*/

/*Zadanie 1 (8 pkt.)
Napisz program, który dla podanej przez u¿ytkownika
liczby zespolonej - czesci rzeczywistej i urojonej (4pkt) - wyznaczy jej modu³ (2pkt).
Wyœwietl wynik na ekranie w stosownym komunikacie (2pkt).
*/

#include <stdio.h>
#include <math.h>

main(){
    float real, imag, modul; // 1pkt
    printf("Podaj czesc rzeczywista liczby: "); // 0.5pkt
    scanf("%f", &real); // 1pkt
    printf("Podaj czesc urojona liczby: "); // 0.5pkt
    scanf("%f", &imag); // 1pkt

    modul = sqrt(pow(real, 2)+ pow(imag, 2)); // 2pkt
    printf("\nModul liczby wynosi %.2f.\n", modul); // 2pkt
    return 0;
}
