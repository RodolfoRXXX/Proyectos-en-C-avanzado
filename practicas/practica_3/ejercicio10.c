/*
    Ejercicio 10

    Escriba un programa en C que, introducidos por teclado tres valores enteros, los
    muestre en pantalla de mayor a menor.

*/

#include <stdio.h>

int main(void)
{
    int orden[3];
    int aux;

    for (int i = 0; i < (int)(sizeof(minimo) / sizeof(minimo[0])); i++)
    {
        printf("Ingrese el elemento nro %d: ", i);
        scanf("%d", &aux);

        if (i == 0) orden[0] = aux;
        if (minimo[i] < menor)
        {
            menor = minimo[i];
        }
        
    }
    printf("Del conjunto de valores ingresados el menor es el: %d", menor);

    return 0;
}