/*
    Ejercicio 1

    Escriba un programa en C que muestre en pantalla los números enteros del 1 al 100

*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", i);
        sleep(1);
    }
    
    return 0;
}