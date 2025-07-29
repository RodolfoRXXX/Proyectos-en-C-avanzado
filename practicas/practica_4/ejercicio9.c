/*
    Ejercicio 9

    Escriba un programa en C que solicite 10 números enteros positivos al usuario y
    calcule y muestre los siguientes valores:
    • La suma de todos los números leídos.
    • La media de los números.
    • El mayor número introducido.
    • El menor número introducido.

*/

#include <stdio.h>

int main(void)
{
    int tabla[11], i = 0, suma = 0, mayor, menor;

    while (i < 10)
    {
        printf("Ingrese el numero en la posicion %d del arreglo: ", i + 1);
        scanf("%d", &tabla[i]);

        // calcular la suma
        suma += tabla[i];

        if (i == 0)
        {
            mayor = tabla[i];
            menor = tabla[i];
        }
        

        // calcular el mayor
        if (tabla[i] > mayor)
        {
            mayor = tabla[i];
        }

        // calcular el menor
        if (tabla[i] < menor)
        {
            menor = tabla[i];
        }

        i++;
    }

    printf("La suma es: %d\n", suma);
    printf("El mayor es: %d\n", mayor);
    printf("El menor es: %d\n", menor);
    printf("La media es: %.1f\n", (float)suma/10);

    return 0;
}