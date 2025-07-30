/*
    Ejercicio 14

    Escriba un programa en C que solicite al usuario números positivos de tres o más cifras
    y compruebe si son pares. Si el número introducido es positivo pero de una o dos
    cifras, se solicitará un nuevo número. El programa finaliza cuando se introduce “0” o
    un número negativo

*/

#include <stdio.h>

int main(void)
{
    int number = 0;

    do
    {
        printf("Ingrese un numero de 3 o mas cifras: ");
        scanf("%d", &number);

        if(number > 99)
        {
            if ((number % 2) == 0)
            {
                printf("El numero es par\n");
            } else
            {
                printf("No es par\n");
            }
            return 0;
        }
    } while ((number > 0));
    return 0;
}