/*
    Ejercicio 12

    Escribir un programa en C para adivinar un número entre 1 y 100 que previamente se
    ha definido como una constante. El programa irá pidiendo números al usuario y,
    siempre que dicho número no coincida con el número secreto, le indicará si el número
    introducido es mayor o menor que el número secreto que tiene que adivinar. Al final, el
    programa indicará la cantidad de intentos que se han necesitado para adivinar el
    número. Si el número de intentos es menor que 5 se mostrará “Enhorabuena!”. Si es un
    valor entre 5 y 10 se mostrará el mensaje “No está mal”. Si el número de intentos es
    mayor que 10 se mostrará el mensaje “Debe practicar más”.

    Modificar el ejercicio anterior para que el número máximo de intentos sea 5. Al
    terminar el programa indicará si el usuario ha ganado (si ha adivinado el número en
    menos de cinco intentos) o no

*/

#include <stdio.h>
#define magic 15

int main(void)
{

    int option, i = 0;

    while ((option != magic) && (i < 5))
    {
        i++;
        printf("Ingrese un numero: ");
        scanf("%d", &option);

        if(option > magic)
        {
            printf("El numero elegido es mayor\n");
        } else
        {
            printf("El numero elegido es menor\n");
        }
    }
    
    if (i < 5)
    {
        printf("Enhorabuena!\n");
        printf("Lo lograste en %d intentos.", i);
    } else
    {
        printf("Llegaste a los 5 intentos y no adivinaste un choto!\n");
    }
    return 0;
}