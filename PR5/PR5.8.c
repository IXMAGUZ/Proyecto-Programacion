#include <stdio.h>
//Ordenacion por seleccion directa
const int MAX = 100;//se declara una constante 
void Lectura (int *, int); //prototipo d eun funcion llamada Lectura 
void Ordena(int *, int);//prototipo de una funcion llamada ordena
void Imprime(int *, int);//prototipo de una funcion llamada imprime
void main(void)//Aqui se inicia la funcion principal
{
    int TAM, VEC[MAX];//se declara una variable y un arreglo
    do//Se abre un do-while, donde si la operacion [While] funciona entonces se ejecutara un printf y un scanf
    {
        printf("Ingrese el tama;o del arreglo:");
        scanf("%d", &TAM);
        //se solicita el tamaño del arreglo y se guarda en la direccion de memoria de la variable TAM
    } 
    while (TAM>MAX || TAM<1);//Se abre un bucle while
    Lectura(VEC, TAM);//se llama a la funcion lectura para llenar el arreglo
    Ordena(VEC, TAM);//se llama a la funcion ordena para ordenar los elementos en el arreglo
    Imprime(VEC, TAM);//se llama a la funcion Imprime para imprimir los resultados del arreglo
}
void Lectura(int A[], int T)//se define la funcion Lectura
{
    int I;//se declara una variable de caracter entero
    for ( I = 0; I < T; I++)//se abre un bucle for
    {
      printf("Ingrese elm elemento %d:", I+1);
      scanf("%d", &A[I]);
    }
    //se solicita el elemento y se guardsa en la dirrecion de memoria del arreglo
}
void Imprime(int A[], int T)//se define la funcion Imprime
{
    int I;//se declara una variable
    for (I = 0; I < T; I++)//se abreun bucle for
    printf("\nA[%d]: %d", I, A[I]);//se imprime el Arreglo junto con el indice
}
void Ordena(int A[], int T)//se define la funcion Ordena
{
    int I, J, MEN, L;//se declaran las variables
    for ( I = 0; I < T; I++)//Se abre un bucle for
    {
        MEN = A[I];
        L = I;
        //se selecciona el elemento en la posicion I y se marca su indice con L
        for ( J =(I+1); J < T; J++)//se abre un bucle interno que busca el valor minimo
        if (A[J] < MEN)
        {
            MEN = A[J];
            L = J;
        }
         // Si se encuentra un elemento menor que MEN, se actualiza MEN y L con el nuevo valor y su índice.
        A[L] = A[I];
        A[I] = MEN;
        //se intercambia los elementos en las posiciones I y L, y se coloca el valor minimo en I
    }    
}