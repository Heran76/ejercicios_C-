#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int edad, anio_actual, anio_nacimiento;
    /*Solicitar la edad del usuario*/
    printf("¿cual es tu edad? :");
    scanf("%d",&edad);
    fflush(stdin);

    /*Solicitar el año acutal*/
    printf("¿cual es el año actual?");
    scanf("%d",&anio_actual);
    fflush(stdin);

    /*Calculamos el año nacimiento*/
    anio_nacimiento= anio_actual - edad;
    printf("Su año de nacimientos es %d", anio_nacimiento);
    return 0;
}