#include <stdio.h>

/*Examen de admision.
El programa, al recibir como datos una serie de calificaciones de un examen,
obtiene el rango en que se encuentran esta.

R1, R2, R3, R4, Y R5: variable de tipo entero.
CAL: variable de tipo real. */

void main(void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
    float CAL;
    //Definimos las variables
    printf("\nIngresa la calificacion del alumno:");
    scanf("%f" , &CAL);
    //Los datos que ingresemos se almacenan en la memoria de CAL
    while (CAL != -1)
    {
        if (CAL < 4)
            R1++;
        else
            if (CAL < 6)
             R2++;
        else 
            if (CAL < 9)
              R4++;
        else
            R5++;
         printf("ingresa la calificacion del alumno:");
        scanf("%f", &CAL);
        /*Se utiliza un bucle while para continuar solicitando calificaciones hasta que se ingrese un valor igual a -1. Dentro del bucle, 
        utilizamos una serie de declaraciones if y else para determinar en qué rango de calificación se encuentra la calificación 
        ingresada y se incrementa la variable correspondiente (R1, R2, etc.) en función del rango.*/
     }
    printf("\n0..3.99 = %d", R1);
    printf("\n4..5.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10   = %d", R5);
   //el programa imprime la cantidad de calificaciones en cada rango utilizando las variables R1, R2, R3, R4, y R5. 
}