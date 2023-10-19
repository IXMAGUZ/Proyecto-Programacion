#   include <stdio.h>
/*Simetrico
El programa, al recibir como datos de un arreglo bidimensional al cuadrado, determina
si el mismo es simetrico. */
const int MAX = 100;//declaramos una constante de caracter entero con un valor de 100
void Lectura(int [][MAX], int);
int Simetrico(int [][MAX], int);
/*declaramos prototipos de funciones las cuales tienen un arreglo bidimensional donde este tiene 
una cantidad de columnas expecificadas por la constante MAX*/
void main(void)//aqui comienza la funcion principal
{
    int MAT[MAX][MAX], N, RES;//se declaran variables y un arreglo bidimensional 
    do//se abre un do while 
    {
    printf("Ingrese el tamaño del arreglo:");//se solicita ingresar el tamaño del arreglo
    scanf("%d", &N);//se lee y se guarda en la direccion de la variable N
    }
    while (N > MAX || N < 1);
    Lectura (MAT, N);
    RES = Simetrico(MAT, N);
    if(RES)
    printf("\nEl arreglo bidimensional es simetrico");
    else
    printf("\nEl arreglo bididmensional no es simetrico");
    return 0;
/*Lo que esta pasando en esta serie de procesos logicos, es que primero se habre un do while, primero se ejecuta el while y luego el do. luego
en while nos dice que la variable N tiene que ser mayor que MAX que vale 100 o tiene que ser menor que 1. luego se llama a la funcion lectura,
que esta mas para abajo y tambien se llama a la funcion Simetrico. luego en la linea 20 nos dice que si RES es simetrico imprime que es simentrico
si no, no es simetrico.*/
}
void Lectura(int A[][MAX], int T)//aqui comienza la funcion lectura
{
    int I, J;//se declaran variables
for (I = 0; I < T; I++)
for (J = 0; J < T; J++)
//se abren dos bucles for para recorrer las filas y las columnas
{   
    printf("Fila: %d\tColumna: %d:", I+1, J+1);//se solicita ingresar los valores de las filas y columnas 
    scanf("%d", &A[I][J]);//se lee y se almacena en el arreglo I y J que son las filas y columnas
}
}
int simetrico(int A[][MAX], int T)//Aqui comienza la funcion que trabajara con la simetria del programa
{
    int I = 0, J, F = 1;// se declaran variables con sus respectivos valores
    while ((I < T) && F)//se abre un bucle while para recorres las fila y verificar su simetria
    {
        J = 0;//se iguala J a 0
        while((J < I) && F)//se abre un bucle while para recorrer las columnas
        if (A[I][J] == A[J][I])//Se abre un if, Aqui se compara el valor de los arreglos y se verifica su simetria 
        J++;//si es simetrico entonces J se incrementa
        else
        F = 0;
        I++;
        //si no entonces I se incrementa y F se iguala a 0
    }
    return (F);//se devuelve el valor de F, esto es para indicar si la matriz es simetrica si es 1 es simetrica si es 0 no es simetrica
}