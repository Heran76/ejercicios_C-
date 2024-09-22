/*
 Operadores de prioridad nivel 2. Operador casting y tamaño
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int a, b;
float c;
a = 3;
b = 5;
c = (float)a/b; //aqui float es un operador de casting convierte en float a

printf("%f",c);
    return 0;
}