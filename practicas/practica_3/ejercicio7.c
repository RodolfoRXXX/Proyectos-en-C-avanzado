/*
    Ejercicio 7

    Escriba un programa que solicite al usuario tres números enteros de una cifra y muestre
    el mensaje "acceso permitido" si los números introducidos son “1”, “2” y “3”

*/

#include <stdio.h>

int main(void)
{
    int key;

    printf("Ingrese el numero de 3 cifras: ");
    scanf("%d", &key);

    if (key == 123)
    {
        printf("Acceso permitido");
    } else {
        printf("Acceso denegado");
    }

    return 0;
}