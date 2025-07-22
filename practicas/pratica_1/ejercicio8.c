/*
    Ejercicio 8
    Escriba un programa que pida un tiempo en segundos y lo muestre convertido a
    minutos y segundos
*/

#include <stdio.h>

int main(void)
{
    int seg;

    printf("Ingrese la cantidad de segundos a calcular: \n");
    scanf("%d", &seg);

    printf("La hora es: %dmm:%dss", seg / 60, (seg % 60));

    return 0;
}