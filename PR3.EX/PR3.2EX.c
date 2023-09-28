#include <stdio.h>

/*Serie.
El programa imprime los terminos y obtiene la suma de una determinada serie.

I, SEE Y CAM: variable de tipo entero. */

void main(void)
{
    int I = 2, CAM = 1;
    long long SSE = 0;
    // definimos las variables
    while (I <= 2500)
    //Generamos un bucle while, que mientras I no sea menor de 2500 se repetira el ciclo.
    {//Esta llave esta aqui para que el bucle while sepa que lo que se estara repitiendo sera lo que esta adentro.
        SSE =SSE + I;//Aqui estamos diciendole que SSE que es una variable entera sera igual a ella mas la suma de I.
        printf("\t %d" , I);// Luego imprimimos el valor actual de I.
        if (CAM)// Verificamos el valor de CAM (es 1 o no).
        {
            I += 5; 
            CAM--;
            //mientras que incrementamos I a 5, al mismo tiempo descrementamos CAM en 1.
        }
        else
        {
           I += 5;
           CAM--;
           //mientras que incrementamos I a 5, al mismo tiempo incrementamos CAM en 1.
        }
    }
    printf("\nLa suma de la serie es: %ld" , SSE);
    // Imprime la suma total de la serie hasta 2500.
    
}