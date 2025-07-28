/*
    Ejercicio 14

    Escriba un programa en C que calcule el salario semanal de un trabajador, a partir de
    las horas trabajadas y el precio cobrado por hora. Ambos valores deben ser solicitados
    al usuario. La jornada normal es de 40 horas semanales. Las horas extra se pagan un
    cincuenta por ciento más caras que las normales, y pasan a pagarse al doble que las
    normales a partir de las 50 horas trabajadas.

*/

#include <stdio.h>

int main(void)
{
    int hours;
    float priceperhour, normal, fifty, hundred;

    printf("Indique cuantas horas trabajo en la semana: ");
    scanf("%d", &hours);

    printf("Indique el precio por hora: ");
    scanf("%f", &priceperhour);

    if (hours <= 40)
    {
        normal = hours * priceperhour;
        fifty = 0 * priceperhour * 1.5;
        hundred = 0 * priceperhour * 2;
    } else if((hours > 40) && (hours <= 50))
    {
        normal = 40 * priceperhour;
        fifty = (hours - 40) * priceperhour * 1.5;
        hundred = 0 * priceperhour * 2;
    } else if (hours > 50)
    {
        normal = 40 * priceperhour;
        fifty = 10 * priceperhour * 1.5;
        hundred = (hours - 50) * priceperhour * 2;
    }
    
    printf("Has trabajado %d horas semanales\n", hours);
    printf("Has ganado un total de $%.2f\n", normal + fifty + hundred);

    return 0;
}