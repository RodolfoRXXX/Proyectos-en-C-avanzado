/*
    Buscar el PID de un proceso al presionar una tecla
*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>

#define LETRA_A 97  // Código ASCII de 'a'

// Prototipo de la función
void detectar_proceso();

// Variables globales
char nombre_ventana[40] = "Microsoft Outlook";  // Nombre correcto del título de la ventana
DWORD pid;  // ID del proceso

int main()
{
    char letra;

    printf("Presiona 'a' para detectar el proceso de Outlook.\n");

    while (1)
    {
        letra = getch();

        if (letra == LETRA_A)
        {
            detectar_proceso();
            Sleep(1000);  // Espera para evitar spam de detección
        }
    }
    return 0;
}

// Función para detectar el proceso
void detectar_proceso()
{
    // Buscar la ventana por su título
    HWND buscar_ventana = FindWindow(NULL, nombre_ventana);

    if (buscar_ventana)
    {
        // Obtener el PID del proceso asociado a la ventana
        GetWindowThreadProcessId(buscar_ventana, &pid);
        printf("\nEl programa '%s' está ejecutándose con el PID %lu", nombre_ventana, pid);
    }
    else
    {
        printf("\nNo se encontró el proceso con ventana titulada: %s", nombre_ventana);
    }

    fflush(stdout);  // Asegurar que el texto se imprima en la consola
}
