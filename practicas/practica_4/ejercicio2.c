/*
    Ejercicio 2

    Escriba un programa en C que muestre en pantalla los números enteros del 1 al 100 de
    2 en 2

*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", 2 * i);
        sleep(1);
    }
    
    return 0;
}