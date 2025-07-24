/*
    Ejercicio 3
    
    Escriba un programa en C que pida un número al usuario e indique si es par o impar.
    En caso de que sea par indicar si es o no múltiplo de 3.

*/

// cabeceras
#include <stdio.h>

// esta cabecera incluye
// bool como int, true como 1 y false como 0
#include <stdbool.h>

// prototipos
bool esPar(int a);
bool esMultiploTres(int a);


int main(void)
{
    int a;

    printf("Ingrese un numero: ");
    scanf("%d", &a);

    if(esPar(a))
    {
        if(esMultiploTres(a))
        {
            printf("Es par y multiplo de 3");
        } else {
            printf("Es par pero no multiplo de 3");
        }
    } else {
        printf("No es par");
    }
    return 0;
}

// declaración de funciones

bool esPar(int a)
{
    return (a % 2 == 0);
}

bool esMultiploTres(int a)
{
    return (a % 3 == 0);
}