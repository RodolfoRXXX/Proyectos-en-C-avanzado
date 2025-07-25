/*
    Ejercicio 10

    Escriba un programa en C que, introducidos por teclado tres valores enteros, los
    muestre en pantalla de mayor a menor.

*/

#include <stdio.h>

#include <stdio.h>

int main(void)
{
    int a, b, c;

    // Leer los tres números
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);
    printf("Ingrese el tercer numero: ");
    scanf("%d", &c);

    int mayor, medio, menor;

    // Comparaciones para ordenar de mayor a menor
    if (a >= b && a >= c) {
        mayor = a;
        if (b >= c) {
            medio = b;
            menor = c;
        } else {
            medio = c;
            menor = b;
        }
    } else if (b >= a && b >= c) {
        mayor = b;
        if (a >= c) {
            medio = a;
            menor = c;
        } else {
            medio = c;
            menor = a;
        }
    } else {
        mayor = c;
        if (a >= b) {
            medio = a;
            menor = b;
        } else {
            medio = b;
            menor = a;
        }
    }

    // Mostrar el resultado
    printf("Orden de mayor a menor: %d, %d, %d\n", mayor, medio, menor);

    return 0;
}
