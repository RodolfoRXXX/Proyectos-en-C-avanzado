/*
    Ejercicio 9
    Escriba un programa que declare una variable de tipo entero x y una variable y de tipo
    real, asigne a dichas variables los valores 6 y 2.0, respectivamente, y calcule y muestre
    por pantalla el resultado de las siguientes operaciones:
    a) x*y
    b) x/y
    c) x%y
*/

#include <stdio.h>

int main(void)
{
    int x = 6;
    float y = 2.0;

    printf("x * y: %.2f \n", x * y);

    printf("x / y: %.2f \n", x / y);

    printf("x resto y: %d \n", (x % (int)y));

    return 0;
}