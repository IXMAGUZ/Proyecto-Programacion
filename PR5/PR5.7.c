#include <stdio.h>
//ordenacion por insercion directa
const int MAX = 100;//se declara una constante de caracter entero llamada MAX
void Lectura(int *, int);//Prototipo de una funcion llamada Lectura
void Ordena(int *, int);//Prototipo de una funcion llamada ordena
void Imprime(int *, int);//prototipo de una funcion llamada Imprime
void main(void)//aqui comienza la funcion principal
{
    int TAM, VEC[MAX];//se declaran variables de caracter entero
    do//Se abre un do-while, donde si la operacion [While] funciona entonces se ejecutara un printf y un scanf
    {
        printf("Ingrese el tamaño del arreglo:");//Se solicta el tamaño del arreglo
        scanf("%d", &TAM);//se lee y se guarda en la direccion de memoria de la variable TAM
    } 
    while (TAM > MAX || TAM<1);//se abre un ciclo while
    Lectura(VEC, TAM);//se llama a la funcion lectura para llenar el arreglo VEC
    Ordena(VEC, TAM);//Esta ordena para ordenar el arreglo VEC
    Imprime(VEC, TAM);//Esta imprime el arreglo Ordenado

}
void Lectura(int A[], int T)//se define a la funcion Lectura
{
    int I;//se declaran la variable I
    for ( I = 0; I < T; I++)//Se abre un bucle for
    {
        printf("Ingrese el elemento %d:", I+1);//solicitamos ingresar el elemento
        scanf("%d", &A[I]);//se lee y se guarda en la direccion de la memoria del arreglo A
    }
    
}
void Imprime(int A[], int T)//se define la funcion Imprimir 
{
    int I;//de declara la variable I
    for ( I = 0; I < T; I++)//se abre un bucle for
    printf("\nA[%d]: %d", I, A[I]);//se imprime cada elemento del  arreglo segun su posicion ordenada
}
void Ordena(int A[], int T)//se define la funcion Ordenar
{
    int AUX, L, I;//se declaran variables de caracter entero
    for (I = 0; I < T; I++)//se abre un bucle for
    {
        AUX = A[I];//esto almacena el valor actual del elemento en UAX
        L = I -1;//inicializa en L con el indice del elemento anterior al elemento actual
        while ((L >= 0) && (AUX < A[L]))//Se abre un bucle while
        {
            A[L+1] = A[L];
            //este mueve el elemento en la posicion L a la derecha para hecer espacio en AUX
            L--;
            //Decrementa L para comparar con el elemento anterior en la proxima
        }
        A[L+1] = AUX;
    }
    

}