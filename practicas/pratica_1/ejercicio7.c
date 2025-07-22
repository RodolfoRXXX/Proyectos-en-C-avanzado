/*
    Ejercicio 7
    Escriba un programa que calcule el resto de la división de dos números enteros. Para
    ello utilice el operador módulo (%)
*/

#include <stdio.h>

int main(void)
{

    int a, b;

    printf("Ingrese el valor del numerador: \n");
    scanf("%d", &a);

    printf("Ingrese el valor del denominador: \n");
    scanf("%d", &b);

    printf("El resto de la división es %d\n", a % b);

    return 0;
}