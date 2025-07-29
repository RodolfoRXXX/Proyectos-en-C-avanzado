/*
    Ejercicio 11

    Escribir un programa en C para adivinar un número entre 1 y 100 que previamente se
    ha definido como una constante. El programa irá pidiendo números al usuario y,
    siempre que dicho número no coincida con el número secreto, le indicará si el número
    introducido es mayor o menor que el número secreto que tiene que adivinar. Al final, el
    programa indicará la cantidad de intentos que se han necesitado para adivinar el
    número. Si el número de intentos es menor que 5 se mostrará “Enhorabuena!”. Si es un
    valor entre 5 y 10 se mostrará el mensaje “No está mal”. Si el número de intentos es
    mayor que 10 se mostrará el mensaje “Debe practicar más”.

*/

#include <stdio.h>
#define magic 15

int main(void)
{

    int option, i = 0;

    while (option != magic)
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
    } else if((i >= 5) && (i < 10))
    {
        printf("No esta mal\n");
    } else
    {
        printf("Tiraste cualquiera en todo el juego!\n");
    }
    printf("Lo lograste en %d intentos.", i);
    return 0;
}