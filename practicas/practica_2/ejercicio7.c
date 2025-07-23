/*
    Ejercicio 7
    Escriba un programa en C que lea dos enteros en las variables x e y, y calcule y
    muestre por pantalla los valores de x/y (como número decimal ) y de x%y
    Ejecute el programa introduciendo valores diferentes. ¿Qué sucede cuando a la
    variable y se le asigna el valor 0?
*/

#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Ingrese el valor de x: \n");
    scanf("%d", &x);

    printf("Ingrese el valor de y: \n");
    scanf("%d", &y);

    printf("El resultado de x/y = %.2f \n", (float)(x/y));
    printf("El resto de la division entre x e y = %d", x % y);

    return 0;
}