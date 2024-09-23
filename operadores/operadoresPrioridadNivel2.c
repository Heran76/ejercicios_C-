//Operadores de priopioridad nivel 2 signo e incremento.
/*
1 operadores de signo son unarios son el signo + y signo - no se pueden
confundir con los operadores de suma y resta. 

2 operador de incremento ++ y  -- operadores unarios.
 */



#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, e, f, aa;
    a = 45;
    aa = 45;
    b = -45;
    e = ++a; //operador de pre incremento
    f = --aa; // operador de pre decremento
    printf("%d\n",b); //aqui nos muestra el -45;
    printf("El operador de incremento  ++ %d\n",e); // se increnta en uno da 46
    printf("El operador decremento -- %d",aa); // se decrementa en uno;
    return 0;
}