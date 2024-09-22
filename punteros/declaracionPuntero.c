/*
Declaracion de un puntero
para declara un puntero utilizamos el * antes de la variable.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a = 234;
     int *p = &a;
     *p = *p + 1; // aqui aumentamos en uno a a si tocar la variable a, lo hacemos atraves del puntero
     printf("Imprimimosel valor de a que es = %d\n", a); // aqui imprimios el valor de la variabel a es 234
     printf("aqui imprimimos la direccion de a %d\n", &a); // con & imprimos la direccion de a
     printf("aqui imprimimos el contenido de através del a puntero p %d\n", *p);
    return 0;
}