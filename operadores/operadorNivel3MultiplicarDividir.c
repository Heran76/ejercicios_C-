/*
 Operador de prioridad nivel3. Multiplicación y division
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c, e;
   float f;
   a = 5;
   b = 8;
   c = a*b; // el prodcuto se representa *
   e = b/a; // la division se representa barra incliquinada
   f = (float)b/a; //como float aqui ponemos un castign 

   printf(" la multiplicacion de 5 * 8 es %d\n", c);
   printf("La divison de 5 / 8 es %d\n", e);
   printf("la divison con decimales de 5/8 %f",f);
   return 0;
}