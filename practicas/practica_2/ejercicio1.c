/*
    Ejercicio 1
    Escriba un programa que pida una temperatura en grados Farenheit y la pase a Celsius.
    NOTA: celsius = (farenheit -32)*5/9

*/

#include <stdio.h>

int main(void)
{
    float temp;

    printf("Ingrese la temperatura en grados Farenheit: \n");
    scanf("%f", &temp);

    printf("La temperatura en grados Celsius es: %.2fC", (temp - 32)*5/9);

    return 0;
}