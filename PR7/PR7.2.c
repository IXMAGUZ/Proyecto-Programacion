#include <stdio.h>
#include <stdlib.h>
/*Suma y Promedio
El programa, al recibir como datos varias cadenas de caracteres que
contiene reales, los suma y obtiene el promedio de los mismos.*/
void main(void)//Aqui empieza la funcion principal
{
    char c, cad[10];//se declaran una variable y un arreglo de caracter
    int i = 0;//se declaran un entero con valor de 0
    float sum = 0.0;//se declara una variable de valor 0.0
    printf("\nDesea ingresar una cadena de caracteres (S/N)?");//se imprime una pregunta
    c = getchar();//ya sea S o N, se guardara en la variable c
    while (c == 's')//se abre un bucle while para recorrer hasta que c sea igual a s
    {
        printf("\nIngrese la cadena de caracteres:");//se solicita ingresar la cadena de caracteres
        fflush(stdin);//se limpia el bufe
        gets(cad);//se guarda la cadena en la variable cad
        i++;//se incrementa I
        sum += atof(cad);
        /*se suma el valor de la variable sum al resultado de de convertir cad en flotante, utilizando la funcion atof
        atof(cad) convierte cad en numero flotante. luego el operador += suma el valor resultante de atof(cad) al valor 
        actual de sum*/
        printf("\nDesea ingresar otra cadena de caracteres (S/N)?");//se hace otra pregunta
        c = getchar();//Ya se a S o N se guarda en la variable c.
    }
    printf("\nSuma: %.2f", sum / 1);//se imprime los resultados de la suma
    printf("\nPromedio: %.2f", sum / i);//se imprime el promedio
}