/*
    Ejercicio 5

    Escriba un programa en C que muestre por pantalla el valor de una entrada de cine en
    función de los años de la persona. Así, el precio es de 7 Euros, pero si el usuario tiene
    menos de 5 años se aplica un 60% de descuento, y si es mayor de 60 años, se aplicará
    un descuento del 55 %. El precio de la entrada se debe declarar como una constante

*/

#include <stdio.h>

#define TICKET 7

int main(void)
{
    int age;

    printf("Ingrese su edad: ");
    scanf("%d", &age);

    if(age < 5)
    {
        printf("El costo de la entrada aplicando un 60%% de descuento es de $%.2f", (float)TICKET*0.40);
    } else if (age > 60)
    {
        printf("El costo de la entrada aplicando un 55%% de descuento es de $%.2f", (float)TICKET*0.45);
    } else {
        printf("El costo de la entrada sin descuento es de $%d", TICKET);
    }

    return 0;
}