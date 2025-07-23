/*
    Ejercicio 3
    Escriba un programa en el que se declare una variable de tipo entero y se le asigne un
    valor. El programa debe mostrar el valor de la variable y la dirección de memoria en la
    que se almacena
*/

#include <stdio.h>

int main(void)
{
    int a;
    int *p_a = &a;

    printf("Ingrese un valor entero para ver la direccion donde se almacena: \n");
    scanf("%d", &a);

    printf("La direccion de memoria donde se almacena la variable es: %p", p_a);

    return 0;
}