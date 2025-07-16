/*
    Código que muestra como pasar a funciones argumentos por referencia y no por valor
    Esto permite que no haya necesidad de redefinir las variables en el scoop de la función
    y que al modificar la variable pasada entre los argumentos de la función, esta modifique
    el valor original de la variable, ya que se pasa la dirección de la memoria y no una copia
*/

#include <stdio.h>

typedef struct {
    int age;
} Persona;

void sumaEdad(Persona * p);

int main(void)
{
    Persona p;
    p.age = 23;

    sumaEdad(&p);

    printf("La edad es %d", p.age);

    return 0;
}

void sumaEdad(Persona * p)
{
    (*p).age++;
}