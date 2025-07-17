/*
    Código que muestra como pasar a funciones argumentos por referencia y no por valor
    Esto permite que no haya necesidad de redefinir las variables en el scoop de la función
    y que al modificar la variable pasada entre los argumentos de la función, esta modifique
    el valor original de la variable, ya que se pasa la dirección de la memoria y no una copia
*/

#include <stdio.h>

// defino una nueva estructura de dato
typedef struct {
    int age;
    float high;
} Persona;

// prototipos
void sumaEdad(Persona * p);
void sumaAltura(Persona * p);

int main(void)
{
    Persona p;
    p.age = 23;
    p.high = 1.78;

    // pasamos a la función la ubicación de la variable en la memoria
    sumaEdad(&p);
    sumaAltura(&p);

    printf("La edad es %d\n", p.age);
    printf("La altura es %.2f\n", p.high);

    return 0;
}

// definición de funciones
//  esta función recibe la dirección de la variable en un puntero definido como argumento
void sumaEdad(Persona * p)
{
    // modifica así la variable original accediendo a su dirección en memoria
    (*p).age++;
}

// accede a la dirección de la variable y la modifica
void sumaAltura(Persona * p)
{
    p->high = 1.85;
}