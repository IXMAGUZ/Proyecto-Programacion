#include <stdio.h>
#include <string.h>
void intercambia(char FRA[][30], int);//prototipo de una funcion llamada intercambia
void main(void)//Aqui comienza la funcion principal
{
    int i, n;//se declara la variable i y n
    char FRA[20][30];//se declara un arreglo bidimensional
    printf("\nIngrese el numero de filas del arreglo:");//se solicita el numero de filas del arreglo
    scanf("%d", &n);//se lee y se guarda en la variable n
    for ( i = 0; i < n; i++)//se abre un bucle for para recopilar las lienas de texto
    {
        printf("\nIngrese la linea de texto numero %d: ", i+1);//se solicita el numero de linea de texto
        fflush(stdin);//se limpia el bufe de entrada
        gets(FRA[i]);//se lee una linea del texto y se almacena en el arreglo fra
    }
    printf("\n\n");
    intercambia(FRA, n);//se llama a la funcion intercambia, para que se intercambie las lineas del arreglo
    for ( i = 0; i < n; i++)
    {
        printf("Impresion de la linea de texto %d:", i+1);//se imprime la linea de texto despues del intercambio
        puts(FRA[i]);
    }
    
}
void intercambia(char FRA[][30], int n)//Aqui comienza la funcion intercambia
{
    int i, j;//se declaran dos variables de tipo entero
    j = n -1;// se le agrega un valor a j 
    char cad[30];//se declara un arreglo de tipo caracter
    for ( i = 0; i < (n/2); i++)//se abre un bucle for
    {
        strcpy(cad, FRA[i]);//se copia la fila actual en la varible temporal de cad
        strcpy(FRA[i], FRA[j]);//se copia la ultima fila en la fila actual
        strcpy(FRA[j], cad);//se copia el contenido de cad en la ultima fila
        j--;//se decrementa j 
    }
    
}