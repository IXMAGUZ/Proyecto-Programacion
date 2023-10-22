#include <stdio.h>
/*Calcula longitud
El programa calcula la longitud de la cadena sin utilizar la funcion srlen*/
int cuenta(char *);//se declara un prototipo de una funcion
void main(void)//Aqui empieza la funcion principa;
{
    int i;//se declara una variable de caracter entero
    char cad[50];//se declara un arreglo de tipo caracter
    printf("ingrese la cadena de caracteres:");//se solicita ingresar la cadena de caracteres
    gets(cad);//se guarda la cadena en la variable cad
    i = cuenta(cad);//I tendra el valor de la variable cad en la funcion cuenta
    printf("\nLongitud de la cadena: %d", i);//se solicita la longitud de la cadena

}
int cuenta(char *cadena)//Aqui empieza la funcion cuenta
{
    int c = 0;//se declara una variable de tipo entero con un valor de 0
    while (!cadena[c] == '\0')//
    c++;
    //aqui el bucle verifica que la posicion c sea diferente de \0, hasta que no llegue hasta esa posicion sera incrementado, \
    contando la posiciones
    return(c);
    
}