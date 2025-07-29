/*
    Ejercicio 8

    Escriba un programa que eleve un número a una potencia, utilizando dos métodos: a)
    utilizando la función potencia y b) usando un bucle, sin recurrir al operador potencia.
    Nota: En C, para poder usar la función potencia (pow(x, y)=xy) es necesario incluir la
    biblioteca math (#include <math.h>)

*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int val, exp, res;

    printf("Ingrese el numero a calcular: ");
    scanf("%d", &val);
    
    printf("Ingrese el exponente: ");
    scanf("%d", &exp);

    res = pow(val, exp);

    printf("Calculando con la funcion potencia de math.h: \n");
    printf("El resultado de %d elevado a %d es: %d \n", val, exp, res);

    res = 1;

    if (exp > 0)
    {
        for (int i = 0; i < exp; i++)
        {
            res *= val;
        }
    } else if (exp < 0)
    {
        printf("El exponente es negativo y no hice la logica para ese caso.\n");
        return 0;
    }
    

    // val = 2, exp = 3 -> 1*2 > 2*2 > 4*2 = 8
    
    printf("Calculando con un bucle: \n");
    printf("El resultado de %d elevado a %d es: %d \n", val, exp, res);

    return 0;
}