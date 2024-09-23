/*
 Punteros de Aritmetica II
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={10,11,12,13,14,15,16,17,18};
    int *p=a;
    int *q = p+5;
    printf("%d\n",*p);
    printf("%d\n",*q);
    printf("%d\n", q-p);
    return 0;
}