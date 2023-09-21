#include <stdio.h>
#include <math.h>

/*Pares e impares.
El programa, al escribir como datos N numero enteros, obtiene la suma de los numeros pares
y calcula el promedion de los impares

I, N, NUM, SPA, SIM, CIM: Variable de tipo entero.*/

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
    printf("Ingrese el numero de datos que se van a procesar:\t");
    scanf("%d" , &N);
    if (N > 0)
    {
        for (I=1; I <= N; I++)
        {
            printf("\nIngrese el numeri %d: ", I);
            scanf("%d", &NUM);
            if (NUM)
                if (pow(-1, NUM)> 0)
                      SPA = SPA + NUM;
                else
                {
                    SIM = SIM + NUM;
                    CIM++;
                }
        }
    printf("\n La suma de los numeros pares es: %d", SPA );
    printf("\n El promedio de numeros es: %5.2f", (float)(SIM / CIM));
    }
    else
       printf("\n el valor de N es incorrecto");
    return 0;
}
