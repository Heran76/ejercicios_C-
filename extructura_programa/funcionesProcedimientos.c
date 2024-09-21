#include <stdio.h>
#include <stdlib.h>

float calculaCuadrado(float valor)
{
    float cuadrado = valor * valor;
    return cuadrado;
}


float calcularAreaCiruclo(float radio)
{
    float area;
    area = 3.1415926 * calculaCuadrado(radio);
    return area;
}

int main(){
    printf("El area del circulo es : %f\n",calcularAreaCiruclo(20.0));
    return 0;
}