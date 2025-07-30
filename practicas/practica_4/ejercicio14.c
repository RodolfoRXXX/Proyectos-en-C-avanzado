/*
    Ejercicio 14

    Escriba un programa en C que permita calcular el importe de una factura, a partir de
    una serie de artículos vendidos. Para ello, el programa irá preguntando para cada
    artículo la cantidad de unidades vendidas y el precio unitario.
    El programa comprobará que tanto el precio como la cantidad son números positivos, y
    en caso contrario volverá a solicitar los valores.
    La lectura de artículos acabará cuando se introduzca un 0 en la primera pregunta.
    Entonces se imprimirá por pantalla el importe total de la factura.

*/

#include <stdio.h>

int main(void)
{
    int cantidad, i = 1;
    float precio, total = 0;

    do
    {
        printf("Ingrese la cantidad del item #%d: ", i);
        scanf("%d", &cantidad);
        if (cantidad == 0) break;
        

        printf("Ingrese el precio del item #%d: ", i);
        scanf("%f", &precio);

        if (cantidad > 0 && precio > 0)
        {
            total += cantidad * precio;
            i++;
        }
    } while (cantidad != 0);
    
    printf("La cantidad de items solicitados es de %d y el total es de $%.1f", i, total);

    return 0;
}