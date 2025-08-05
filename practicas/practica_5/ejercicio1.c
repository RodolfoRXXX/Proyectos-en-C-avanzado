/*
    Ejercicio 1

    Escribir un programa en C que escriba los números comprendidos entre 1 y 1000. El
    programa escribirá en la pantalla los números en grupos de 20, solicitando al usuario si
    quiere o no continuar visualizando el siguiente grupo de números. Generalizar el
    programa para que escriba los números comprendidos entre dos valores que introduzca
    el usuario, y sea éste también quien decida el tamaño del grupo a visualizar por
    pantalla

*/

#include <stdio.h>
#include <unistd.h> 
#include <time.h>

int main(void)
{
    int i, state, vuelta = 1, inicio, final, paso;

    printf("Ingresa el valor del paso del listado: ");
    scanf("%d", &paso);

    printf("Ingresa el valor inicial: ");
    scanf("%d", &inicio);

    printf("Ingresa el valor final: ");
    scanf("%d", &final);

    do
    {
        for (i = inicio; i < vuelta * paso; i++)
        {
            printf("%d ", i);
            sleep(1);
        }
        printf("Desea continuar? 1 = Si, 0 = No\n");
        scanf("%d", &state);
        if (state == 1)
        {
            inicio = (vuelta * paso);
            vuelta++;
        }
        
    } while ((state == 1) && (i < final));
    
    printf("Se finaliza la serie con: %d numeros mostrados en series de %d\n", vuelta * paso, paso);

    return 0;
}