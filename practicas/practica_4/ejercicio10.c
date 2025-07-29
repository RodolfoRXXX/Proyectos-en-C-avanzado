/*
    Ejercicio 10

    Escriba un programa en C que solicite números al usuario hasta que se hayan
    introducido 10 números o la suma de todos los números leídos sea mayor que 100. A
    continuación mostrar un mensaje indicando qué condición se ha cumplido (es decir, si
    se han introducido 10 números o si su suma es mayor que 100)

*/

#include <stdio.h>

int main(void)
{
    int tabla[11], i = 0, suma = 0;

    while ((i < 10) && suma < 100)
    {
        printf("Ingrese el numero en la posicion %d del arreglo: ", i + 1);
        scanf("%d", &tabla[i]);

        // calcular la suma
        suma += tabla[i];

        i++;
    }

    if (i < 10)
    {
        printf("La suma de los numeros ingresados supero 100");
    } else
    {
        printf("Se han introducido los 10 numeros de forma satisfactoria");
    }
    return 0;
}