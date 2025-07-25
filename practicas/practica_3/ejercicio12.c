/*
    Ejercicio 12

    Escriba un programa que pida al usuario un número entre el uno y el siete y muestre un
    mensaje con el nombre del día correspondiente

*/

#include <stdio.h>

int main(void)
{
    int x;

    printf("Ingrese un numero del 1 al 7 y devolvere un día de la semana: ");
    scanf("%d", &x);
    
    switch (x)
    {
    case 1:
        printf("Lunes");
        break;
    case 2:
        printf("Martes");
        break;
    case 3:
        printf("Miercoles");
        break;
    case 4:
        printf("Jueves");
        break;
    case 5:
        printf("Viernes");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;
    default:
    printf("No es un numero del 1 al 7");
        break;
    }

    return 0;
}