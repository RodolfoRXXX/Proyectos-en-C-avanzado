/*
    Ejercicio 10
    Del siguiente código:
    ¿Detecta algún error?
    Ejecute el programa anterior asignando a cadena el valor "Hola", ¿qué sucede?
    Repita la ejecución asignando a cadena el valor "Buenos días", ¿qué observa?

    Si no se limita el tamaño de la cadena que se toma desde el teclado, puede haber desbordamiento de buffer
    si esta cadena tiene mas de 7 caracteres(7 caracteres + '\0')
*/

#include <stdio.h>
int main(void)
{
    int a, b;
    char cadena[8];
    int c;
    a=7; b=14; c=128;
    printf ("Asigne un valor a la cadena de caracteres ");
    scanf("%7[^\n]", cadena);
    printf ("La cadena es %s\n", cadena);
    printf ("El valor asignado a las variables es:\na=%d\nb=%d\nc=%d\n", a, b, c);
    return 0;
}