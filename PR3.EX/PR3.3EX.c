#include <stdio.h>
#include <math.h>

/*Pares e impares.
El programa, al escribir como datos N numero enteros, obtiene la suma de los numeros pares
y calcula el promedio de los impares

I, N, NUM, SPA, SIM, CIM: Variable de tipo entero.*/

void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;
    //Declaramos las variables
    printf("Ingrese el numero de datos que se van a procesar: \t");//Imprime el texto indicado con un comando de Tabulacion
    scanf("%d" , &N);//El numero entero que digitemos se guarda para N en la memoria,
    if (N > 0)//Aqui abrimos un if que abarca toda la operacion hasta el segundo printf
    {
        for (I=1; I <= N; I++)/*Abrimos un for que es basicamente un bucle que se repite n.
        Donde I comienza en 1 y aumenta con cada iteración*/
        {
            printf("\nIngrese el numero %d: " , I);
            scanf("%d" , &NUM);
            //Dentro del bucle for, se solicita al usuario que ingrese un número y se almacena en la variable NUM.
            if (NUM)
                if (pow(-1, NUM)> 0)
                        SPA = SPA + NUM;
                else
                {
                    SIM = SIM + NUM;
                    CIM++;
                }
        /*Se verifica si NUM es par usando el operador pow (potencia). Si es par, se agrega a la suma de números pares (SPA); 
        de lo contrario, se agrega a la suma de números impares (SIM) y se incrementa el contador de números impares (CIM)*/
        }
    printf("\n La suma de los numeros pares es: %d" , SPA);
    printf("\n El promedio de numeros es: %5.2f" , (float)(SIM / CIM));
    }
    //se imprime los numeros pares y su promedio.
    else 
        printf("\n EL valor de N es incorrecto");
        //si nada de lo que ingresamos se ejecuta entonces se imprime un mensaje de error.
    
}