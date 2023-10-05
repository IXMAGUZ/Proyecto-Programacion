#include <stdio.h>

// Prototipo de función para calcular la productoria de los N primeros números naturales
int Productoria(int);

void main(void)
{
    int NUM; //Declaramos la variable NUM
    do// Utilizamos un bucle do-while para verificar que el número ingresado sea válido (entre 1 y 100)
    {
        printf("Ingresa el numero del cual quieres calcular la productoria: "); //Solicitamos los numeros que queremos calcular
        scanf("%d", &NUM);//leemos y guardamos los datos en la direccion de la variable NUM
    } while (NUM > 100 || NUM < 1); // El bucle se repetirá mientras NUM esté fuera del rango válido.
    printf("\nLa productoria de %d es: %d", NUM, Productoria(NUM));
    // Mostramos la productoria de N utilizando la función Productoria()
}
int productoria(int N) //Declaramos la funcion para calcular la productoria de N
{
    int I, PRO = 1; 
    
    //Utilizamos un bucle for para calcular la productoria de los N primeros números naturales
    for (I = 1; I < N; I++)
    {
        PRO *= I; // Multiplica PRO por I en cada iteración
    }
    return PRO;// Devuelve el resultado de la productoria
}