#include <stdio.h>

int main()
{
    float num1, num2;
    float suma, resta, multiplicar, dividir;

    printf("Introduce dos números\n");
    scanf("%f %F", &num1,&num2);

    suma = num1 + num2;
    printf("Las suma de los numeros es %2f\n",suma);

    resta = num1 - num2;
    printf("La resta de los números es %2f\n",resta);

    multiplicar = num1 * num2;
    printf("La multiplicación de los números es %4f\n", multiplicar);

    dividir = num1 / num2;
    printf("La división de los dos números es %4f\n",dividir);

}