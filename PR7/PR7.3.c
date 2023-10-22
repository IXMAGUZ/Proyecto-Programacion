#include <stdio.h>
#include <ctype.h>
/*Verifica.
El programa, al recibir como datos una cadena de caracteres y una posicion especifica
en la cadena, determina si el caracter correspondiente es una letra minuscula.*/
void main(void)//Aqui empieza la funcion principal
{
    char p, cad[50];//se declaran una variable y un arreglo de tipo caracter
    int n;//se declara una variable de tipo entero
    printf("\nIngrese la cadena de caracteres (maximo 50):");
    //se solicita ingresar una cadena de caracteres con un numero maximo de 50 caracteres incluyendo los espacios
    gets(cad);//se guarda la cadena en la variable cad
    printf("\nIngrese la posicion en la cadena que desea verificar:");//se solicita la pocision que deseamos verificar
    scanf("%d", &n);//se utiliza la funcion scanf para leer y guarda el valor ingresado en la direccion de memoria de la variable n
    if ((n >= 0) && (n < 50))//se abre un if, donde si n es mayor igual a 0 y n es menor de 50, entonces puede proceder el programa 
    {
        p = cad[n-1];//p sera igual a al valor del arreglo de cad -1
        if (islower(p))//islower regresa 1 si p es una letra minuscula y 0 en un caso contrario
        printf("\n%c es una letra miniscula", p);//se imprime el texto si p es 1
        else
        printf("\n%c no es una letra miniscula", p);//si p es 0 se imprime este texto
    }
   else
    printf("\nEl valor ingresado de n es incorrecto");
    //si el valor de n no era mayor o igual a 0 y no era menor de 50 entonces el valor ingresado era incorrecto
}