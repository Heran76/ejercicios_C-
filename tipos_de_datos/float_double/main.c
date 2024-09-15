// variables con decimales estandar IEEE754.
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float var;
    var = 39.9;  //la parte separador es un punto no la coma
    
   double varuno;
   varuno = 3.567E-22;

    printf("%f\n", var);
    printf("%e",varuno);

    // no adminte ni short, long ni unsigned.
    //tamaño inicial

    return 0;
}