/*
    Ejercicio 11
    Escriba un programa en C que convierta euros a dolares (1 euro = 1.286 dolares) y a
    libras esterlinas (1 euro = 0,865 libras). Imprima los resultados por pantalla
*/

#include <stdio.h>

int main(void)
{
    float monto;

    printf("Ingrese el monto en euros a calcular: \n");
    scanf("%f", &monto);

    printf("La conversión a dolares de %.3f(euros) es de uSs%.3f \n", monto, monto * 1.286);
    printf("La conversión a libras esterlinas de %.3f(libras esterlinas) es de %.3f \n", monto, monto * 0.865);

    return 0;
}