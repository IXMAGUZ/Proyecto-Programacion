#include <stdio.h>
//Busqueda Binaria
const int MAX=100;//se declara una constante llamada MAX con un valor de 100
void Lectura(int [], int);//prototipo de una funcion llamada Lectura
int Binaria(int *, int, int);//Prototipo de una funcion llamada Binaria
void main(void)//Aqui comienza la funcion principal
{
    int RES, ELE, TAM, VEC[MAX];//Declaracion de variables y un arreglo llamado VEC
    do//Se abre un do-while, donde si la operacion [While] funciona entonces se ejecutara un printf y un scanf
    {
        printf("Ingrese le tamaño del arreglo:");//solicitamos ingresar el tamaño del arreglo
        scanf("%d", &TAM);//escaneamos y guardamos en la memoria de la variable TAM 
    } while (TAM>MAX || TAM<1);//Se abre el bucle while
    Lectura(VEC, TAM);//se llama a la funcion lectura para llenar el tamaño del arreglo
    printf("\nIngrese el elemento a buscar:");//se solicita el elemeto a buscar
    scanf("%d", &ELE);//se lee y se guarda en la memoria de la variable ELE
    RES = Binaria(VEC, TAM, ELE);//Aqui se llama a la funcion Binaria para buscar el elemento en el arreglo
    if (RES)
    printf("\nEl elemento se encuentra en la posicion: %d", RES);
    //si elemento de la variable (RES) tiene un valor diferente de cero entonces se imprime el mensaje 
    else
    printf("\nEl elemeto no se encuentra en el arreglo.");
    //si no este en el arreglo entonces se imprime este mensaje
}
void Lectura(int A[], int T)//se llama a la funcion Lectura para recibir un arreglo 
{
    int I;//se declara una variable de caracter entero
    for ( I = 0; I < T; I++)//se abre un bucle for
    {
       printf("Ingrese el elemento %d:", I+1);
       scanf("%d", &A[I]);
    }
    //se solicita ingresar elementos para llenar el arreglo
}
int Binaria(int A[], int T, int E)//se define la funcion Buinaria, que realiza una busqueda binaria en el arreglo
{
    int ELE, IZQ = 0, CEN, DER = T-1, BAN = 0;//se declaran variable de caracter entero
    while ((IZQ <= DER) && (!BAN))//se abre un bucle while, este realiza la busqueda de los binarios
    {
        CEN = (IZQ + DER) / 2;//se calcula el indice del elemento central
        if (E == A[CEN])
        BAN = CEN;
        /*Si el elemento [E] es igual al elemento es igual a la posicion [CEN] del arreglo [A]. Entonces se
        establece BAN en CEN,*/
        else
        if (E > A[CEN])
        IZQ = CEN +1;
        /*Si E es mayor que el elemento en la posición CEN, actualiza el índice de la izquierda (IZQ) para que
         apunte al elemento a la derecha del centro, restringiendo la búsqueda a la mitad derecha del rango.*/
        else
        DER = CEN -1;
        /* Si E no es igual al elemento en la posición CEN y no es mayor, actualiza el índice de la derecha
         (DER) para que apunte al elemento a la izquierda del centro, restringiendo la búsqueda a la mitad izquierda del rango.*/

        
    }
    return (BAN);
    
}