/*
    Ejercicio 5

    Escriba un programa en C que genere la siguiente serie: 5,10,15,20,25,30… El
    programa preguntará primero cuantos términos se quieren mostrar y después mostrará
    la serie correspondiente

*/

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int limit;

    printf("Ingrese el límite: ");
    scanf("%d", &limit);

    for (int i = 0; i <= limit; i += 5)
    {
        printf("%d\n", i);
        sleep(1);
    }
    
    return 0;
}