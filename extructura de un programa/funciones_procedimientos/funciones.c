#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b)
{
    return a+b;
}

int resta(int a, int b)
{
    return a-b;
}

int producto(int a, int b)
{
    return a*b;
}

int main(void)
{   
    printf("la suma de %d + %d es = %d\n",40,2,suma(40,2));
    printf("la resta de %d - %d es = %d\n",44,2,resta(44,2));
    printf("El producto de %d * %d es = %d\n",7,6,producto(7,6));
    return 0;
}