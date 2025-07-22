/*
    Ejercicio 4
    Escriba un programa que calcule el área de un triángulo rectángulo, pidiendo al
    usuario la altura y la base. La salida por pantalla debe ser "Un triangulo rectángulo de
    altura ____ y base ____, tiene un área de ____" (sustituyendo los espacios en blanco
    por los valores)
    NOTA area = (base * altura)/2
*/

#include <stdio.h>

int main(void)
{

    float altura = 0, base = 0;

    printf("Ingrese la altura del triangulo: \n");
    scanf("%f", &altura);

    printf("Ingrese la base del triangulo: \n");
    scanf("%f", &base);

    printf("Un triangulo rectángulo de altura %.1f mts y base %.1f mts, tiene un área de %.1f mts2\n", altura, base, (altura*base)/2);

    return 0;
}