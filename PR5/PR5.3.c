#include <stdio.h>
/*Primos.
El prigrama almacena en un arreglo unidimensional los primeros 100 
numeros primos.*/
const int TAM = 100;//Se declara una constante de caracter entero
void Imprime(int[], int);
void Primo(int, int *);
//declaramos funciones globales
int main(void)//Aqui comienza el programa
{
    int P[TAM] = {1,2};//declaramos un arreglo
    int FLA, J = 2, PRI = 3;//declaramos un arreglo
    while (J <= TAM)//abrimos un bucle while, donde se repetira las instrucciones hasta que J se menor o igual a la constante
    {
        FLA = 1;
        Primo (PRI, &FLA);
        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI +=2;
    }
    Imprime(P, TAM);
    //Esto se hara hasta ver encontrado 100 numeros primos y guardalos en la variable P
}
void Primo(int A, int *B)//Se inicia la funcion Primo, para calcular los numeros primos
{
    int DI = 3;//se declara una variable con un valor de 3
    while (*B && (DI <= (A / 2)))// se habre un bucle while
    {
        if ((A % DI) == 0)//esto verifica si A es divisible por I
        *B = 0;//Si es divisible, entonces el valor de B que apunta el puntero sera igual a 0
        DI++;//Se incrementa DI para probar con el siguiente divisor 
    }
    
}
void Imprime(int Primo[], int T)//se inicia la funcion Imprime para Imprimir los numeros primos
{
    int I;//se declara una variable
    for ( I = 0; I < T; I++)/*este realiza una serie de operaciones atraves de los elementos 
    del arreglo primo, este comienza desde I=0 Hasta T que es el tamaño del arreglo*/
    printf("\nPrimos[%d]: %d", I, Primo[I]);//se imprime el valor almacenado en primo
    
}