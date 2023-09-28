#include <stdio.h>
#include <math.h>

/* Calculo de P.
El programa obtiene el valor de P aplicando una serie determinada.

I, B, C: Variables de tipo entero.
RES: variable de tipo real de doble presici�n.*/


void main(void)
{
    int I = 1, B = 0, C;
    double RES; 
    // definimos las variables con sus respectivos valores
    RES = 4.0 / I;
    C = 1;
    //Aqui declaramos que RES es igual a 4.0 / I y que C = 1
    while ((fabs (3.1415 - RES)) > 0.0005)
    {
        I += 2;
        if (B)
        {
            RES += (double) (4.0 / I);
            B = 0;
        }
        else
        {
            RES -= (double) (4.0 / I);
            B = 1;
        }
        C++;
    }
    printf("\nNumero de terminos: %d" , C);
    /*colocamos en un bucle while hasta que la diferencia absoluta entre la aproximación calculada de π (RES) y π con precisión de 4 decimales sea menor o igual a 0.0005.
En cada iteración, actualiza I (denominador) sumándole 2 y alterna entre sumar y restar el término 4.0 / I a RES según el valor de B.
Incrementa C (contador de términos).
Una vez que se alcanza la precisión deseada, el bucle se detiene.
Imprime el número de términos utilizados (C) para calcular π con precisión de 4 decimales. No se utiliza una declaración return al final de main.




*/
    
}