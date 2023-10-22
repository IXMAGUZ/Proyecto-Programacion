#include <stdio.h>
#include <ctype.h>
/*Decodifica
El programa decodifica una cadena de caracteres compuesta por numero
y letras.*/
void interpretar(char *);//prototipo de la funcion interpretar
void main(void)//Aqui comienza la funcion principal
{
    char cad[50];//se declara un arreglo de tipo entero
    printf("\nIngrese la cadena de caracteres:");//se solicita la cadena de caracteres
    gets(cad);//se guarda en la variable cad
    interpretar(cad);//se llama a la funcion interpretar
}
void interpretar(char *cad)//Aqui empieza la funcion interpretar
{
    int i = 0, j, k;//se declaran variables de tipo entero
    while (cad[i] != '\0')//de abre un bucle while, este recorrera el arreglo mientras que cad[i] sea diferente del \0
    {
        if (isalpha (cad[i]))//se abre un if. se usa isalpha para verificar si el caracter es una letra
        {
            k = cad[i - 1] - 48;//entonces el valor de K sera igual a lo que esta dentro del arreglo de cad menos 1 y esto menos 48 
            for (j = 0; j < k; j++)//se abre un bucle for, donde j inicia en 0, y hasta que j sea menor que k este incrementara
            putchar(cad[i]);//se escribe el caracter almacenado en cad[i]
        }
        i++;//I se incrementara
    }
    
}