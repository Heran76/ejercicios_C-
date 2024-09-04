#include <stdio.h>
#include <stdlib.h>

int suma(int a, int b){
    return a + b;
}

int resta(int a, int b){
    return a - b;
}

int producto(int a, int b){
    return a * b;
}

int main(){
    
    printf("La suma de %d más %d es %d\n",40,2,suma(40,2));
    printf("La resta de %d menos %d es %d\n",48,6,resta(48,6));
    printf("EL producto de %d x %d es %d\n",8,6,producto(8,6));    
    return 0;
}


