/*
    Simular la operación de un cajero automático
    1. Consultar saldo
    2. Depositar dinero
    3. Retirar dinero
    4. Salir
*/

//prototipo
void menu();
void depositar(int cantidad);
void retirar(int cantidad);

//variable global
int saldo_actual = 100;
int cantidad;

#include <stdio.h>

int main()
{
   menu();

   return 0;
}

//creamos la función menu
void menu()
{
    int opc;

    printf("\n1. Consultar saldo");
    printf("\n2. Depositar dinero");
    printf("\n3. Retirar dinero");
    printf("\n4. Salir");

    //guardamos la opción deseada
    printf("\nIngresa la opcion deseada: ");
    scanf("%i", &opc);

    //creamos un switch que derive en la opción elegida
    switch (opc)
    {
    case 1:
        printf("\nTu saldo actual es: %i", saldo_actual);
        break;
    case 2:
        printf("\nCuanto dinero deseas depositar?");
        scanf("%i", &cantidad);
        depositar(cantidad);
        break;
    case 3:
        printf("\nCuanto dinero deseas retirar?");
        scanf("%i", &cantidad);
        retirar(cantidad);
        break;
    
    case 4:
        printf("\nGracias por su visita!");
        break;
    default:
        printf("\nLa opcion indicada no es correcta");
        break;
    }


}

//crear las funciones
void depositar(int cantidad)
{
    saldo_actual += cantidad;
    printf("\nEl deposito fue realizado con exito!");
    printf("\nTu nuevo saldo es: %i", saldo_actual);
}

void retirar(int cantidad)
{
    //condicional para retirar solo el dinero que hay en caso de que sea menor a lo pedido
    if (saldo_actual < cantidad)
    {
        printf("\nSaldo insuficiente");
        printf("\nSolo puede retirar: $%i", saldo_actual);
        retirar(saldo_actual);
    } else
    {
        saldo_actual -= cantidad;
        printf("\nEl retiro fue realizado con exito!");
        printf("\nTu nuevo saldo es: %i", saldo_actual);
    }
}