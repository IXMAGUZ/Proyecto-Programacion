#include <stdio.h>
#include <math.h>

// Prototipo de función para determinar si un número es par o impar
void parimp(int, int *, int *);

void main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0; //Declaramos las variables
    printf("Ingresa el numero de datos: ");//solicitamos que ingrese el numero de datos
    scanf("%d", &N); //Leemos y guardamos los datos en la variable N 

    for (I = 1; I <= N; I++)
    {
        printf("Ingresa el numero %d:", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
    }
    /*El bucle for en este caso, el bucle se ejecutará N veces, donde N es la cantidad de 
    números que el usuario debe ingresar. En cada iteración del bucle, se muestra un mensaje 
    utilizando printf que le pide al usuario ingresar un número. El %d en el mensaje se 
    reemplaza por el valor de I, que representa el número de iteración actual.*/
    printf("\nNumero de pares: %d", PAR);
    printf("\nNumero de impares: %d", IMP);
    //Imprimimos los numeros pares e impares, guardados previamente en la memoria de la variable
}
void parimp(int NUM, int *P, int *I)// Usamos esta función para determinar si un número es par o impar
{
    int RES; //Declaramos la variable RES.
    RES = NUM % 2; // Aqui se calcula el residuo de NUM cuando este se divide por 2
    if (RES == 0)
    {
        (*P)++;//si el residuo es 0, el numero es par y se incrementa P
    }
    else
    {
        (*I)++; // si el residuo no es 0, el numero es impar, incrementamos I
    }
    
}