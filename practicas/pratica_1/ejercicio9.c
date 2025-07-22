/*
    Ejercicio 9
    Escriba un programa que pregunte al usuario su edad, y luego compruebe si es mayor
    de 21 años. Si es mayor deberá escribir un 1 y si es menor un 0. El ejercicio se debe
    resolver usando operadores relacionales.
    Recuerde que el resultado de evaluar una expresión verdadera en C (por ejemplo 7>5)
    es 1, y el de evaluar una falsa (7<5) es 0
*/

#include <stdio.h>

int main(void)
{
    int edad;

    printf("Escriba su edad: \n");
    scanf("%d", &edad);

    printf("El resultado es: %d", edad > 21);
    

    return 0;
}