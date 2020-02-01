/*Wstep do programowania
Zaliczenie czastkowe 3
11.12.2017 grupa P00-53a
imie:
nazwisko:
indeks:
*/

/*Zadanie 1 (6 pkt.)
Napisz program, ktory poprosi uzytkownika o podanie daty (kolejno dnia, miesiaca oraz roku w postaci liczbowej),
a nastepnie wypisze na ekran wprowadzona date zamieniajac numer miesiaca na jego faktyczna nazwe.

Uwaga 1. Postaraj sie upewnic, ze wprowadzone liczby beda siê miescily w stosownych zakresach.
Uwaga 2. Postaraj sie wypisac rowniez okreœlony dzieñ tygodnia odpowiadajacy wprowadzonej dacie.
*/

#include <stdio.h>
#include <string.h>


int main()
{
    int dzien = 0, miesiac = 0, rok = 0;
    char msc[] = "pazdziernika";

    printf("Wprowadz dzien: ");
    scanf("%d", &dzien);
    printf("Wprowadz nr miesiaca: ");
    scanf("%d", &miesiac);
    printf("Wprowadz rok: ");
    scanf("%d", &rok);

    switch(miesiac){
        case(1):
            if(dzien > 0 && dzien < 32)
                strcpy(msc, "stycznia");
            else
                strcpy(msc, "");
            break;
        case(2):
            if(dzien > 0 && dzien < 29)
                strcpy(msc, "lutego");
            else
                if(((rok%4 == 0 && rok%100 != 0) || rok%400 == 0) && dzien == 29)
                    strcpy(msc, "lutego");
                else
                    strcpy(msc, "");
            break;
        case(3):
            if(dzien > 0 && dzien < 32)
                strcpy(msc, "marca");
            else
                strcpy(msc, "");
            break;
        case(4):
            if(dzien > 0 && dzien < 31)
                strcpy(msc, "kwietnia");
            else
                strcpy(msc, "");
            break;
        case(5):
            if(dzien > 0 && dzien < 32)
                strcpy(msc, "maja");
            else
                strcpy(msc, "");
            break;
        case(6):
            if(dzien > 0 && dzien < 31)
                strcpy(msc, "czerwca");
            else
                strcpy(msc, "");
            break;
        case(7):
            if(dzien > 0 && dzien < 32)
                strcpy(msc, "lipca");
            else
                strcpy(msc, "");
            break;
        case(8):
            if(dzien > 0 && dzien < 32)
                strcpy(msc, "sierpnia");
            else
                strcpy(msc, "");
            break;
        case(9):
            if(dzien > 0 && dzien < 31)
                strcpy(msc, "wrzesnia");
            else
                strcpy(msc, "");
            break;
        case(10):
            if(dzien > 0 && dzien < 32)
                strcpy(msc, "pazdziernika");
            else
                strcpy(msc, "");
            break;
        case(11):
            if(dzien > 0 && dzien < 31)
                strcpy(msc, "listopada");
            else
                strcpy(msc, "");
            break;
        case(12):
            if(dzien > 0 && dzien < 32)
                strcpy(msc, "grudnia");
            else
                strcpy(msc, "");
            break;
        default:
            strcpy(msc, "");
            break;
    }
// Algorytm Zellera rok = 1:9999
    int dzien_tygodnia = 0;
    char dz[] = "poniedzialek";

    if(miesiac < 3)
        dzien_tygodnia = ((23*miesiac)/9 + dzien + 4 + rok + (rok- 1)/4 - (rok - 1)/100 +(rok - 1)/400)%7;
    else
        dzien_tygodnia = ((23*miesiac)/9 + dzien + 4 + rok + rok/4 - rok/100 +rok/400 - 2)%7;

    switch(dzien_tygodnia){
        case(0):
            strcpy(dz, "niedziela");
            break;
        case(1):
            strcpy(dz, "poniedzialek");
            break;
        case(2):
            strcpy(dz, "wtorek");
            break;
        case(3):
            strcpy(dz, "sroda");
            break;
        case(4):
            strcpy(dz, "czwartek");
            break;
        case(5):
            strcpy(dz, "piatek");
            break;
        case(6):
            strcpy(dz, "sobota");
            break;
        default:
            strcpy(dz, "");
            break;
    }
//******************************************************************************************************************

    if(strlen(msc) > 1 && (rok > 0 && rok < 10000)){
        printf("\nWprowadzona data to: %d %s %dr.\n", dzien, msc, rok);
        printf("\n\nWersja rozszerzona:\nWprowadzona data to: %s, %d %s %dr.\n\n", dz, dzien, msc, rok);
    }
    else
        printf("Podano niepoprawne dane!\n");

    return 0;
}
