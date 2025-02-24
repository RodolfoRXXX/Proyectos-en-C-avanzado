/*
    Programa que captura una o varias teclas en cualquier momento de la ejecución mediante código ASCII

    Imprimir "Hola mundo" al presionar la letra "a"
*/

#include <stdio.h>
#include <conio.h>  // Para getch()
#include <ctype.h>  // Para usar tolower()

#define LETRA_A 97  // 'a' en minúscula en ASCII

int main()
{
    char letra;  // Variable para almacenar la tecla presionada

    printf("Presiona 'a' para ver 'Hola mundo'.\nPresiona 'ESC' para salir.\n");

    while (1)  // Bucle infinito
    {
        letra = getch();  // Espera una tecla sin necesidad de presionar Enter

        letra = tolower(letra); //cambiamos a minúscula cualquier letra

        if (letra == LETRA_A)
        {
            printf("\nHola mundo");
        }
        else if (letra == 27)  // Código ASCII de ESC (para salir)
        {
            printf("\nSaliendo del programa...\n");
            break;  // Sale del bucle
        }
    }

    return 0;
}
