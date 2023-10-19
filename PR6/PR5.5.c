#include <stdio.h>
/*Traspuesta
El programa calcula la transpuesta de una matriz.*/
const int MAX = 50;//se declara una constante con un valor de 50, esto no varia ni puede ser modificado otra vez en el programa
void Lectura(int [][MAX], int, int);
void Transpuesta(int [][MAX], int [][MAX], int, int);
void Imprime(int [][MAX], int, int);
//se declaran prototipos de funciones, los cuales diferentes roles en el programa
void main(void)//Aqui comienza la funcion principal
{
    int MAT[MAX][MAX], TRA[MAX][MAX];//se declaran dos arreglos bidimensionales
    int FIL, COL;//se declaran dos variables
    do//se abre un bucle do while
    {
        printf("Ingrese el numero de filas de la matriz:");//se solicita el numero de filas de la matriz
        scanf("%d", &FIL);//se lee y se guarda en la direccion de la memoria de la variable FIL
    } 
    while (FIL > MAX || FIL < 1);//este bucle while se repetira hasta que el numero de filas sea menor que Max o mayor que 1
    do//se abre otro bucle do while
    {
        printf("Ingrese el numero de columnas de la matriz:");//se solicita el numero de columnas
        scanf("%d", &COL);//se leen y se guardan en la memoria de la varible COL
    } 
    while (COL > MAX || COL < 1);//al igual que el otro este se repetira mientras que Col sea menor que MAX o Mayor que 1
    Lectura(MAT, FIL, COL);//se llama a la funcion lectura
    Transpuesta(MAT, TRA, FIL, COL);//se llama  a la funcion transpuesta
    Imprime(TRA, COL, FIL);//se llama a al funcion Imprime
}
void Lectura(int A[][MAX], int F, int C)//aqui comienza la funcion Imprime
{
    int I, J;//se declaran dos variables
    for ( I = 0; I < F; I++)//este bucle for recorre las filas 
    for ( J = 0; J < C; J++)//este recorre las columnas
    {
        printf("Ingrese el elemento %d %d:", I+1, J+1);//se solicita el elemento a buscar
        scanf("%d", &A[I][J]);//se guarda en el arreglo A
    }
}
void Transpuesta(int M1[][MAX], int M2[][MAX], int F, int C)//Aqui inicia la funcion transpuesta
{
    int I, J;//se declaran dos variables
    for ( I = 0; I < F; I++)//este bucle recorre las filas 
    for ( J= 0; J< C; J++)//este recorre las columnas
    M2[J][I] = M1[I][J];//se igualan M2 Y M1
    
}
void Imprime(int A[][MAX], int F, int C)//Aqui inicia la funcion Imprime
{
    int I, J;//se declaran las variables I y J
    for (I=0; I<F; I++)
    for (J=0; I<C; J++)
    printf("\nElemento %d %d: %d", I+1, J+1, A[I][J]);//se imprime los elementos que queriamos buscar
}