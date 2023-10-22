#include <stdio.h>
/*Cuenta Caracteres
El programa, al recibir como datos una cadena de caracteres y un caracter
cuantas veces se encuentra el caracter en la cadena*/
int cuenta(char *, char);//prototipo de una funcion
void main(void)//aqui empieza la funcion principal
{
    char car, cad[50];//se declaran una variable de caracter y un arreglo
    int res;//se declara una variable entera
    printf("\nIngrese la cadena de caracteres:");//se solicita ingresar una cadena de caracteres
    gets(cad);//el gets lee los caracteres y los guarda en cad
    fflush(stdin);//se utiliza fflush pata limpiar el buje y que no quede residuos
    printf("\nIngrese el caracter:");//se solicita ingresar el caracter a buscar
    car = getchar();//getchar lee el caracter introducido y lo guarda en la variable car
    res = cuenta(cad, car);// se llama a la funcion cuenta para guardarlo en la variable res
    printf("\n\n%c se encuentra %d veces en la cadena %s", car, res, cad);
}
int cuenta(char *cad, char car)//Aqui comienza la funcion cuenta
{
    int i = 0, r = 0;//se declaran dos variables de caracter entero con un valor de 0
    while (cad[i] != '\0')
    {
      if (cad[i] == car)
      r++;
      i++;
    }
    /*Se abre un bucle while, su funcion es recorrer cada caracter de una cadena, almacenada en 
    cad y cuenta cuántas veces un caracter especifico (car) aparece en esa cadena. */
    return (r);//se devuelve la el valor de r, este representa el numero de veces que el caracter buscado se encontro en la cadena
}