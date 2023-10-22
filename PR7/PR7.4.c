#include <stdio.h>
#include <ctype.h>
/*Cuenta letras minisculas y mayusculas.
El programa, al recibir como datos una frase, determina el numero de letras 
minisculas y mayusculas que existen en la frase*/
void main(void)//Aqui empieza la funcion principal
{
    char cad[50];//se declara un arreglo de valor de 50
    int i = 0, mi = 0, ma = 0, to = 0;//se declaran una serie de variables de caracter entero
    printf("\nIngrese la cadena de caracteres (maximo 50 caracteres): ");//se solicita la cadena esta no puede pasar de 50 carcteres incluyendo los espacios
    gets(cad);//se guarda la cadena en la varible cad
    while (cad[i] != '\0')//se abre un bucle while para recorrer el programa
    {
        to++;//se incrementa to(total de numeros) esto sumara los valores ingresados para dar el total
        if (islower (cad[i]))
        //se usa islower para saber si una letra es mayuscula o miniscula, si es 1 es miniscula o si es 0 es mayusculas
        mi++;//mi se incrementara cad vez que se encuentre una letra minsicula
        else
        if (isupper(cad[i]))//se usa isupper para saber si una letra es mayusculas, si es mayusculas es 1 y 0 si es lo contrario
        ma++;//se incrementa ma cada vez que se encuentre una letra mayusculas
        i++;//se incrementa I independientemente si es mayuscula o miniscula
    }
    printf("\n\nNumero de letras minisculas: %d", mi);//se imprime el total de letras minisculas
    printf("\n/nNumero de letras mayusculas: %d", ma);//se imprime el total de letras mayusculas
    printf("\n\nTotal de caracteres introducidos: %d", to);//se imprime el total de letras
}