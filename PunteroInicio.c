/*
   Ejercicio para practicar punteros, acceder al valor de la variable a través de ellos y mostrar la dirección de memoria

    Un puntero es una variable que almacena la dirección de otra variable y permite acceder a la dirección o valor de esta
        int a = 10; definimos la variable a
        int *p_a = &a; creo el puntero p_a y le asigno la dirección de la variable a
        "&" es el operador que me entrega la dirección de la variable
        "*" es el operador de seguimiento del puntero, con este operador accedo a la dirección de la variable y por ende al valor de la variable,
        este operador es el de desreferenciación del puntero
        *p_a = 20; modifica el valor de la variable a accediendo directamente a la dirección de memoria

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

    // creamos los punteros
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