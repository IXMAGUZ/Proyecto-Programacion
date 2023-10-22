#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*Cuenta palabras.
El programa calcula el numero de palabras que hay en la cadena de caracteres.*/
int cuentap(char *);//prototipo de una funcion 
void main(void)//Aqui empieza la funcion principal
{
    int i;//se declara una variable de tipo entero
    char fra[50];//se declara un arreglo de tipo entero
    printf("\nIngrese la linea de texto:");//se solicita la linea de texto
    gets(fra);//se guarda la linea de texto en el arreglo FRA
    strcat(fra, " ");//se utiliza la funcion strcat para agregar un cadena a otra variable, en este caso \
    se usa " ", para agregar un espacio en blanco.
    i = cuentap(fra);//I toma el valor de la variable fra en la funcion cuentap
    printf("\nLa linea de texto tiene %d palabras", i);//se imprime el total de palabras
}
int cuentap(char *cad)//Aqui empieza la funcion cuentap
{
    char *cad0 = "";//se declara una cariable con un puntero a cad0, con un " " cadena vacia. \
    esto se utilizara para encontrar espacios blancos dentro de la cadena
    int i = 1;//se declara una variable de tipo entero
    cad0 = strstr(cad, " ");//se utiliza strstr para encontrar el primer espacio en blanco en la cadena
    while (strcmp(cad, " "))//se abre un bucle while este continuara mientras encuntre espacios en blancos
    {
        strcpy(cad, cad0);/*en cada iteracion del bucle se copia la parte de la cadena desde la poscion actual,
        hasta el primer espacio en blanco.*/
        i++;//se incrementa i cada vez que se encuentre una palabra
        cad0 = strstr (cad + 1, " ");
        /*Se busca la próxima aparición de un espacio en blanco en la cadena cad. Cuando usamos
        cad + 1, se comienza la búsqueda desde la posición siguiente a la anterior.*/
    }
    return (i);
}