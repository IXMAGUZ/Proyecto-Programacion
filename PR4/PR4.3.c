# include <stdio.h>
/* Máximo común divisor.
El programa, al recibir como datos dos números enteros, calcula el máximo
➥ común divisor de dichos números. */
int mcd(int, int);
void main(void)
{
    int NU1, NU2, RES; //Declaramos las variable
    printf("\nIngresa los dos numeros: ");//solicitamos ingresar los dos numeros
    scanf("%d %d", &NU1, &NU2);//leemos y guardamos los numeros en las variables NU1 y NU2
    RES = mcd(NU1, NU2); // Llamamos a la función mcd() para calcular el MCD de NU1 y NU2
    printf("\nEl maximo comun divisor de %d y %d es: %d:", NU1, NU2, RES); //Mostramos al resultado de la operacion
}

int mcd(int N1, int N2)
// Esta función se utiliza para calcular el mcd(Minimo comun divisor) de dos números
{
    int I; //Declaramos las variables I
    if (N1 < N2)
        I= N1 / 2;
    else
        I = N2 / 2;
        // Aqui determinamos con un if y un else el valor inicial I
    while ((N1 % I) || (N2 % I))
    {
        I--;
    }
    // Aqui utilizamos un bucle While para encontrar el mcd.
    return I;// retornamos el mcd que encontramos.
}