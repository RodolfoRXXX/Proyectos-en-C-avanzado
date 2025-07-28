/*
    Ejercicio 16

    Escribir un programa que tras solicitar al usuario las coordenadas (x, y) de dos puntos
    calcule la pendiente de la recta que pasa por ambos puntos. La pendiente de dicha recta
    se calcula como:
        Validar el funcionamiento del programa cuando los puntos introducidos son: A(2,1) y
        B(2,5)

*/

#include <stdio.h>

int main(void)
{
    typedef struct {
        int x;
        int y;
    } point;

    point p1;
    point p2;

    printf("Ingrese las coordenadas del primer punto: \n");
    printf("x1: ");
    scanf("%d", &(p1.x));

    printf("y1: ");
    scanf("%d", &(p1.y));

    printf("Ingrese las coordenadas del segundo punto: \n");
    printf("x2: ");
    scanf("%d", &(p2.x));

    printf("y2: ");
    scanf("%d", &(p2.y));

    if (p2.x != p1.x)
    {
        float m = (float)(p2.y - p1.y)/(p2.x - p1.x);

        printf("La pendiente entre estos dos puntos p1(%d, %d) y p2(%d, %d) es m=%.1f",p1.x, p1.y, p2.x, p2.y, m);
    } else
    {
        printf("Los puntos definen una recta vertical por lo que no tienen pendiente");
    }

    return 0;
}