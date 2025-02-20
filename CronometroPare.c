/*
    Cronómetro o alarma dandole al usuario la opción de cuando frenar
*/

#include <stdio.h>
#include <windows.h>    //tiene una función SLEEP que coloca un intervalo de 1 segundo cada vez que imprima un printf

int main()
{
    //variable que guarda la opción de hora, minutos o segundos a modificar y su cantidad
    int tipo, cantidad;

    //pedimos al usuario que elija el tipo a modificar y la cantidad
    printf("\nElija una opcion: ");
    printf("\n1.Hora");
    printf("\n2.Minuto");
    printf("\n3.Segundo");
    printf("\nIngrese el valor a modificar: ");
    scanf(" %i", &tipo);

    printf("\nIngrese la cantidad: ");
    scanf(" %i", &cantidad);

    //creo las variables de tiempo
    int hora, minuto, segundo;

    //creo el bucle de tiempo
    for (hora = 0; hora < 24; hora++)
    {
        for (minuto = 0; minuto < 60; minuto++)
        {
            for (segundo = 0; segundo < 60; segundo++)
            {
                //agregamos un intervalo de 1000mseg entre muestras
                Sleep(1000);
                printf("\r%.2i : %.2i : %.2i", hora, minuto, segundo);

                //condicional que sale del reloj de acuerdo a la elección del usuario
                if ((tipo == 1) && (cantidad <= hora))
                {
                    printf("\nCronómetro finalizado");
                    return 0;
                }
                else if ((tipo == 2) && (cantidad <= minuto))
                {
                    printf("\nCronómetro finalizado");
                    return 0;
                }
                else if((tipo == 3) && (cantidad <= segundo))
                {
                    printf("\nCronometro finalizado");
                    return 0;
                }
            }   
        }
    }
    return 0;
}