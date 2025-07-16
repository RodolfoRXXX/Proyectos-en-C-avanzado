/*
    Ejemplo con variables

    Tipos de variables en C:
    - int: Enteros con signo
        - long int: Enteros largos
        - short int: Enteros cortos
        - unsigned int: Enteros sin signo
    
    - char: Caracteres
        - signed char: Caracteres con signo (-128 a 127)
        - unsigned char: Caracteres sin signo (0 a 255)

    - float: Números de punto flotante de precisión simple
        - long float: Números de punto flotante de precisión extendida

    - double: Números de punto flotante de doble precisión
        - long double: Números de punto flotante de precisión extendida
        
    - const: Constantes (no se pueden modificar) => #define constante C;

    - C no tiene booleanos nativos, pero se pueden simular con macros:
        #define BOOL char
        #define FALSE 0
        #define TRUE 1

    - Arrays: Colecciones de elementos del mismo tipo
        - int numeros[3]; // Array de 3 enteros sin inicialización
        - int numero[3] = {1, 5, 4}; // Inicialización de un array con 3 enteros
        - Se acceden: numeros[1]; => 5 para acceder al segundo elemento
        - Se definen: numeros[2] = 6 // Asignación del tercer elemento, ahora queda {1, 5, 6}
    
    - Arrays multidimensionales: Arrays de arrays - Matrices
        - int matriz[2][3]; // Array bidimensional de 2 filas y 3 columnas
        - int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Inicialización de una matriz
        - matriz[1][2] = 7; // Asignación del tercer elemento de la segunda fila, ahora queda {{1, 2, 3}, {4, 5, 7}}
        
// variables.c
    - volatile: Variables que pueden cambiar inesperadamente (ej. hardware)
    - static: identificador que hace que la variable mantenga su valor entre llamadas y no lo reinicie
    - extern: Variables definidas en otro archivo o módulo

// funciones
    - void: Funciones que no retornan un valor
    - static: Funciones que solo son visibles dentro del archivo donde se definen
    - inline: Funciones que se expanden en el lugar donde se llaman, mejorando el rendimiento
    
    Este ejemplo muestra cómo declarar e imprimir variables de diferentes tipos.
*/

#include <stdio.h>

int main() {
    // Declaración de variables
    int edad = 25; // Variable entera
    float altura = 1.75; // Variable de punto flotante
    char inicial = 'A'; // Variable de carácter

    // Imprimir las variables
    printf("Edad: %d\n", edad);
    printf("Altura: %.2f metros\n", altura);
    printf("Inicial: %c\n", inicial);
    printf("Tamaño de long int: %d bytes\n", sizeof(long int));
    printf("Tamaño de int: %d bytes\n", sizeof(char));
    printf("Tamaño de int: %d bytes\n", sizeof(float));

    return 0;
}