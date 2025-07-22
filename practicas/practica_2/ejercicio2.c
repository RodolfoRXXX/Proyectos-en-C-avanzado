/*
    Ejercicio 2
    Escriba un programa que muestre en la pantalla un mensaje de presentación, pregunte
    al usuario su nombre y le salude con un mensaje personalizado que use el nombre que
    se acaba de leer.
    Nota: La lectura de cadenas de caracteres mediante la función scanf se detiene en
    cuanto se encuentra un espacio en blanco. Por tanto, si al solicitar el nombre se
    introduce algo como "Miguel de Cervantes", solo se almacenará en la variable cadena
    el texto antes del espacio ("Miguel").
    Para leer el nombre completo se puede recurrir al especificador de formato [^\n] que
    indica que deben leerse todos los caracteres hasta que se introduzca un salto de línea.
    Por ejemplo scanf ("%[\n]",nombre);
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // reservamos el espacio para 100 caracteres + '\n'
    char *name = (char *) malloc(101 * sizeof(char));

    if (name == NULL)
    {
        printf("Error: no se pudo asignar memoria.");
        return 1;
    }
    

    printf("Ingrese su nombre para almacenarlo en un puntero con memoria dinámica: \n");

    // la entrada de texto se limita a 100 caracteres
    scanf("%100[^\n]", name);

    printf("Hola %s guardado dinámicamente\n", name);

    free(name); // liberamos la memoria reservada

    return 0;
}