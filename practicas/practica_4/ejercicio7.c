/*
    Ejercicio 7

     Escriba un programa que pida al usuario su nombre y contraseña y le de tres
    oportunidades para introducir los datos correctos, que serán root y 1234. Si los datos
    introducidos son correctos se mostrará por pantalla “Bienvenido al sistema”. En caso
    contrario se mostrará un mensaje por pantalla indicando que se ha superado el número
    de intentos permitido.
    Notas:
    Puesto que las cadenas de caracteres finalizan con el carácter nulo (‘\0’), usuario y
    contraseña se declararán como cadenas de longitud 5 (char usuario[5]). Para leer
    cualquiera de estas cadenas con la función scanf se usará el descriptor de formato %s y
    dado que el nombre de la cadena ya es una dirección, éste no debe ir precedido del
    símbolo &(scanf(“%s”, usuario)).
    Para comparar cadenas se debe usar la función strcmp (string compare), por ejemplo
    strcmp(usuario, "root"), que devolverá un 0 si las cadenas son iguales y otro valor si
    son distintas

*/

#include <stdio.h>
#include <string.h>
#define user_i "root"
#define pass_i "1234"

int main(void)
{
    char user[5];
    char pass[5];
    int try = 0;

    do
    {
        printf("Ingrese su usuario: ");
        scanf("%4s", user);

        printf("Ingrese su contrasenia: ");
        scanf("%4s", pass);

        if(strcmp(user, user_i) == 0 && strcmp(pass, pass_i) == 0)
        {
            printf("Bienvenido al sistema!\n");
            return 0;
        }

        try++;

        if (try < 3)
        {
            printf("Usuario y/0 contrasenia incorrectos. Intente nuevamente. \n");
        }
        
    } while (try < 3);

    printf("Se ha superado el numero de intentos permitidos.\n");
    return 0;
}