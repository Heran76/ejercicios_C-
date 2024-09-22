/*
 Aritmetica de punteros
 esto es muy util para trabajar con array
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={10,11,12,13,14,15,16,17,18};
    int *p = a;
    printf("%d\n",*p);
    p++;
    printf("%d",*p);
    
    return 0;
}