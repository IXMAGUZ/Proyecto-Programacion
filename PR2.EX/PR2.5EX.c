#include <stdio.h>
#include <math.h>
/* Función.
El programa, al recibir como dato un valor entero, calcula el resultado de
➥una función.
Y: variable de tipo entero.
X: variable de tipo real. */

void main(void)
//Este es el punto de inicio de ejecución del Programa//
{
    float X;
    int Y;
    // Aqui declaramos dos variables una real X y otra entera Y//
        printf("Ingrese el valor de Y: ");
        scanf("%d" , &Y);
    /*Aqui estamos diciendole que primero nos imprima un texto luego con scanf estamos diciendole que escane esos numeros 
     y con %d que lo guarde. luego con &Y estamos diciendole que obtenga la direccion de memoria para que scanf pueda modificarla*/
     if (Y < 0 || Y > 50)
     X = 0;
     else 
     if (Y <= 10)
     X = 4 / Y - Y;
     else 
     if (Y <= 25)
     X = pow(Y, 3) - 12;
     else
     X = pow(Y, 2) + pow(Y, 3) - 18;
    /*Aquí se realiza una serie de comprobaciones condicionales para determinar el valor de X en función del valor de Y. Las condiciones se ejecutan en orden:
    Si Y es menor que 0 o mayor que 50 (| |, esto signifiza O), X se establece en 0. Si Y está entre 0 y 10, se calcula X utilizando la fórmula 4 / Y - Y.
    Si Y está entre 11 y 25 (inclusive), se calcula X utilizando la fórmula pow(Y, 3) - 12, que eleva Y a la tercera potencia y luego le resta 12.
    Si Y es mayor que 25, se calcula X utilizando la fórmula pow(Y, 2) + pow(Y, 3) - 18, que eleva Y a la segunda potencia y luego le suma Y elevado a la tercera potencia y le resta 18.*/
    printf("\n\nY = %d\tX = %8.2f" , Y, X);
     
     
}