/*
    Proyecto tabla de multiplicar
*/

#include <stdio.h>

int main()
{
    //variable que guarda el número de tabla que quiere imprimir el usuario
    int tabla;

    //variable que va a iterar en nuestro bucle
    int i;

    //variable que guarda hasta que número de la tabla se muestra
    int hasta;

    //pedimos al usuario que asigne valor a estas variables
    printf("\nDigite el numero de tabla que desea imprimir: ");

    scanf("%i", &tabla);

    printf("\nDigite el número que indique hasta que valor se mostrara de la tabla: ");

    scanf("%i", &hasta);

    //creamos el bucle
    for(i = 1; i <= hasta; i++)
    {
        printf("\n %i * %i = %i", tabla, i, tabla*i);
    }

    return 0;
}