/*
    Ejercicio 6
    Escriba un programa en C que asigne a la variable x (de tipo entero) el resultado de
    4/0. ¿Qué ocurre al compilar el programa? ¿Y al ejecutarlo?

*/

#include <stdio.h>

int main(void)
{
    int x = 4/0;

    printf("El resultado de x es: %d", x);

    return 0;
}