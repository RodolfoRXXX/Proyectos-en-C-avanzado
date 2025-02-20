/*
    Calculadora con funciones que contengan parámetros
*/

//Prototipos
void menu();
void sumar(int num_a, int num_b);
void restar(int num_a, int num_b);
void multiplicar(int num_a, int num_b);
void dividir(int num_a, int num_b);

#include <stdio.h>

int main()
{
    menu();     //llamamos a la función "menú"

    return 0;
}

//creamos la función "menú"
void menu()
{
    //almacenar la opción que el usuario elija
    int opc;

    printf("1.Sumar");
    printf("\n2.Restar");
    printf("\n3.Multiplicar");
    printf("\n4.Dividir");

    printf("\nDigite la opcion a realizar: ");
    scanf("%i", &opc);

    //pedirle los valores al usuario
    int num_a, num_b;

    printf("\nDigite valor para numero 1: ");
    scanf("%i", &num_a);
    printf("\nDigite valor para numero 2: ");
    scanf("%i", &num_b);

    //llamamos a la función de acuerdo a la opción elegida
    switch (opc)
    {
        case 1: sumar(num_a, num_b);
        break;
        case 2: restar(num_a, num_b);
        break;
        case 3: multiplicar(num_a, num_b);
        break;
        case 4: dividir(num_a, num_b);
        break;
        default: printf("Opción invalida");
    }
}

//definimos las funciones
void sumar(int num_a, int num_b)
{
    printf("La suma es: %i", num_a + num_b);
}
void restar(int num_a, int num_b)
{
    printf("La resta es: %i", num_a - num_b);
}
void multiplicar(int num_a, int num_b)
{
    printf("La multiplicacion es: %i", num_a * num_b);
}
void dividir(int num_a, int num_b)
{
    printf("La division es: %i", num_a / num_b);
}