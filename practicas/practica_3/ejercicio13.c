/*
    Ejercicio 13

    Escriba un programa en C que muestre el siguiente menú:
    CALCULO DE AREAS
    ===========================
    1 - Calcular el área de un triángulo
    2 - Calcular el área de un trapecio
    3 - Calcular el área de un rectángulo
    Tras mostrar el menú, se solicitará al usuario que seleccione una opción. En función de
    la opción seleccionada el programa deberá pedir los datos necesarios para calcular el
    área, realizar el cálculo y mostrar el resultado por pantalla.
    Nota: Recuerde que para usar la función raíz cuadrada (sqrt) debe incluir la librería
    math.h.
*/

#include <stdio.h>

int main(void)
{
    int option, a, b, h;

    printf("CALCULO DE AREAS\n");
    printf("------------------\n");
    printf("1 - Calcular el area de un triangulo\n");
    printf("2 - Calcular el area de un trapecio\n");
    printf("3 - Calcular el area de un rectangulo\n");
    scanf("%d", &option);

    switch (option)
    {
    case 1:
        printf("Calcularemos el area del triangulo:\n");
        printf("Base: ");
        scanf("%d", &a);
        printf("Alto: ");
        scanf("%d", &b);
        printf("El area del triangulo es: %.1f", (float)((a * b)/2));
        break;
    case 2:
        printf("Calcularemos el area del trapecio:\n");
        printf("Base: ");
        scanf("%d", &a);
        printf("Techo: ");
        scanf("%d", &b);
        printf("Alto: ");
        scanf("%d", &h);
        printf("El area del trapecio es: %.1f", (float)(((a + b)*h)/2));
        break;
    case 3:
        printf("Calcularemos el area del rectangulo:\n");
        printf("Base: ");
        scanf("%d", &a);
        printf("Alto: ");
        scanf("%d", &b);
        printf("El area del rectangulo es: %.1f", (float)(a * b));
        break;
    default:
        printf("No eligió una opción correcta");
        break;
    }

    return 0;
}