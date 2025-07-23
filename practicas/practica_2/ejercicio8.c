/*
    Ejercicio 8
    Escriba un programa que lea tres enteros (a, b, c) y muestre por pantalla un 1 si los
    valores introducidos siguen un orden creciente (a>b>c) y 0 en caso contrario
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Ingrese el valor de a: \n");
    scanf("%d", &a);

    printf("Ingrese el valor de b: \n");
    scanf("%d", &b);

    printf("Ingrese el valor de c: \n");
    scanf("%d", &c);

    printf("El resultado es: %d", (a<b)&&(b<c));

    return 0;
}