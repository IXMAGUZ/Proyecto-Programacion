#include <stdio.h>

// Prototipo de función para determinar el rango de calificación
void Rango(int);

int RA1 = 0;
int RA2 = 0;
int RA3 = 0;
int RA4 = 0;
int RA5 = 0;
//Declaramos las variables y sus respectivos valores
void main (void)
{
    float CAL; //Declaramos las variables con valores enteros.
    printf("Ingresa la primera calificacion del alumno: "); //Solicitamos las primeras calificaciones
    scanf("%f", &CAL);//Leemos y guardamos los datos enteros en la variable CAL

    while (CAL != -1)//Abrimos un bucle donde la calificacion tiene que ser diferente de -1, si no, no imprime nada 
    {
        Rango(CAL);
        printf("Ingresa la siguiente calificacion del alumno (-1 para terminar):");
        scanf("%f", &CAL);
        //Solicitamos la calificacion del alumno y la guardamos en la variable CAL
    }
    printf("0..3.99 = %d\n", RA1);
    printf("4..5.99 = %d\n", RA2);
    printf("6..7.99 = %d\n", RA3);
    printf("8..8.99 = %d\n", RA4);
    printf("9..10 = %d\n", RA5);
    //Imprimimos las diferentes calificaciones de cada rango
}

void Rango(int VAL)
//Esta función se usa para determinar el rango de una calificación y actualizar las variables globales
{
    if (VAL >= 0 && VAL < 4)
    {
        RA1++;
    }
    else if (VAL < 6)
    {
        RA2++;
    }
    else if (VAL < 8)
    {
        RA3++;
    }
    else if (VAL < 9)
    {
        RA4++;
    }
    else if (VAL <= 10)
    {
        RA5++;
    }
   /*En este proceso lo que se hay es un juego de operaciones logicas donde si la variable
   val dependiendo de su valor entonces la variable RAL tendra un incremento x.*/ 
}