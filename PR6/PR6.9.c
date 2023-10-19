#include <stdio.h>
/*Lluvias.
El programa, al recibir como datos un arreglo tridimensional que contiene 
informacion sobre lluvias, genera informacion estadistica.*/
const int PRO = 24;
const int MES = 12;
const int AÑO = 10;
//se declaran constantes con sus respectivos valores
void Lectura(float [PRO][MES][AÑO], int, int, int);
void Funcion1(float [PRO][MES][AÑO], int, int, int);
void Funcion2(float [PRO][MES][AÑO], int, int, int);
void Funcion3(float [PRO][MES][AÑO], int, int, int);
//se declaran una serie de prototipos de funciones las cuales tienen un papel diferente a lo largo del programa

void main(void)//Aqui empieza la funcion principal
{
    float LLU[PRO][MES][AÑO];//se declara un arreglo tridimensional
    Lectura(LLU, PRO, MES, AÑO);
    Funcion1(LLU, PRO, MES, AÑO);
    Funcion2(LLU, PRO, MES, AÑO);
    Funcion3(LLU, PRO, MES, AÑO);
}
void Lectura(float A[][MES][AÑO], int F, int C, int P)//Aqui empieza la funcion Lectura
{
    int K, I, J;//se declaran tres variables
    for ( K = 0; K < P; K++)
    for ( I = 0; I < F; I++)
    for ( J = 0; J < C; J++)
    {
        printf("Año: %d\tProvincia: %d\tMes: %d", K+1, I+1, J+1);//se solicita el año, la provincia y el mes
        scanf("%f", &A[I][J][K]);//se guarda en la memoria del Arreglo
    }
}
void Funcion1(float A[][MES][AÑO], int F, int C, int P)//aqui empieza la funcion1, esta encuentra la provincia con mayor registro de lluvia
{
    int I, K, J, EMAY = -1;
    float ELLU, = -1.0, SUM;
    for ( I = 0; I < F; I++)
    {
        SUM = 0.0;
        for ( K = 0; K < P; K++)
        for ( J = 0; J < C; J++)
        SUM += A[I][J][K];
        SUM /= P * C;
        if (SUM > ELLU)
        {
            ELLU = SUM;
            EMAY = I;
        }
    }
    printf("\nProvincia con mayor registro de lluvias: %d", EMAY+1);//se imprime un mensaje con la provincia con mayor registro de lluvia
    printf("\nRegistro: %.2f", ELLU);//se imprime el numero de registro
}
void Funcion2(float A[][MES][AÑO], int F, int C, int P)//aqui empieza la funcion 2, esta encuentra la de menor registro de lluvia
{
    int I, J, EMEN;//se declaran tres variables de caracter entero
    float ELLU = 1000, SUM;//se declaran dos variables de caracter real
    for ( I = 0; I < F; I++)
    {
        SUM = 0;
        for ( J = 0; J < C; J++)
        SUM += A[I][J][P-1];
        SUM /= C;
        if (SUM < ELLU)
        {
            ELLU = SUM;
            EMEN = I;
        }
    }
    printf("\n\nProvincia con menor registro anual de lluvias en el ultimo año: %d", EMEN+1);//se imprime la provincia con menor registro de lluvia
    printf("\nRegistro anual: %.2f", ELLU);//se imprime el numero de registro
}
void Funcion3(float A[][MES][AÑO], int F, int C, int P)//Aqui empieza la funcion 3
{
    int J, EMES = -1;//se declaran dos variables de caracter entero
    float ELLU = -1.0;//se declara una variable de caracter real
    for ( J = 0; J < C; J++)
    {
        if (A[F-1][J][P-1] > ELLU)
        {
            ELLU = A[F-1][J][P-1];
            EMES = J;
        }
        
    }
    printf("\n\nMes: %d Lluvias: %.2f", EMES+1,ELLU);
}