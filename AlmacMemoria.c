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
#include <string.h>  //esta librería tiene la funcion strcpy() que permite copiar cadena de caracteres

//creo una estructura de datos compuestos, conocida también como registro
struct alumno
{
    char nombre[20];
    int edad;
    float ingles, matematica, historia, promedioTotal;
}

//ahora defino el tamaño de la variable "alumno", la variable puede almacenar 30 registros de alumnos
alumno[30];

float menor = 11, mayor = 0;

//almacenamos el nombre del alumno con mayor promedio y con menor
char nombreMayor[20], nombreMenor[20];  //a la variable char le agregamos entre corchetes el tamaño

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
        //sacamos el promedio de cada alumno y lo almacenamos en la variable promedioTotal
        alumno[i].promedioTotal = (alumno[i].ingles + alumno[i].matematica + alumno[i].historia)/3;

        if(alumno[i].promedioTotal > mayor)
        {
           mayor = alumno[i].promedioTotal;
           strcpy(nombreMayor, alumno[i].nombre);  //esta función copia en la var nombreMayor el nombre del alumno del promedio más alto
        }

        if(alumno[i].promedioTotal < menor)
        {
           menor = alumno[i].promedioTotal;
           strcpy(nombreMenor, alumno[i].nombre);  //esta función copia en la var nombreMayor el nombre del alumno del promedio más bajo
        }

        printf(
            "\nAlumno[%i]: Nombre: %s - Edad: %i - Ingles: %.2f - matematica: %.2f - historia: %.2f",
             i + 1, alumno[i].nombre, alumno[i].edad, alumno[i].ingles, alumno[i].matematica, alumno[i].historia);
    }

    //fuera del bucle imprimimos el nombre del alumno con mayor y menor promedio
    printf("\nEl alumno con mejor promedio es %s y su promedio es %.2f", nombreMayor, mayor);

    printf("\nEl alumno con menor promedio es %s y su promedio es %.2f", nombreMenor, menor);

    return 0;
}