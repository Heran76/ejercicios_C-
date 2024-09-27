/*
Punteros sobre punteros
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int a = 58;
    int *p1 = &a;
    int **p2 = &p1;
    *p1 = 67;
    **p2 = 1987;
    
    
    printf("%d\n",a);
    return 0;
}