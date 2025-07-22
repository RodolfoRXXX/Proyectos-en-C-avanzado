/*
    Ejercicio 5
    Escriba un programa que calcule el perímetro de una circunferencia.
    NOTA perimetro = 2 * PI * r). Se recomienda definir PI como una constante
    usando la directiva define.
*/

#include <stdio.h>
#define PI 3.14

int main(void)
{

    float r = 0;

    printf("Ingrese el radio de la circunferencia: \n");
    scanf("%f", &r);

    printf("La circunferencia de radio %.2f es de %.2f\n", r, 2 * PI * r);

    return 0;
}