#include <stdio.h>
/*Arreglo sin elementos repetidos.
El programa, al recibir como datos un areeglo inidimensional desordenado de N
elementos, obtiene como salida ese mismo arrego pero sin los elementos repetidos.*/
void Lectura(int *, int);
void Imprime(int *, int);
void Elimina(int *, int *);

void main(void)
{
    int TAM, ARRE[100];//Declaramos dos variable de caracter entero, una de ella es un arreglo de tamaño 100 
    do //Se abre una estructura do-while, donde la operacion se evaluan al final
    {
        printf("Ingrese el tamaño del arreglo:");// se solicita el tamaño del arreglo
        scanf("%d", &TAM);// Se escanea el valor ingresado y se guarda en la memoria de la variable TAM
    } 
    while (TAM > 100 || TAM < 1);//Aqui se comienza el operador logico while
    Lectura(ARRE, TAM);//se ingresa en el arreglo ARRE valores ingresados por el usuario
    Elimina(ARRE, &TAM);//se elimina elementos repetidos de arreglo ARRE
    Imprime(ARRE, TAM); //Imprimimos el arreglo ARRE despues de eliminar los repetidos
}
void Lectura(int A[], int T)//Se inicia la funcion lectura 
{
    printf("\n");//NO SE PORQUE ESTA ESO AHI
    int I;//Se declara la variable I
    for ( I = 0; I < T; I++)//Se inicia un bucle for, donde I se inicializa en 0 y hasta que este no sea menor que T, se ira incrementado
    {
        printf("Ingresa el elemento %d:", I+1); //Solicitamos ingresar el elemento
        scanf("%d", &A[I]);//se escanea y se guarda en la memoria del arreglo A
    }
}
void Imprime(int A[], int T)//Se inicia la funcion imprimen
{
    int I;//se declara la variable I
    for ( I = 0; I < T; I++)//Se abre un ciclo for 
    printf("\nA[%d]: %d", I, A[I]);//se imprime el arreflo de I y el arreglo de A
}
void Elimina(int A[], int *T)//se inicia la funcion eliminar, esta eliminara elementos repetidos del arreglo
{
    int I = 0, K, L;//se declara la variable I que tendra un valor de 0, tambien se declaran otras variables
    while (I < (*T-1))//se abre un operador while, este engloba todas las operaciones y operadores, ademas trabajara con los elementos del arreglo A
    {
        K = I + 1;//Se declara que K tiene que ser igual a la Variable I + 1
        while (K <= (*T-1))//Este blucle compara el elemento actual A[I] con los elementos restantes
        {
            if (A[I] == A[K])//Se compara el arreglo A[I] con el arreglo A[K] para encontra si hay duplicados
            {
              for (L = K; L < (*T-1); L++)
              A[L] = A[L+1];
              // Si se encuentra un duplicado, desplazamos los elementos a la izquierda para eliminarlo.
                // Esto se hace moviendo todos los elementos a la derecha de A[K] una posición hacia la izquierda.
              *T = *T -1;//luego reduciomos el tamaño del arreglo
              
            }
            else
            K++;// si no hay pasamos al siguiente paso
        }
        I++;//pasamos al siguente elemento de bucle exterio
    }
    
}
