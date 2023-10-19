#include <stdio.h>
/*Intercambia.
El programa intercambia las columnas de un arreglo bidimensional. los
elementos de la primera columna se intercambia con los de la ultima, 
los de la segunda con los de la penultima, Y asi sucesivamente*/
const int MAX = 50;//se declara una constante 
void Lectura(float [][MAX], int, int);
void Intercambia(float [][MAX], int, int);
void Imprime(float [][MAX], int, int);
//se declarana prototipos de funciones con diferentes cargos en la funcion
void main(void)//Aqui inicializa la funcion principal
{
    int F, C;//se declaran dos variables
    float MAT[MAX][MAX];//se declaran un arreglo de caracter Real
    do//se abre un bucle do while
    {
        printf("Ingrese el numero de filas:");//solicita el numero de filas
        scanf("%d", &F);//se lee y se guarda en la direcion de memoria de la variable F
    } while (F > MAX || F < 1 );//este bucle determina si F es mayor que el rango determinado, si es asi se repetira hasta que este fuera del rango
    do
    {
    printf("Ingrese el numero de columnas:");//se solicita ingresar el numero de columnas
    scanf("%d", &C);//se leen y se guarda en la direccion de memoria de la variable C
    } while (C > MAX || C < 1);//este bucle determina si C es mayor que el rango determinado, si es asi se repetira hasta que este fuera del rango
    Lectura(MAT, F, C);//se llama a la funcion lectura
    Intercambia(MAT , F, C);//se llama a la funcion Intercambia
    Imprime(MAT, F, C);//se llama a la funcion Imprime
}
void Lectura(float A[][MAX], int F, int C)//Aqui comienza la funcion Lectura
{
    int I, J;//se declaran dos variables
    for (I = 0; I < F; I++)//se abre un bucle para recorrer las filas
    for (J = 0; J < C; J++)//se abre un bucle para recorrer las columnas
    {
        printf("Ingrese el elemento %d %d:", I+1, J+1);//se solicita el elemento a buscar
        scanf("%f", &A[I][J]);//se almacena el elmento en la matriz
    }
}
void Intercambia(float A[][MAX], int F, int C)//Aqui comienza la funcion Intercambia
{
    int I, J;//se declaran dos variable 
    float AUX;//se declara una variable de caracter Real
    for ( I = 0; I < (C / 2); I++)//se abre un bucle for para recorrer la mitad de la columnas
    for ( J = 0; J < F; J++)//este recorre las filas en la matriz
    {
        AUX = A[J][I];//se almacena el elemento en una variable "Auxiliar"
        A[J][I] = A[J][C-I-1];//se intercambia el elemento I con su correspondiente a la columna opuesta
        A[J][C-I-1] = AUX;//se coloca el elemento "Auxiliar", en la otra posicion
    }
}
void Imprime(float A[][MAX], int F, int C)//Aqui comienza la funcion Imprime
{
    int I, J;//se declaran dos variables de caracter entera
    for (I = 0; I < F; I++)
    for (J = 0; J < C; J++)
    printf("\nElemento %d %d: %5.2f", I+1, J+1, A[I][J]);
    //se mustra los elementos de la matriz
}