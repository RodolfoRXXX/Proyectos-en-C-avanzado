/*
   Ejercicio para practicar punteros, acceder al valor de la variable a través de ellos y mostrar la dirección de memoria
*/

#include <stdio.h>

int main()
{
    //variables normales
    char cadena[100];
    int entero;
    float flotante;

    //le pedimos los valores al usuario
    printf("\nIngrese el valor para la cadena: ");
    gets(cadena);

    printf("\nIngrese un valor para el entero: ");
    scanf("%i", &entero);

    printf("\nIngrese un valor flotante: ");
    scanf("%f", &flotante);

    //variables de tipo puntero
    char *p_cadena;
    int *p_entero;
    float *p_flotante;

    //guardamos la dirección de memoria de cada variable en su puntero correspondiente
    p_cadena = cadena;   //NO se agrega & porque es una cadena
    p_entero = &entero;
    p_flotante = &flotante;

    //imprimimos el valor de cada variable accediendo a su puntero
    printf("\nEl valor de la cadena es: %s", p_cadena);   //en cadena no se agrega el *
    printf("\nEl valor del entero es: %i", *p_entero);
    printf("\nEl valor del flotante es: %.2f", *p_flotante);

    //imprimir las direcciones en memoria de cada variable
    printf("\nLa direccion en memoria de las variables es: ");
    printf("\nCadena: %p", &cadena);  //con & y la variable, accedemos a su dirección en la memoria
    printf("\nEntero: %p", &entero);
    printf("\nFlotante: %p", &flotante);

    return 0;
}