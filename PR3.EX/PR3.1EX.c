#include <stdio.h>

/*Factorial.
El programa calcula el factorial de un numero entero.

FAC, I, NUM: variable de tipo entero. */

void main(void)
{
    int I, NUM;
    long long FAC;
    printf("\nIngrese el numero: ");
    scanf("%d" , &NUM);
    if (NUM >= 0)
    {
        FAC = 1;
        for (I=1; I <= NUM; I++)
        FAC *= I;
    printf ("\nEL factorial de %d es: %ld" , NUM, FAC);
    }
    else
        printf("\nError en el dato ingresado");
}