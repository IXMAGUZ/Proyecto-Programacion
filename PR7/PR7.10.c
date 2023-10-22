#include <stdio.h>
#include <string.h>
int longitud(char *cad);//se declara un prototipo de una funcion
void main(void)//Aqui comienza la funcion principal
{
    int i, n, l = -1, p, t;//se declaran variables de tipo entero
    char cad[50], fra[20][50];//se declaran dos arreglos uno unidimensional y otro bidimensional
    printf("\nIngrese el numero de filas del arreglo:");//se solicita el numero de filas
    scanf("%d", &n);//se lee y se guarda en la variable n
    for ( i = 0; i < n; i++)//se abre un bucle for para recorrer el arreglo 
    {
        printf("\nIngrese la linea %d de texto. Maximo 50 caracteres:", i+1);//se solicita una linea de texto
        fflush(stdin);//se limpia el bufe
        gets(fra[i]); //se guarda la cadena de caracteres del arreglo fra
    }
    printf("\n");
    for ( i = 0; i < n; i++)//se abre otro bucle for
    {
        strcpy(cad, fra[i]);//en cada iteracion del bucle, se copia el contenido de la cadena fra[i] en la cadena cad.
        t = longitud (cad);//se llama a la funcion longitud con la variable cad y se almacena los resultados en t
        if (t > l)
        {
            l = t;
            p = i;
        }
        //se abre un if si t es mayor que l, entonces l sera igual a t y p sera igual a i
    }
    printf("\nLa cadena con mayor longitud es: ");//se solicita la longitud de la cadena
    puts(fra[p]);//se escribe una cadena de caracteres del arreglo fra
    printf("\nLongitud: %d", l);//se imprime la longitud
}
int longitud(char *cadena)//Aqui empieza la funcion longitud
{
    int cue = 0;//se declara una variable de tipo entero 
    while (! cadena[cue] == '\0')//se abre un bucle while, este se repetira hasta que en el la cadena no haiga mas letra \
    esto hace que se cuente los espacios con caracteres y los espacios vacios, dando la longitud
    cue++;//luego e incrementara 
    return (cue);
}