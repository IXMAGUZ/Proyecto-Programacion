#include <stdio.h>
//Busqueda secuencial en arreglos desordenados
const int MAX = 100;//Se declara una constante de caracter entero con un tamaño de 100
void Lectura(int [], int);
int Busca(int *, int, int);
//de declaran varias variables globales
void main (void)//aqui se inicia la funcion principal
{
    int RES, ELE, TAM, VEC[MAX];//se declaran varibles y un arreglo
    do
    {
       printf("Ingrese el tamaño del arreglo:");//se solicita ingresar el tamaño del arreglo
       scanf("%d", &TAM);//se escanea y se guarda en la direccion de la variable TAM
    } 
    while (TAM>MAX || TAM < 1);//se abre un bucle while, para validar el tamaño del arreglo
    Lectura(VEC, TAM);//esta funcion se usa para llenar el arreglo VEC con valores ingresados por el usuario
    printf("\nIngresa el elemento a buscar: ");//solicitamos ingresar el elemento a buscar dentro del arreglo
    scanf("%d", &ELE);//se escanea y se guarda en la memoria de la variable ELE
    RES = Busca(VEC, TAM, ELE);//se usa la funcion Busca para buscar el elemento del arreglo
    if (RES)
    printf("\nEl elemento se encuentra en la posicion %d", RES);//si se encuentra se imprime el mensaje y la direccion
    else
    printf("\nEl elemento no se encuentra en el arreglo");//si no, imorimira un mensaje que dira que no esta en el arreglo
}
void Lectura(int A[], int T)//se abre la funcion Lectura
{
    int I;//se declara una variable
    for ( I =0; I < T; I++)//se abre un ciclo for, para que se ejecute T veces
    {
        printf("Ingresa el elemento %d:", I+1);//se solicita ingresar el documento
        scanf("%d", &A[I]);//se lee y se guarda en la memoria del arreglo A
    }
}
int Busca(int A[], int T, int K)//se usa la funcion busca para buscar un elemento dentro del arreglo
{
    int I=0, BAN = 0, RES;//se declaran varibles locales
    while (I < T && !BAN)/*Bucle while que se ejecuta mientras no se haya encontrado el elemento y no se haya llegado 
    al final del arreglo*/
    if (A[I] == K)//si el elmento esta en la posicion es igual K
    BAN++;//se establece BAN en 1 para indicar que se enctrontro el elemento
    else
    I++;//si no se incrementa I para pasar al siguiente elemento del arreglo
    if (BAN)//si se encontro que BAN es igual a 1
    RES = I +1;//Despues se almacena la posicion del elemento de RES
    else
    RES = BAN;//Si no se encotro el elemnto, RES SE MANNTIENE EN 0 
    return (RES);
    
}