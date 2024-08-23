/*
1.- Escriba un programa que utilice:
 - Una función llamada par_impar con un parámetro de tipo int, que visualice "par" o 
   "impar" respecto del valor pasado como argumento,

 - una función llamada positivo_negativo con un parámetro de tipo int, que visulice 
   "positivo" o "negativo" respecto del valor pasado como argumento.

 - Una función llamada cuadrado con un parámetro de tipo int, que devuelvael cuadrado    del valor pasado como argumento.

 - una función llamada cubo con un parámetro de tipo int, que devuelva el cubo del
   valor pasado como argumento.

 - una función llamada contar sin parámetros, que devuelva el siguiente ordinal al
   ultimo devuelto; el primer ordinal devuelto será el 1.

La función main llamará a cada una de estas funciones para un valor determinado y 
finalmente, utilizando la funcion contar, realizará una cuenta hasta 3
*/

/*
   funciones.c - Cómo es un número, Contar.
*/

#include <stdio.h>

void par_impar(int);
void positivo_negativo(int);
int cuadrado(int);
int cubo(int);
int contar(void);


int main(void)
{

	int n = 10;
	par_impar(n);
	positivo_negativo(n);
	printf("Cuadrado de %d = %d\n", n, cuadrado(n));
	printf("cubo de %d = %d\n", n, cuadrado(n));
	printf("\nContar hasta tres; ");
	for (int i = 0; i < 3; ++i)
		printf("%d ", contar());

}

void par_impar(int n)
{
	printf("%d es %s\n", n, (n % 2 == 0) ? "par" : "imprimir");
}

void positivo_negativo(int n)
{
	printf("%d es %s\n", n, (n >=0) ? "positivo" : "negativo");
}

int cuadrado(int n)
{
	return n*n;
}

int cubo(int n)
{
	return n * n *n;
}

int contar(void)
{
	static int n = 1;
	return n++;
}
