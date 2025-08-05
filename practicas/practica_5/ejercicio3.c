/*
    Ejercicio 3

     Escriba un programa en C que solicite un número y calcule su factorial. El factorial de
    un número n (representado por n!) es el producto de todos los números naturales desde
    1 hasta n.
    n! = 1 * 2 * 3 * … * (n-1) * n

*/

#include <stdio.h>

int main(void)
{
    int x, res, f;

    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &x);

    if (x > 0)
    {
        res = x;
        f = x;
        while ((f - 1) > 0)
        {
            res *= --f;
        }
        printf("El factorial de %d es: %d", x, res);
    } else {
        printf("El numero elegido debe ser mayor a 0");
    }
    return 0;
}