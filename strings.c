/*
    Código que explica el funcionamiento de los Strings en C.
    Este código es un ejemplo básico que muestra cómo se pueden manejar cadenas de caracteres en C.

    En C, las cadenas de caracteres son arreglos de caracteres terminados en un carácter nulo ('\0').

    Las cadenas se pueden declarar de la siguiente manera:
    char name[] = "John Doe"; => esto es modificable y se puede cambiar el contenido.

    O también se pueden declarar como punteros a cadenas literales:
    char *name = "John Doe"; => esto no es modificable, ya que las cadenas literales están en memoria de solo lectura.

    Para imprimir una cadena, se puede usar printf con el especificador %s.

    Para modificar este tipo de datos se pueden usar funciones que viene de la librería <string.h>
        strnlen =>	Obtener la longitud de una cadena
        strncpy =>	Copiar una cadena
        strncat =>	Concatenar cadenas
        strncmp =>	Comparar cadenas
*/

#include <string.h>
#include <stdio.h>

int main(void)
{
    // Definición de cadenas
    char name[] = "John Doe"; // Declaración de una cadena modificable
    char *greeting = "Hello, "; // Declaración de una cadena no modificable

    // Mostrar la cadena original
    printf("%s%s\n", greeting, name); // Imprimir la cadena concatenada

    // Alteración de la cadena
    name[1] = 'a'; // Modificar el segundo carácter de la cadena
    printf("Modified name: %s\n", name); // Imprimir la cadena modificada

    // Uso de funciones de la librería <string.h>
    // Mostrar largo de la cadena
    printf("Largo de la cadena: %d\n", strlen(name)); // Obtener y mostrar la longitud de la cadena

    // Comparar la cadena con un texto específico
    if(strcmp(name, "John Doe") == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    strncat(name, name, strlen(name)); // Concatenar " Smith" a la cadena, el número 6 es el número de caracteres a concatenar
    printf("Cadena después de concatenar: %s\n", name); // Imprimir la cadena después de concatenar

    return 0;
}