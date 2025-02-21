/*
    Juego de adivinanza - generar un número aleatorio del 1 al 50 y en caso de que el usuario lo descubra, gana
*/

#include <stdio.h>
#include <time.h> //la librería "time" tiene una función que genera un número aleatorio

int main()
{
    srand(time(NULL));  //función que genera el número aleatorio
        //creamos el número aleatorio y lo guardamos en la variable random
    int random = 1 + rand() %((50 + 1) - 1);

        //creamos la variable que almacena lo que ingresa el usuario
    int adivinanza;

    //mostramos el número aleatorio
    printf("El numero aleatorio es: %i", random);

    //este bucle pregunta un número al usuario hasta que sea el número que generó la función al azar
    do{
        printf("\nIngresa un numero: ");
        scanf("%i", &adivinanza);

        //condicional que dá pistas sobre el número y confirma si se encontró el correcto
        if (random > adivinanza)
        {
            printf("El numero al azar es mayor");
        }
        else if (random < adivinanza)
        {
            printf("El numero al azar es menor");
        }
        else
        {
            printf("El numero elegido es correcto!!!");
        } 
    }
    while(random != adivinanza);

    return 0;
}