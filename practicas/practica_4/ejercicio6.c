/*
    Ejercicio 6

    Escriba un programa que pida al usuario un número, y muestre el mensaje "has
    introducido el numero ---" (mostrando el número que ha sido introducido). Esta acción
    debe repetirse hasta que el usuario introduzca el número 0. En ese momento se
    mostrará el mensaje "Finalizando: Se ha introducido el número 0". Además, se debe
    mostrar cuántos números se han introducido y su suma

*/

#include <stdio.h>

int main(void)
{
    int number, suma = 0, cantidad = 0;

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &number);
        suma += number;
        cantidad++;
    } while (number != 0);
    printf("Se ingresaron %d numeros\n", cantidad);
    printf("La suma de todos ellos es %d", suma);

    return 0;
}