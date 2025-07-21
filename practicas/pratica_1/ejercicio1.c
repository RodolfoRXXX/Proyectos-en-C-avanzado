/*
    1. Escriba un programa que muestre en la pantalla un mensaje de saludo, por ejemplo
        "Hola",y luego muestre el mensaje "Por favor introduzca el año en que nació". El
        programa debe leer ese valor y almacenarlo en una variable de tipo entero llamada
        fecha. Por último haga que el programa escriba la frase " Si usted nació en <valor de la
        fecha leída> este año cumple <edad calculada> años.
        Es recomendable que vaya escribiendo el programa por pasos (mostrar saludo, pedir
        fecha, leer 
*/

#include <stdio.h>

int main(void)
{
    int anio;
    printf("Hola, por favor introduzca el anio en que nacio(4 digitos)");
    scanf("%d", &anio);
    printf("Si naciste en %d este anio cumplis %d", anio, 2025 - anio);
    return 0;
}