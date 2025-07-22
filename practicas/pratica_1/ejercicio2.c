/*
    Ejercicio 2
    Escriba un programa en el que se declaren tres variables, a, b y c y se asigne a esas
    variables los valores 5, 7 y 9 respectivamente. El programa deberá entonces calcular
    su suma y mostrar el resultado. Modifíquelo para que los valores de las variables sean
    introducidos por el usuario
*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 6, c = 7;

    printf("La suma de a, b y c es %d\n", a + b + c);

    printf("Ingrese el valor de la variable a: \n");
    scanf("%d", &a);

    printf("Ingrese el valor de la variable b: \n");
    scanf("%d", &b);

    printf("Ingrese el valor de la variable c: \n");
    scanf("%d", &c);

    printf("La suma de los nuevos valores de a, b y c es %d\n", a + b + c);
    
    return 0;
}