/*
    Ejercicio 3

    Escriba un programa en C que muestre en pantalla los números enteros del 100 al 1

*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 100; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);
    }
    
    return 0;
}