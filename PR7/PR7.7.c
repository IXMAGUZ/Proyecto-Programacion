#include <stdio.h>
#include <string.h>
/*Cuenta cadenas.
El programa al recibir dos cadenas de caracteres, calcula e imprime cuantas
veces se encuentra la segunda cadena en la primera.*/
void main(void)//Aqui empiece la funcion principal
{
    char cad1[50], cad2[50], *cad0 = "";//se declaran arreglos y una variable con un puntero
    int i = 0;//se declara una variable de tipo entero con un valor de 0
    printf("\nIngrese la primera cadena de caracteres: ");
    //se solicita la primera cadena de caracteres
    gets(cad1);//se guarda en la variable cad1
    printf("\nIngrese la cadena a buscar:");//se solicita la cadena a buscar
    gets(cad2);//se guarda en la variable cad2
    strcpy(cad0, cad1);//se usa la funcion strcpy para copiar una cadena completa, e este caso se copia la cad0 a cad1
    cad0 = strstr (cad0, cad2);//se busca cad0 con el comando strstr
    while (cad0 != NULL)//se abre un bucle while la cual que mientras cad0 sea diferente de NULL se seguira repitiendo
    {
        i++;//si es asi se incrementa i
        cad0 = strstr (cad0 + 1, cad2);//se usa la funcion strstr para encontr

    }
    printf("\nEl numero de veces que aparece la segunda cadena es♣8 %d", i);//se imprime los resultados

}