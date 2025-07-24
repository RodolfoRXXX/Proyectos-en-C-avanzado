/*
    Ejercicio 8

    Escriba un programa que solicite un número, y si éste es de dos cifras, muestre por
    pantalla los siguientes valores:
    - Suma de sus dos dígitos.
    - Cuántos de sus dígitos son pares.
    Nota: para saber si es de dos cifras, compárelo con 9 y 99. Para calcular los dígitos use
    la división entera y el resto

*/

#include <stdio.h>

int main(void)
{
    int x;

    printf("Ingrese un numero desde 0 hasta 99: ");
    scanf("%d", &x);

    if(x < 10)
    {
        printf("Solo tiene un digito y el mismo es %s", (x % 2 == 0)?"par":"impar");
    } else {
        printf("La suma de sus dos digitos es: %d\n", (x/10) + (x%10));
        printf("La cantidad de digitos que son pares son: %d\n", ((((x/10)%2) == 0)?1:0) + ((((x%10)%2) == 0)?1:0));
    }

    return 0;
}