#include <stdio.h>
/*Asigna
El programa, al recibir un arreglo bidimensional cuadrado, asigna elementos en
funcion del modulo (residuo) a un arreglo bidimensional*/
void Lectura(int [][10], int);
void Calcula(int [][10], float [], int);
float Mod0(int [][10], int, int);
float Mod1(int [][10], int);
float Mod2(int [][10], int, int);
void Imprime(float [10], int);
//se declaran prototipos de funciones que tiene diferentes papeles en el programa
void main(void)//Aqui inicia la funcion  principal
{
    int MAT[10][10], TAM;//se declara un arreglo bidimensional y una variable 
    float VEC[10];//se declara una variable de caracter real
    do//se abre un do while
    {
        printf("Ingrese el tamaño de la matriz:");//solicitamos el tamaño de la matriz
        scanf("%d", &TAM);//se guarda en la direccion de la memoria TAM
    } 
    while (TAM > 10 || TAM < 1);//este bucle while se repetira mientras que el tamaño sea mayor que 10 y menor que 1
    Lectura(MAT, TAM);//se llama a la funcion lectura
    Calcula(MAT, VEC, TAM);//se llama a la funcion Calcula
    Imprime(VEC, TAM);//se llama a la funcion Imprime
}
void Lectura(int A[][10], int N)//Aqui comienza la funcion Lectura
{
    int I, J;//se declaran dos variables
    for ( I = 0; I < N; I++)//este bucle recorre las filas
    for ( J = 0; J < N; J++)//este bucle recorre las columnas
    {
        printf("Ingrese el elemento %d %d:", I+1, J+1);//se solicita el elemento a buscar
        scanf("%d", &A[I][J]);//se guarda en la direccion de memoria del arreglo A
    }
}
void Calcula(int A[][10], float B[], int N)//Aqui comienza la funcion Calcula
{
    int I;//se declara una variable de caracter entero
    for ( I = 0; I < N; I++)//se abre un bucle for para recorrer los elementos del arrglo 
    switch (I%3)//se utiliza el residuo de la division por tres para saber que funcio se utilizara
    {
    case 1: B[I] = Mod1 (A,I);
        break;
    case 2: B[I] = Mod2 (A,I,N);
        break;
    default: B[I] = Mod0 (A,I,N);
        break;
    }
    //dependiendo del caso se llamara a una funcion x, y su resultado se almacenara dentro del arreglo B[I]
}
float Mod0 (int A[][10], int K, int M)//
{
    int I;
    float PRO = 1.0, SUM = 0.0;
    for ( I = 0; I < M; I++)
    {
        PRO *= A[I][K];
        SUM += A[I][K];
    }
    return (PRO / SUM);
}
float Mod1(int A[][10], int N)
{
    int I;
    float SUM = 0.0;
    for ( I = 0; I < N; I++)
    SUM += A[N][I];
    return (SUM);
}
float Mod2 (int A[][10], int N, int M )
{
    int I;
    float PRO = 1.0;
    for ( I = N; I < M; I++)
    PRO *= A[I][N];
    return (PRO);
}
/*los diferentes casos que vemos se utilizan para calcular con diferentes valores y almacenarlos
en un arreglo unidimensional llamado VEC. Esto dependera del residuo de la division de I % 3.*/
void Imprime(float B[], int N)//Aqui comienza la funcion Imprime
{
    int I;//se declara una variable 
    for ( I = 0; I < N; I++)//se abre un bucle for para recorrer los elementos del arreglo unidimensional
    printf("\nElemento %d: %.2f", I, B[I]);//se imprime el elemento que queriamos buscar
    
}