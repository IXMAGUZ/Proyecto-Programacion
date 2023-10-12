#include <stdio.h>
//Busqueda secuencial en arreglos ordenados en forma creciente.
const int MAX = 100;//Se declara una constante llamada MAX con un valor de 100
void Lectura(int [], int);//Se declara un prototipo de una funcion Lectura
int Busca(int *, int, int);//se declara un prototipo de una funcion Busca
void main(void)//Aqui se inicia la funcion principal
{
    int RES, ELE, TAM, VEC[MAX];//se declaran algunas variables enteras
    do//Se abre un do-while, donde si la operacion [While] funciona entonces se ejecutara un printf y un scanf
    {
        printf("Ingrese el tamaño del arreglo:");//se solicita el tamaño del arreglo
        scanf("%d", &TAM);//se lee y se guarda en la memoria de la variable TAM
    } 
    while (TAM > MAX || TAM < 1);//se abre un operador while
    Lectura(VEC, TAM);//se llama a la funcion Lectura para llenar el arreglo Vec
    printf("\nIngrese el elemeto a buscar:");//Ingresamos el elemento a buscar
    scanf("&d", &ELE);//se lee y se guarda en la memoria de la variable ELE
    RES = Busca(VEC, TAM, ELE);//se llama a la funcion Busca para buscar el elemento en el arreglo
    if (RES)//se abre un If
    printf("\nEl elemento se encuentra en la posicion: %d", RES);//si res tiene un valor verdadero diferente de cero entonces se imprime la posicion
    else
    printf("\nEl elemento no se encuentra en el arreglo");//Si no, entonces se imprime que ese valor no se encuentra en el arreglo
}
void Lectura(int A[], int T)//Aqui comienza la funcion Lectura
{
    int I;//se declara una variable de valor entero
    for ( I = 0; I < T; I++)//se abre un bucle for
    {
        printf("Ingrese el elemento %d:", I+1);
        scanf("%d", &A[I]);
    }
    //solicitamos ingresar elementos para llenar el arreglo, estos se guardan en la memoria del arreglo A
}
int Busca(int A[], int T, int E)//Aqui comienza la funcion Busca para buscar los elementos dentro del arreglo
{
    int RES, I = 0, BAN = 0;//se declaran variables de caracter entero
    while ((I < T) && (E >= A[I]) && !BAN)//Se abre un bucle para buscar el elementon en el arreglo
    if (A[I] == E)
    BAN++;
    else
    I++;
    if (BAN)
    RES = I +1;
    //si se encuentra el elemento entomces RES es la posicion (I) + 1
    else
    RES = BAN;
    //si no la posicion es 0
    return (RES); // la funcion regresa a RES, la posicion, o , 0 si no se encontro
}
