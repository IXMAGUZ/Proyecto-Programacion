#include <stdio.h>
#include <math.h>

/* Par, impar o nulo.
NUM: variable de tipo entero. */

void main(void)
//Este es el punto de inicio de ejecución del Programa//
{
      int NUM;
    //Aqui estamos definiendo una variable de valor entero//
    printf("ingrese el numero: ");
    scanf("%d" , &NUM);
    /*aqui la computadora nos imprimera un texto al cual tendremos que responder 
    con un numero, para eso printf y scanf, en scanf podemos ver %d con esto es el operador de dirección,
    el cual nos indica que el numero que ingresemos se guardara ahi, luego &NUM estoes para obtener
    la direccion de memoria para que scanf pueda modificarla.*/
    if (NUM == 0)
    printf("\nNulo");
    //Aqui estamos usando el comando if que nos dice si el numero que ingresamos es igual a cero, imprime Nulo//
    
    else
        if (pow (-1, NUM) > 0)
            printf("\nPar");
        else
            printf("\nImpar");
    /*Aqui podemos ver una serie de operadores logicos, else es el contrario de if. si el numero que introducimos
    es mayor que cero entonces seguimos si(if), pow esto es potencia, lo que esta dentro del parentesis es el numero
    y luego la potencia, en este caso (-1 , NUM), si el -1 se eleva al numero que ingresamos y es mayor que cero es Par,
    luego otro else, que si no es asi (< 0), es Impar. */
}