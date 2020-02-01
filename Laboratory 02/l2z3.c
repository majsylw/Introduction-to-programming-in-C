#include <stdio.h>
main() {
    char key;
    char nazwa_pliku[] = "l1z3.c";
    char imie[] = "Jan";
    char nazwisko[] = "Przykladowy";
    int nr_indeksu = 228797;

    printf("/*%s*/\n", nazwa_pliku);
    printf("/*nazwisko:\t\t%s\n", nazwisko);
    printf("  imie:\t\t\t%s\n", imie);
    printf("  numer indeksu:\t%d*/", nr_indeksu);

    return 0;
}
