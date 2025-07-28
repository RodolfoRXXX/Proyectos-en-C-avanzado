/*
    Ejercicio 4

    Escriba un programa que muestre en pantalla todos los múltiplos de 3 entre los
    números 1 y 100

*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", 3 * i);
        sleep(1);
    }
    
    return 0;
}