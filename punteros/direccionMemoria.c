/*
 1 byte = 8 bits,
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    printf("%d", &a); // &a con el apersan indicamos la direccion de momoria de la variable a
    return 0;
    /*
     la memoria de la variable a es:
     1803988200

    */
}