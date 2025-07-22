/*
    Ejercicio 10
    Escriba un programa en el que se declaren dos variables, a y b, se pida un valor para
    cada una de ellas, y se intercambien dichos valores
*/

#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Escriba el valor de a: \n");
    scanf("%d", &a);

    printf("Escriba el valor de b: \n");
    scanf("%d", &b);

    printf("Valores iniciales: a: %d, b: %d \n", a, b);

    // cambio de valores
    c = a;
    a = b;
    b = c;

    printf("Valores cambiados: a: %d, b: %d \n", a, b);

    return 0;
}