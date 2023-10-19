#include <stdio.h>
/*Empresa textil.
El programa, al recibir un arreglo tridimensional que contiene informacion 
sobre las ventas mensuales de tres departamentos en los ultimos ocho años,
genera informacion estadistica valiosa para la empresa.  */
const int MES = 12;
const int DEP = 3;
const int AÑO = 8;
//se declaran tres constantes con sus respectivos valores
void Lectura(float [MES][DEP][AÑO], int, int, int);
void Funcion1(float [MES][DEP][AÑO], int, int, int);
void Funcion2(float [MES][DEP][AÑO], int, int ,int);
void Funcion3(float [MES][DEP][AÑO], int, int, int);
//se declaran una serie de prototipos los cuales tendran un papel diferente en el programa
void main(void)//Aqui empieza la funcion principal
{
    float PRO[MES][DEP][AÑO];//se declara un Arreglo de caracter real
    Lectura(PRO, MES, DEP, AÑO);
    Funcion1(PRO, MES, DEP, 2);
    Funcion2(PRO, MES, DEP, AÑO);
    Funcion3(PRO, MES, DEP, AÑO);
}
void Lectura(float A[][DEP][AÑO], int F, int C, int P)//Aqui empieza la funcion Lectura
{
    int K, I, J;//se declaran tres variables
    for ( K = 0; K < P; K++)
    for ( I = 0; I < F; I++)
    for ( J = 0; J < C; J++)
    {
        printf("Año: %d\tMes: %d\tDepartamento: %d", K+1, I+1, J+1);//se solicita el mes, año y departamento
        scanf("%f", &A[I][J][K]);//se guarda en la direccion de memoria del arreglo tridimensional
    }
}
void Funcion1(float A[][DEP][AÑO], int F, int C, int P)//Aqui empieza la funcion 1
{
    int I, J;//se declaran dos variables de caracter entero
    float SUM = 0.0;//se declara una variable de caracter real
    for ( I = 0; I < F; I++)
    for ( J = 0; J < C; J++)
    SUM += A[I][J][P-1];
    printf("\n\nVentas totales de la empresa en el segundo año: %.2f", SUM);//se imprime las ventas totales
}
void Funcion2(float A[][DEP][AÑO], int F, int C, int P)//Aqui empieza la funcion 2
{
    int I, J;//se declaran dos variables de caracter entero
    float SUM1 = 0, SUM2 = 0, SUM3 = 0;//se declaran tres variables de caracter real,
    for ( I = 0; I < F; I++)
    for ( J = 0; J < C; J++)
    switch (J+1)//se abre un switch dependiendo del resultado de un caso, este tendra una repuesta
    {
    case 1: SUM1 += A[I][J][P-1];
        break;
    case 2: SUM2 += A[I][J][P-1];
        break;
    case 3: SUM3 += A[I][J][P-1];
    break;
    }
    if (SUM1 > SUM2)
    if (SUM1 > SUM3)
    {
        printf("\n\nDepartamento con mayores ventas en el ultimo año: Hilos");
        printf("ventas:%.2f", SUM1);
    }
    //si la SUM1 es mayor que las otras imprime esto
    else
    {
        printf("\n\nDepartamento con mayores ventas en el ultimo año: Licra");
        printf("Ventas:%.2f", SUM3);
    }
    //pero si no imprime esto
    else
    if (SUM2 > SUM3)
    {
        printf("\n\nDepartamentos con mayores ventas en el ultimo año: Lanas");
        printf("Ventas:%.2f", SUM2);
    }
    //si la SUM2 es mayor que sum3, entonces imprime el siguiente mensaje
    else
    {
        printf("\n\nDepartamento con mayores ventas en el ultimo año: Licra");
        printf("Ventas: %.2f", SUM3);
    }
    //si no, imprime este
}
void Funcion3(float A[][DEP][AÑO], int F, int C, int P)//Aqui empieza la funcion 3
{
    int K, I, J, DE, ME, AN;//se declaran variables de caracter entero
    float VEN = -1.0;//se declara una variable de caracter real
    for ( K = 0; K < P; K++)
    for ( I = 0; I < F; I++)
    for ( J = 0; J < C; J++)
    if (A[I][J][K]> VEN)//si el arreglo es mator que la variable VEN
    {
        VEN = A[I][J][K];//VEN sera igual al arreglo
        DE = J;
        ME = I;
        AN = K;
        //las siguientes variable seran iguales a cada valor del arreglo
    }
    printf("\n\nDepartamentos: %d\tMes: %d\tAño: %d", DE+1, ME+1, AN+1);
    printf("\tVentas: %.2f", VEN);
    //se imprime los resultados y las ventas
}