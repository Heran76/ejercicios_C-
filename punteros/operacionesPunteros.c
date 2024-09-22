/*
  El lenguaje C permite que un puntero pueda se
  asignado a otro puntero
*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a = 10, *p, *q;
    p = &a;
    q = p; // La direccion que contiene p se asigna a q
    printf("En la direccion %p está el valor %d\n", q, *q);
   /*
   Ejecucion del program:
   En la direccion 0x16f97ecdc está el valor 10
   */

}