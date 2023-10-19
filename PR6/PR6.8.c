#include <stdio.h>
/*Casa de bolsa.
El programa al recibir como datos los precios mensuales de las acciones de sus cincos
fondos de inversion, ademas del precio de las acciones al 31 de diciembre
del 2003, genera informacion estadistica importante para la empresa.*/
void LecturaM(float [][12], int, int);
void LecturaV(float *, int);
void F1(float [][12], int, int, float *, float *);
void F2(float [][12], int, int);
void F3(float *, int);
//se declaran prototipos de funciones, estas tendran diferentes papeles a lo largo del programa

void main(void)//Aui inicia la funcion principal
{
    float FON[5][12], PRE[5], REN[5];//se declaran dos arreglos de caracter real
    LecturaM(FON, 5, 12);//se llama a la funcion lecturaM
    LecturaV(PRE, 5);//se llama a la funcion LecturV
    F1(FON, 5, 12, PRE, REN);//Se llama a la funcion F1
    F2(FON, 5, 12);//Se llama a la funcion F2
    F3(REN, 5);//Se llama a la funcion F3
}
void LecturaM(float A[][12], int F, int C)//Aqui comienza la funcion Lectura
{
    int I, J;//se declaran dos variables de caracter entero
    for ( I = 0; I < F; I++)
    /*Este bucle itera a traves de las filas de la matriz, I actua como un contandor, comienza en 0 
    y se incrementa hasta que I sea menor que el numero de fondos*/
    for ( J = 0; J < C; J++)
    /*este itera a traves de las columnas de la matriz, J actua como un contandor, empieza en 0 y se incrementa 
    hasta que J sea menor que el numero de veces.*/
    {
        printf("Precio fondo %d\t mes %d:", I+1, J+1);
        scanf("%f", &A[I][J]);
    }//se solicita ingresar un precio de fondo y se guarda en el arreglo A
}
void LecturaV(float A[], int T)//Aqui empieza la funcion LecturaV
{
    int I;//se declara una variable de caracter entero
    printf("\n");
    for ( I = 0; I < T; I++)//se abre un bucle for, al igual que los demas este tambien actua como contador
    {
        printf("Precio fondo %d al 31/12/2003:", I+1);//se solicita el precio de una fecha en especifica
        scanf("%f", &A[I]);//se guarda en la direccion de la memoria del arreglo A
    }
}
void F1(float A[][12], int F, int C, float B[], float V[])//aqui empieza la funcion F1
{
    int I;//se declara una variale de caracter entero
    printf("\nRENDIMIENTOS ANUALES DE LOS FONDOS");//se imprime que en este programa dara a aconocer los rendimientos de los fondos
    for ( I = 0; I < F; I++)
    {
        V[I] = (A[I][C-1] - B[I]) / B[I] * 100;
        printf("\nFondo %d: %.2f", I+1, V[I]);
    }
}
void F2(float A[][12], int F, int C)//Aqui empieza la funcion F2
{
    int I, J;//se declaran dos variables de caracter entero
float SUM, PRO;//se declaran dos variables de caracter real
printf("\n\nPROMEDIO ANUALIZADO DE LAS ACCIONES DE LOS FONDOS");//se imprime un mensaje
for(I=0; I<F; I++)
{
SUM = 0;//se iguala la variable SUMA a 0
for(J=0; J<C; J++)//se abre un bucle for
SUM += A[I][J];//SUMA sera igual a los valores del arreglo A
PRO = SUM / C;//se calcula el promedio dividiendo SUM / C
printf("\nFondo %d: %.2f", I+1, PRO);//se imprime el resultado
}
}
void F3(float A[], int F)//Aqui empieza la funcion F3
{
    float ME = A[0], PE = A[0];//se declaran dos arreglos
    int M = 0, P = 0, I;//se declaran 3 variables con sus respectivos valores
    for ( I = 0; I < F; I++)//se abre un bucle for
    {
      if (A[I] > ME)//si el arrego es mayor que la el arreglo ME 
      {
        ME = A[I];//entonces este cambia su valor 
        M = I;// M se iguala a I
      }
      if (A[I] < PE)//si el arreglo es menor que PE
      {
        PE = A[I];//entonces PE se iguala al arreglo A
        P = I;// P se iguala a I
      }
    }
    printf("\nMEJOR Y PERO FONDO DE INVERSION");
    printf("\nMejor fondo: %d\tRendimiento: %6.2f", M+1, ME);
    printf("\nPeor fondo: %d\tRendimiento: %6.2f", P+1, PE);
     //se imprime tanto el mejor y el peor fondo de inversion

}
