#include<stdio.h>
#include <math.h>
/*Suma-cuadrados.
El prgrama calcula la suma del cuadrado de los elementos de un arreglo
unidimensional de 100 elemetos de tipo real.*/
const int MAX = 100;//Declaramos una constante de caracter entero que tendra un valor de 100
void Lectura(float *, int); //se declara una funcion global, la cual contendra tanto caracteres reales como enteros
double Suma(float *, int);//se declara una funcion global 
int main(void)//Aqui comienza la funcion principal
{
    float VEC [MAX];// Declaramos una variable de carater real
    double RES; //declaramos una variable con un double este se utiliza para representar numeros de doble precision.
    
    Lectura(VEC, MAX);//llamamos la funcion Lectura para llenar el arreglo VEC con valores ingresados
    RES = Suma(VEC, MAX);//Aqui se llama la funcion suma para calcular la suma de los cuadrados de los numeros en VEC
    printf("\nSuma del arreglo: %.21f", RES);//Se imprime los resulatados.

}
void Lectura(float A[], int T)//Aqui comienza la funcion Lectura
{
    int I;// se declara la variable I
    for ( I = 0; I < T; I++)// se abre un bucle for, donde I se inicializa en cero y hasta que este no sea menor que T, se ira  incrementado
    {
        printf("Ingrese el elemento %d:", I+1);//solicitamos que ingrese un valor
        scanf("%f", &A[I]);//se escanea el valor real y se guarda en el arreglo A 
    }
}
double Suma(float A[], int T)//se inicializa la funcion suma
{
    int I;//Se declara la variable I
    double AUX = 0.0;//se inicializa una variable AUX, donde se almacena la suma de cuadrados
    for (I=0; I<T; I++)//se abre un bucle for.
    AUX += pow(A[I], 2);//Se suma los cuadrados de cada elemento en el arreglo A
    return(AUX);// Se devuelve la suma de los cuadrados
}