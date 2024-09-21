/* Precedencia o Prioridad */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    int b;
    int c;
    int d;
    int e;

    a = 10;
    b = 12;
    c = 15;
    d = a+b*c; //resultado 190 // el operando producto * se ejecuta primero
    e = (a + b)*c; // los parentesis se ejecutan primero tienen prioridad
    
    printf("El resultado de b es : %d\n",d);
    printf("El resultado de e es : %d\n",e);
    return 0;
}
//asiciativadad la direccion que operamos puede ser de izquierda a derecha.

