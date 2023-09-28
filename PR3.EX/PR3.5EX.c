#include <stdio.h>
#include <math.h>

/* Serie de ULAM
El programador, al recibir como dato un entero positivo, obtiene y escribe
la serie de ULAM

NUM: Variable de tipo entero,*/

void main(void)
{
    int NUM;//definimos la variable
    printf("Ingresa el numero para calcular la serie: ");//mandamos un mensaje para que ingresemos un numero
    scanf("%d" , &NUM);//Luego escaneamos el numero y se deposita en la memoria de la variable NUM
    if (NUM > 0)//abrimos un if, con el cual le decimos que la variable NUM tiene que ser mayor a cero
    {
        printf("\nSerie de ULAM\n");//mandamos un mensaje para que la persona sepa que comenzo a contar la serie de ULAM 
        printf("%d \tN ", NUM);// mandamos otro mensaje pero este caso imprimira el numero que calculamos y tiene un \t que funciona como tabulador
        while (NUM != 1)//abrimos un bucle while que mientras el valor que NUM no sea diferente o igual a 1. tiene que repetir el ciclo
        {
            if (pow(-1, NUM) > 0)
                NUM = NUM / 2;
            else
                NUM = NUM * 3 + 1;
            printf ("%d \t" , NUM);
        }
        /*junto con el while podemos ver declaraciones de if y else, que tienen la funcion, de que si nuestra variable NUM elevandola a -1 nos da mayor que 0, 
        entonces NUM va hacer igual a ella mismo / 2 si no es el caso y la variable NUM elevandola a -1 da menos o igual de cero, se multiplicara * 3 y se le sumara 1.
        Luego tenenmos un printf que imprimira el nuevo valor de NUM pero en columnas, por el tabuldor (\t). */ 
    }
    printf("\nNUM debe ser un entero positivo");//imprimimios un mensaje de que NUM debe ser un entero positivo.
}