/*
 Operadores de puntero y dirección de memoria.
 & con el apersan nos indica la direccion de memoria
 (*) el puntero es una variable que almacena direccion de memoria se ultilza operdor puntero que es el asterisco
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // las dos lineas siguientes declaran la variable entera a
    // los punteros p y q a enteros y la variable real b

    int a = 10, *p , *q;
    double b = 0.0;
    q = &a; // asigna la dirección de a a la variable q
            // q apunta al entero (int) a
    b = *q; // asigna a b el valor de a
    *p = 20; //Error: asignación no valida
             //¿donde apunta p?
    printf("En la dirección %p esta el dato %g\n", q, b);
    printf("En la dirección %p está el dato %d\n", p, *p);                 
    return 0;

    // da un error .por utilizar un puntero *p sin saber a donde apunta.
}