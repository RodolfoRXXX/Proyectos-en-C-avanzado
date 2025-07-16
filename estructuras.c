/*
    Código que muestra el funcionamiento de las estructuras y los tipos de datos definidos por el usuario en C.
    
    Las estructuras son un tipo de datos que almacenan diferentes tipos de datos bajo un mismo nombre.
    Los tipos de datos definidos por el usuario permiten crear nuevos tipos de datos basados en los tipos existentes.

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    // defino el tipo de estructura Persona
    typedef struct {
        char nombre_completo[20]; // es modificable
        int edad;
        float altura;
    } Persona;

    typedef struct {
        char *nombre; // no es modificable
        int edad;
    } Animal;

    // creo la variable Persona de nombre juan
    Persona juan;

    // creo la variable Animal de nombre perro
    Animal perro;

    // asigno valores a la variable juan y a sus datos
    strcpy(juan.nombre_completo, "Dario");
    juan.edad = 23;
    juan.altura = 1.78;

    // asigno valores a la variable perro y a sus datos
    perro.nombre = "Trito";
    perro.edad = 5;

    // muestro en pantalla lo que contiene la variable juan
    printf("El nombre es %s, tiene %d años y mide %.2f mts\n", juan.nombre_completo, juan.edad, juan.altura);
printf("El nombre del perro es %s y tiene %d años.\n", perro.nombre, perro.edad);

    return 0;
}