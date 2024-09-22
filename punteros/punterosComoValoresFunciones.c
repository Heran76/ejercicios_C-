/*
Una función puede devolver un puntero
*/
#include <stdio.h>
#include <stdlib.h>

int *func1(int *a){
    *a = *a * 100;
    return 0;
}

int main()
{
    int in = 125;
    printf("%d\n", *func1(&in)); //imprime lo que hay dentro de la memoria que apunta el puntero dentro de la funcion
    
    return 0;
}