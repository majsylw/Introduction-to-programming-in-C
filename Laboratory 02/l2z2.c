#include <stdio.h>
main() {
    float celsjusz, fahrenheit;

    //celsjusz = 36.6;
    //fahrenheit = 32 + 1.8*celsjusz;
    //printf("Temperatura %.2f stopni Celsjusza\n", celsjusz);
    //printf("Temperatura %.2f stopni Fahrenheita\n", fahrenheit);

    fahrenheit = 97.88;
    celsjusz = (fahrenheit - 32)/1.8;
    printf("Temperatura %.2f stopni Fahrenheita\n", fahrenheit);
    printf("Temperatura %.2f stopni Celsjusza\n", celsjusz);

    return 0;
}
