/*
    Ejercicio 3
    Escriba un programa que calcule el interés que se obtiene por un determinado dinero
    depositado en un banco. Para ello el programa preguntará por el capital inicial y por el
    tipo de interés.
*/

#include <stdio.h>

int main(void)
{
    float monto = 0, interes = 0;

    printf("Ingrese el monto inicial: \n");
    scanf("%f", &monto);

    printf("Ingrese el interés: \n");
    scanf("%f", &interes);

    printf("El monto final con interes es $%.2f\n", monto + monto*(interes/100));

    return 0;
}