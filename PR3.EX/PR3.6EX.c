#include <stdio.h>

/*Fibonacci.
El programa calcula y escribe los primeros 50 numeros de Fibonacci*/

void main(void)
{
    int I, PRI = 0, SEG = 1, SIG;//declaramos las variables y sus valores
    printf("\t %d \t %d" , PRI, SEG);// Imprimos los valores de PRI Y SEG, previamentes declarados. Por columnas.
    for ( I = 3; I < 50; I++)
    {
        SIG = PRI + SEG;
        PRI = SEG;
        SEG = SIG;
        printf("\t %d" , SIG);
    }
    /*Abrimos un bucle for, este se utiliza para comenzar a contar numeros desde el 3 hasta el 50
    sumando los valores actuales de PRI y SEG. Luego, PRI se actualiza con el valor de SEG y SEG se actualiza con el valor de SIG.
    Estos valores se van imprimiendo por columnas por el tabulador.*/
}