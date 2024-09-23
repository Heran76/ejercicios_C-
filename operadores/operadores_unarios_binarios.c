// Operadores unarios y binarios. Operador ternario
// el operador uniario el aquel que solo necesita un operador
// el mas típico es el (-);
// operador sizeof nos devuelve el tamaño de la variable;
//----------------
/*
 El operador binario necesita dos operandos derecha y izquierda. 
 */

/*

operador ternario solo hay uno utiliza una ? y dos : 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f;
    a = 4;
    b = -a; // operador unario
    d = ( c = a) + b; // operador binario
    e = sizeof a; // operador unario
    f = (a < b)? a : b; //operador ternario
    printf("%d\n",b);
    printf("%d", e);
    return 0;
}