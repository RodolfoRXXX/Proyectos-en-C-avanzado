/*
    Ejercicio 11
    Escriba un programa en C que lea un carácter y utilizando la instrucción switch
    determine si es o no una vocal. Realice el mismo ejercicio utilizando la sentencia if
    ¿Qué opción es mejor?

*/

#include <stdio.h>

int main(void)
{
    char x;

    printf("Ingrese una letra: ");
    scanf("%c", &x);

    switch (x)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Es una vocal");
        break;
    default:
        printf("No es una vocal");
        break;
    }

    return 0;
}