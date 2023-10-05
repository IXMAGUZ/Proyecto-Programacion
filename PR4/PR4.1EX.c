# include <stdio.h>
/* Múltiplo.
El programa, al recibir como datos dos números enteros, determina si
➥ el segundo es múltiplo del primero. */
int multiplo(int, int);

int main(void) 
{
    int NU1, NU2, RES;//declaramos las variables
    printf("Ingresa los dos numeros:");//imprimos el texto
    scanf("%d %d", &NU1, &NU2);
    /*Ahora con el scanf, se lee los datos ingresados y se almacenan en las varibles de NU1 y NU2, 
    donde & es la direccion donde se va almacenar, Esto es necesario porque scanf necesita saber dónde
    debe almacenar los valores ingresados por el usuario. %d %d" se utiliza para indicar que se esperan 
    dos números enteros separados por espacio en blanco. */
    RES = multiplo(NU1, NU2);// Aqui Llamamos a la función multiplo y almacenar el resultado en RES
    if (RES)
    
        printf("El segundo numero es multiplo de primero\n");
    else
        printf("El segundo numero no es multiplo del primero");
    // Aqui utilizamos una series de comandos para verificar e imprimir los resultados
}

int multiplo(int N1, int N2) //Definimos la funcion multiplo
{
    int RES;// Verificamos si N2 es un múltiplo de N1
    if ((N2 % N1) == 0)
         RES = 1; // si es multiplo se le asigna 1 a RES
    else
        RES = 0; // Si no es multiplo se le asigna 0 a RES
    return RES; // Devolvemos el resultado (1 o 0) como resultado de la función
}