/*
    Ejercicio 1

    Escriba un programa en C que pida dos números enteros al usuario, y determine si el
    primero es divisible entre el segundo.
    
*/

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Escriba un numero a: ");
    scanf("%d", &a);

    printf("Escriba un numero b: ");
    scanf("%d", &b);

    if ((a % b) == 0)
    {
        printf("El numero %d es divisible a %d", a, b);
    } else
    {
        printf("El numero %d NO es divisible a %d", a, b);
    }

    return 0;
}