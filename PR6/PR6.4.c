#include <stdio.h>
/*Fabrica de lacteos.
EL programa, al recibir como datos las ventas mensuales de diferentes 
productos, obtiene informacion estadistica valiosa para la empresa.*/
void Lectura1(int [15][12]);
void Lectura2(float[], int);
void Funcion1(int [][12], int, int, float *, float *);
void Funcion2(float *, int);
void Funcion3(float *, int);
//se declaran prototipos de funciones los cuales tienen diferentes papeles en el programa
void main(void)//Aqui comienza la funcion principal
{
    int FAB[15][12] = {0};//Se declaran variable de caractrer entero
    float COS[15], VEN[15];//se declaran dos arreglos
    Lectura1(FAB);//Llama a la funcion Lectura1 para ingresar las ventas mensuales
    Lectura2(COS, 15);//Llama a la funcion Lectura 2 para ingresar los costos de los productos
    Funcion1(FAB, 15, 12, COS, VEN);//Llama A la funcion 1 para calcular las ventas totales de los productos
    Funcion2(VEN, 15);//llama a la funcion 2 para calcular las ventas totales de la fabrica
    Funcion3(VEN, 15);//llama a la funcion 3 para determinar el tipo de producto mas vendido
}
void Lectura1(int A[][12])//Aqui comienza la funcion lectura1
{
    int MES, PRO, CAN;//se declaran dos variables
    printf("\nIngrese mes, tipo de producto y cantidad vendida:");//se solicitan datos para continuar con la ejecucion del programa
    scanf("%d %d %d", &MES, &PRO, &CAN);//estos datos se guardaran en las diferentes direcciones de memoria de la variable correspondiente
    while (MES != -1 && PRO != -1 && CAN != -1)//se abre un bucle while, este se repetira hasta que el mes no sea -1 y que PRO, no sea -1 y que CAN no sea -1
    {
        A[MES-1][PRO-1] += CAN;
        printf("Ingrese mes, tipo de producto y cantidad vendida:");
        scanf("%d %d %d", &MES, &PRO, &CAN);//se solicita ingresar los datos nuevamentes
    }
}
void Lectura2(float A[], int N)//Aqui comienza la funcion Lectura2
{
    int I;//se declara una variable
    for ( I = 0; I < N; I++)//se abre un bucle for, esto es para recorrer los productos previamente ingresados
    {
        printf("Ingrese costo del producto %d:", I+1);//se solicita el costo del producto
        scanf("%f", &A[I]);//se lee y se guarda en arreglo A
    }
}
void Funcion1(int A[][12], int F, int C, float V1[], float V2[])//Aqui comienza la funcion 1
{
 int I, J, SUM;//se declaran dos variables
 printf("\n");//NO SE PARA QUE ES ESTO
 for ( I = 0; I < F; I++)//se abre un bucle for, este es para recorrer los productos
 {
 SUM = 0;//se inicializa la suma en 0
 for ( J = 0; J < C; J++)//se abre un bucle for, este recorrera los meses
 SUM += A[I][J];//aqui se suma la cantidad vendida en cada mes
 V2[I] = V1[I] * SUM;//se calculan las ventas totales por producto
 printf("\nTotal de ventas del producto %d: %8.2f", I+1, V2[I]);//se imprime el total de ventas
 }
}
void Funcion2(float A[], int C)//Aqui comienza la funcion 2
{
    int I;//Se declara una variable
    float SUM = 0.0;//se declara una variable de caracter real
    for ( I = 0; I < C; I++)//se abre un bucle for, este es para recorrer los productos
    SUM += A[I];//se suma el total de ventas de cada producto
    printf("\nTotal de ventas de la fabrica: %.2f", SUM);//se imprime el total de ventas
}
void Funcion3(float A[], int C)//Aqui comienza la funcion 3
{
    int I, TPR = 0;//Se declaran dos variable de caracter entero una de ellas tiene un valor de 0
    float VEN = A[0];//se declara un arreglo
    for ( I = 0; I < C; I++)//se abre un bucle for, este para recorrero los productos
    if (VEN < A[I])//si las ventas son menor que el anterior
    {
        TPR = I;//se actualiza el producto mas vendido
        VEN = A[I];//se actualiza el total de ventas
    }
    printf("\n\nTipo de producto mas vendido: %d \t Ventas: %.2f", TPR + 1, VEN);//se imprime el producto mas vendido
    
}