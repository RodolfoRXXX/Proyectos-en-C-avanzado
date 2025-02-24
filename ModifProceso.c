/*
    Buscar una ventana que el usuario ingrese y cambiarle el caption - nombre de la ventana
*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>



int main()
{
    //creamos la variable para almacenar el proceso
    HWND proceso;

    //variable con los nombres
    char nombreActual[100];
    char nombreNuevo[100];

    //le pedimos al usuario que ingrese los nombres
    printf("\nIngrese el nombre de la ventana que desea cambiar: ");
    gets(nombreActual);

    printf("\nIngrese el nombre nuevo de la ventana: ");
    gets(nombreNuevo);

    //encontrar el proceso o ventana
    proceso = FindWindow(NULL, (nombreActual));

    //preguntamos si la venta fue encontrada
    if (proceso)
    {
        SetWindowText(proceso, nombreNuevo);    //esto le asigna el nuevo nombre a la ventana
        printf("\nEl nombre de la ventana ha sido cambiado exitosamente, ahora es %s ", nombreNuevo);
    }
    else
    {
        printf("\nLa ventana de nombre %s no se encontro", nombreActual);
    }
    return 0;
}