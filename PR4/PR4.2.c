# include <stdio.h>
/* Mayor divisor.
El programa, al recibir como dato un número entero positivo, calcula
➥ su mayor divisor. */
int mad(int); /* Prototipo de función. */
void main(void)
{
    int NUM, RES; //declaramos las variables
    printf("\nIngresa el numero: ");//solicitamos ingresar un numero
    scanf("%d" , &NUM);// Leemos el numero ingresado y lo almacenamos en la variable NUM
    RES = mad(NUM);//Llamamos a la funcion mad() para calcular el mayor divisor y los datos se almacenan en RES
    printf("\nEl mayor divisor de %d es: %d", NUM, RES); //imprimimos el resultado
}
int mad (int N1) // definimos la funcion mad
{
    int I = (N1 / 2); //declaramos que I es igual a la variable N1 / 2 
    while (N1 % I)
    I--;
    return I;
    /*Abrimos un bucle while para encontrar el mayor divisor, mientras este no sea divisible 
    por I ira descrementando. Luego retornamos el mayor divisor encontrado.*/
}