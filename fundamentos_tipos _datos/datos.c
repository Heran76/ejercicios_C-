#include  <stdio.h>

int main()
{
    int a = 1; // 2 bites rango desde -32768 -> 32767
    char b = 'Z'; // 1 bite rango desde 0 -> 255
    float c = 1.5456456; // 4 bytes
    double d = 15555555.5555555; // 8 bytes
    long e = 12345; // 4 bites
    short v = 2; // 2 bytes rango desde -128 -> 127
    unsigned int f = 123; // 2 bytes rango 0 -> 65535

    printf("El valor del entero es de %i\n", a);
    printf("El valor del char es de %c\n",b);
    printf("E valor del flotante es de %f\n",c);
    printf("El valor del double es de %lf\n",d);
    printf("El valor del shor es de %i\n",v);
    printf("El valor del long es de %li\n",e);
    printf("El valor del entero unsigned es de %i\n",f);

    return 0;



}