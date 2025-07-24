/*
    Ejercicio 6

    Dada la función f(x), realizar un programa C que calcule dicha función para un valor
    dado de x y lo muestre por pantalla.
        x + 3 para x ≤ 0
    f(x)
        x2 + 2x para x > 0

*/

#include <stdio.h>

int main(void)
{
    int x;
    float result;

    printf("Ingrese un valor de la variable para calcular: ");
    scanf("%d", &x);

    if (x <= 0)
    {
        result = x + 3;
    } else {
        result = x*x + 2*x;
    }
        printf("El resultado de %d es: %.2f", x, result);

    return 0;
}