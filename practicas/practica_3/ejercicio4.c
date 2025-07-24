/*
    Ejercicio 4
    
    Escriba un programa en C que pida dos números enteros al usuario, y determine cuál es
    mayor, el primero o el segundo. Modifíquelo para considerar también la posibilidad de
    que sean iguales.

*/

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Ingrese el primer numero: ");
    scanf("%d", &a);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("El numero %d es mayor que %d", a, b);
    } else if (a < b)
    {
        printf("El numero %d es mayor que %d", b, a);
    } else {
        printf("Ambos numeros son iguales");
    }
    return 0;
}