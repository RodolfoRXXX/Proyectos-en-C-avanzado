/*
    Ejercicio 15

    Escribir un programa que reciba un número de una carta de una baraja española e
    imprima por pantalla: “As” si es un 1, “Sota”, si es un 10, “Caballo” si es un 11y “Rey”
    si es un 12. Para números de cartas entre 2 y 9 (incluidos) debe imprimir: "No es as ni
    figura". Para otros números debe imprimir: "este no es un número de una carta de la
    baraja española"

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    int card;
    char message[50];

    printf("Ingrese una carta: ");
    scanf("%d", &card);

    switch (card)
    {
    case 1:
        strncpy(message, "As", sizeof(message));
        break;
    case 10:
        strncpy(message, "Sota", sizeof(message));
        break;
    case 11:
        strncpy(message, "Caballo", sizeof(message));
        break;
    case 12:
        strncpy(message, "Rey", sizeof(message));
        break;
    default:
        if((card > 1) && (card < 10))
        {
            strncpy(message, "No es as ni figura", sizeof(message));
        } else
        {
            strncpy(message, "este no es un numero de una carta de la baraja espaniola", sizeof(message));
        }
        break;
    }

    printf("%s", message);

    return 0;
}