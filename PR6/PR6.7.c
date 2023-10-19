#include <stdio.h>
/*Cuadrado magico.
El programa genera un cuadrado magico siguiendo los criterios anunciados 
anteriormente*/
const int MAX = 50;//se declara una constante de caracter entera con un valor de 50, esto no se puede modificar a lo largo del programa
void Cuadrado(int [][MAX], int);
void Imprime(int [][MAX], int);
//se declaran dos prototipos de funciones
void main(void)
{
    int CMA[MAX][MAX], TAM;//se declaran un arreglo bidimensional y una variable TAM
    do//se abre un bucle do while
    {
        printf("Ingrese el tamaño impar de la matriz:");//solicitamos el tamaño impar de la matriz
        scanf("%d", &TAM);//esto se guarda en la direccion de memoria de la variable TAM
    } 
    while ((TAM > MAX || TAM < 1) && (TAM % 2));
    //se abre un bucle while este se repetira mientras que TAM se mayor que MAX o menor que 1 y TAM tenga residuo de 2 y sea impar
    Cuadrado(CMA, TAM);//se llama a la funcion cuadrado
    Imprime(CMA, TAM);//se llama a la funcion Imprime
}
void Cuadrado(int A[][MAX], int N)//Aqui comienza la funcion Cuadrado
{
    int I=1, FIL = 0, COL = N / 2, NUM = N * N;//se declaran variable de tipo entero con sus respectivos valores
    while (I <= NUM)//se abre un bucle while, este se repetira mientras que I sea menor o igual que NUM
    {
        A[FIL][COL] = I;//se asigna el valor de I a la posicion actual en la matriz A
        if (I%N != 0) //Si I no es multiplo de N
        {
            FIL = (FIL - 1 + N ) % N;//calcula la nueva fila
            COL = (COL + 1 ) % N;//Calcula la nueva columna
        }
        else
        FIL++;
        I++;
        //si no se incrementa FIL y I
    }
}
void Imprime(int A[][MAX], int N)//Aqui comienza la funcion Imprime
{
    int I, J;//se declaran dos variables
    for ( I = 0; I < N; I++)
    for ( J = 0; J < N; J++)
    printf("\nElemento %d %d: %d", I+1, J+1, A[I][J]);//se imprime el elemento en la posicion actual
}