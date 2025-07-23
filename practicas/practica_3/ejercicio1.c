/*
    Ejercicio 1
    Escriba un programa que lea un número entero y escriba un mensaje si el número es
    mayor que 100
*/

#include <stdio.h>

int main(void)
{
    int a;

    printf("Escriba un numero: ");
    scanf("%d", &a);

    if (a > 100)
    {
        printf("El numero %d es mayor a 100", a);
    } else
    {
        printf("El numero %d NO es mayor a 100", a);
    }

    return 0;
}