#include <stdio.h>
#include <math.h>
/*Estadistico
El programa, al recibir como datos un arreglo unidimensional de enteros
que contiene calificaciones, calcula la media, la varianza, 
la desviacion estandar y la moda*/
const int MAX = 100;//se declara una constante llamada MAX con un valor de 100
void Lectura(int *, int);//protoripo de una funcion llamada Lectura
float Media(int *, int);//prototipo de una funcion llamada Media
float Varianza(int *, int, float);//prototipo de una funcion llamada Varianza
float Desviacion(float); //prototipo de una funcion llamada Desviacion
void Frecuencia(int *, int, int *);//prototipo de una funcion llamada Frecuencia
int Moda(int *, int);//prototipo de una funcion llamada Moda
void main(void)//aqui comienza la funcion principal
{
    int TAM, MOD, ALU[MAX], FRE[11] = {0};//se declaran variables de caracter entero y dos areglos
    float MED, VAR, DES;//se declaran variables de caracter real
    do////Se abre un do-while, donde si la operacion [While] funciona entonces se ejecutara un printf y un scanf
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } 
    //se solicta ingresar el tamaño del arreglo y esto se va a guardar en la direcion de memoria de la variable TAM
    while (TAM > MAX || TAM < 1);//se abre el bucle while
    Lectura(ALU, TAM);//se llama a la funcion Lectura para ingresar las calificaciones en el arreglo
    MED = Media(ALU, TAM);//esto calcula la media y se almacena en MED
    VAR = Varianza(ALU, TAM, MED);//se calcula la Varianza y se gurda en VAR
    DES = Desviacion(VAR);//se calcula la Desviacion y se almacena en DES
    Frecuencia(ALU, TAM, FRE);//se calcula la Frecuencia  y se guarda en FRE
    MOD = Moda(FRE, 11);//se calcula la Moda y se almacena en MOD
    printf("\nMedia: %.2f", MED);//imprime la media
    printf("\nVarianza: %.2f", VAR);//imprime la varianza
    printf("\nDesviacion: %.2f", DES);//imprime la desviacion
    printf("\nModa: %d", MOD);//imprime la moda

}
void Lectura(int A[], int T)//aqui comienza la funcion lectura
{
    int  I;//se declara una variable de caracter entero
    for ( I = 0; I < T; I++)/*se abre un bucle for, este ingresara las 
    calificaciones en el arreglo A, este se ejecutara segun las cantidad e=que introduzca el usuario*/
    {
      printf("Ingrese el elemento %d:", I+1);//se solicita ingresar el elemento, I+1 significa se usa para mostrar el número de elemento actual, comenzando desde 1.
      scanf("%d", &A[I]);//este se guarda en la direccion del arreglo A 
    }
    
}
float Media(int A[], int T)//aqui comienza la funcion Media
{
    int I;//se declara una variable de caracter entero
    float SUM = 0.0;// aqui se declara una variable de carater real llamada SUM que tiene un valor de 0.0
    for ( I = 0; I < T; I++)//se abre un bucle for para calcular la suma de las calificaciones
    SUM += A[I];
    return(SUM /T);
    
}
float Varianza(int A[], int T, float M)//aqui comienza la funcion Varianza
{
    int I;//se declara una variable de caracter entero
    float SUM = 0.0;//se declara una variable de caracter real con un valor de 0.0
    for ( I = 0; I < T; I++)//se abre un bucle for para calcular la varianza
    SUM += pow ((A[I] - M), 2);//aqui la Variable SUM va ha ser igual a al arreglo A - M elevado a 2
    return (SUM / T);
}
float Desviacion(float V)
{
    return (sqrt (V));
}
void Frecuencia(int A[], int P, int B[])//aqui comienza la funcion Frecuencia
{
    int I;//se declara una variable de caracter entero
    for ( I = 0; I < P; I++)//se abre un bucle for para contar las frecuencias de los alumnos
    B [A[I]]++;
}
int Moda(int A[], int T)//Aqui comienza la funcion Moda
{
    int I, MOD = 0, VAL = A[0];//se declaran variables de caracter entero con valores de 0 y un arreglo
    for ( I = 0; I < T; I++)//se abre un bucle para encontrar la moda
    if (MOD < A[I])//se abre un if. Si la moda es menor que el arreglo A entonces:
    {
        MOD = I;// la moda va ser igual al valor introducido
        VAL = A[I];//la variable val sera igual al arreglo A

    }
    return (MOD);
    
}