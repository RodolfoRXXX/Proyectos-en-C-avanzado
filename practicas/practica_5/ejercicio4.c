/*
    Ejercicio 4

    Escriba un programa que calcule la raíz cuadrada de un número con n decimales, por el
    método de aproximaciones sucesivas.
    Nota: Método de las aproximaciones sucesivas
    Se basa en 'ensayo y error'. A este tipo de algoritmos se les llama de aproximaciones
    sucesivas: se empieza por un valor inicial y se va modificando para acercarse al
    resultado.
    En este caso se comienza suponiendo que la raíz es 1. Se comprueba si raiz*raiz=num
    y si no es así se suma un incremento, y se vuelve a comprobar. Se repiten estos pasos
    hasta que raiz*raiz>num.
    Para computar el valor con un número determinado de decimales se repiten esos pasos
    con un incremento cada vez menor (la primera vuelta 1, la segunda 0,1, la tercera 0,01
    En cada paso la precisión es un decimal más, por lo que se repite hasta que el número
    de decimales sea el introducido por el usuario, o hasta que se encuentre el valor exacto.

*/

#include <stdio.h>

int main(void) {
    double numero;
    int decimales;

    printf("Ingrese un número para calcular su raíz cuadrada: ");
    scanf("%lf", &numero);

    printf("Ingrese la cantidad de decimales deseados: ");
    scanf("%d", &decimales);

    double raiz = 0.0;
    double incremento = 1.0;

    for (int d = 0; d < decimales; d++) {
        // Incrementar raíz de 0 en adelante hasta que raiz^2 > numero
        while ((raiz + incremento) * (raiz + incremento) <= numero) {
            raiz += incremento;
        }

        // Reducir el incremento para el siguiente decimal
        incremento /= 10.0;
    }

    // Imprimir el resultado con la cantidad deseada de decimales
    printf("La raíz cuadrada aproximada de %.10g con %d decimales es: %.*f\n",
           numero, decimales, decimales, raiz);

    return 0;
}