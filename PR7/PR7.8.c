#include <stdio.h>
#include <string.h>
/*Cadena invertida.
El programa obtiene la cadena invertida.*/
char * inverso(char *);//se declara un prototipo de funcion de tipo caracter
void main(void)//Aqui empieza la funcion principal
{
    char fra[50], aux[50];//se declaran dos arreglos unidimensional de tamaño 50
    printf("Ingrese la linea de texto:");//se solicita la linea de texto
    gets(fra);//se lee y se guarda en la variable fra
    strcpy(aux, inverso(fra));
    printf("\nEscribe la linea de texto en forma inverso");//se solicita escribir la linea de texto en forma inversa
    puts(aux);//se utiliza puts para escribir cadena de caracteres en este caso la cadena de caracteres es de la variable res
}
char * inverso(char *cadena)//Aqui inicia la funcion inverso de tipo caracter
{
    int i = 0, j, lon;//se declaran tres variables
    char cad;//se declara una variable de tipo caracter
    lon = strlen(cadena);//se usa la funcion strlen para obtener la longitud de una cadena de carateres
    j = lon-1;//j sera igual a la variable lon que es igual a la longitud de la cadena de carateres todo esto menos 1
    while (i < ((lon-1) / 2))//se abre un bucle while el cual mientras i sea menor que lon -1 y esto / 2. Se repetira
        {
        cad = cadena[i];//se iguala cad al valor de cadena en el arreglo i
        cadena[i] = cadena[j];//se igualn los valores
        cadena[j] = cad;//y se devuelve  a cad
        i++;//i se incrementa
        j++;//j se incrementa
    }
    return (cadena);//se devuelve el valor de cadena
}