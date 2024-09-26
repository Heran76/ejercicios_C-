/*
 Punteros como parámetros de entrada a procedimientos.

#include <stdio.h>
#include <stdio.h>

void procd1(int *a) // aqui declaramos el parametro como puntero
{
    *a = *a * 100; // aqui damos los datos de la función como puntero.
}

int main()
{
     int a = 125;
     procd1(&a); // para pasar el contenido del procedimiento hay que adignarele la memoria como parámetro
     printf("%d",a);
     return 0;
}
*/

#include <stdio.h>

int procd(int *a)
{
    *a = *a * 100;
}


int main()
{
  int a = 125;
  procd(&a);
  printf("%d ", a);
  return 0;
}