/*
    Ejercicio 9

    Escriba un programa en C que permita introducir 5 números enteros por teclado y
    muestre el menor de ellos.

*/

#include <stdio.h>

int main(void)
{
    int minimo[5];
    int menor;

    for (int i = 0; i < (int)(sizeof(minimo) / sizeof(minimo[0])); i++)
    {
        printf("Ingrese el elemento nro %d: ", i);
        scanf("%d", &minimo[i]);
        if (i == 0) menor = minimo[0];
        if (minimo[i] < menor)
        {
            menor = minimo[i];
        }
        
    }
    printf("Del conjunto de valores ingresados el menor es el: %d", menor);

    return 0;
}