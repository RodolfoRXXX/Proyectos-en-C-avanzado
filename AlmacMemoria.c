/*
    Almacenamiento de memoria
    Crear una estructura de almacenamiento de datos para una escuela, pedirle al usuario que ingrese la cantidad de alumnos
    y la información de cada uno con la siguiente información:

    - Nombre
    - Edad
    - Calificación de 3 materias diferentes

    por último imprimir toda la estructura de datos
*/

#include <stdio.h>

//creo una estructura de datos compuestos, conocida también como registro
struct alumno
{
    char nombre[20];
    int edad;
    float ingles, matematica, historia;
}

//ahora defino el tamaño de la variable "alumno", la variable puede almacenar 30 registros de alumnos
alumno[30];

int main()
{
    //almacenamos la cantidad de alumnos que pedimos al usuario
    int cantidad;

    printf("\nIngrese la cantidad de alumnos: ");
    scanf("%i", &cantidad);

    //crear un bucle para darle valor a la estructura de datos
    for (int i = 0; i < cantidad; i++)
    {
        //cada vez que llenamos datos con un for debemos limpiar el buffer/memoria
        fflush(stdin);

        //guardamos el nombre - uso gets() porque es un char
        printf("\nAlumno[%i] - Ingrese el nombre del alumno: ", i + 1);
        gets(alumno[i].nombre);

        //guardamos la edad
        printf("\nAlumno[%i] - Ingrese la edad del alumno: ", i + 1);
        scanf("%i", &alumno[i].edad);

        //guardamos la nota de inglés
        printf("\nAlumno[%i] - Ingrese la nota de ingles: ", i + 1);
        scanf("%f", &alumno[i].ingles);

        //guardamos la nota de matemática
        printf("\nAlumno[%i] - Ingrese la nota de matematica: ", i + 1);
        scanf("%f", &alumno[i].matematica);

        //guardamos la nota de historia
        printf("\nAlumno[%i] - Ingrese la nota de historia: ", i + 1);
        scanf("%f", &alumno[i].historia);
    }

    //imprimir toda la información de la estructura de datos
    for (int i = 0; i < cantidad; i++)
    {
        printf(
            "\nAlumno[%i]: Nombre: %s - Edad: %i - Ingles: %.2f - matematica: %.2f - historia: %.2f",
             i + 1, alumno[i].nombre, alumno[i].edad, alumno[i].ingles, alumno[i].matematica, alumno[i].historia);
    }
    return 0;
}