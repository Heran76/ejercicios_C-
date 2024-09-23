/*
 Operadores de prioridad nivel 3. Módulo o resto
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dividendo, divisor, cociente, resto;
    dividendo = 23;
    divisor = 2;
    cociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("el conscientes es %d\n", cociente);
    printf("el resto es : %d", resto);
    return 0;
}