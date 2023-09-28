#include <stdio.h>
#include <math.h>
/*Igualdad de expresiones.
El programa, al recibir como datos T, P y N, comprueba la igualdad de
una expresion determinada.

T, P y N: variables de tipo entero.*/

void main(void)
//Este es el punto de inicio de ejecución del Programa//
{
    int T, P, N;
    //Aqui declaramos variables de tipo entero//
    printf("\nIngrese los valores de T, P, N: ");
    scanf("%d %d %d" , &T, &P, &N);
    /*Aqui estamos diciendole que primero nos imprima un texto luego con scanf estamos diciendole que escane esos numeros 
     y con %d que lo guarde, porque hay tres, porque son tres valores que tenemos que ingresar. luego con &t &P &N
     estamos diciendole que obtenga la direccion de memoria para que scanf pueda modificarla*/
    if (P!= 0)
    //Aqui estamos diciendo que si P es diferente de 0 ejecuta lo que sigue//
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
           printf("\nSe comprueba la igualdad");
        else 
        printf("\nNo se comprueba la igualdad");
    }
    /*Dentro del primer if, se realiza la comprobación de igualdad de dos expresiones. 
    Se calcula la potencia de T dividido por P a la potencia N, como, por el comando Pow, luego, se compara si es igual a la potencia
    de T a la potencia N dividida por la potencia de P a la potencia N. Si son iguales, se muestra "Se comprueba la igualdad"; 
    de lo contrario, se muestra "No se comprueba la igualdad".*/
    else
        printf("\nP tiene que ser diferente de cero ");
    /*Si aun asi P es igual al 0, entonces se muestra el mensaje*/
}