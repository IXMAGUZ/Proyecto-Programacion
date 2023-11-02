#include <stdio.h>
#include <string.h>
/*Vendedores.
El programa maneja informacion sobre las ventas que realizan los vendedores de 
Articulos domesticos de una importante empresa de la ciudad de Mexico.*/
typedef struct 
{
    char noba[10];
    char nucu[10];
}Banco;
typedef union 
{
    Banco che;
    Banco nomi;
    char venta;
}fpago;
typedef struct 
{
    char cnu[20];
    char col[20];
    char cp[5];
    char ciu[15];
}domicilio;
typedef struct 
{
    int num;
    char nom[20];
    float ven[12];
    domicilio domi;
    float sal;
    fpago pago;
    int cla;
}Vendedor;
void Lectura(Vendedor *, int);
void F1(Vendedor *, int);
void F2(Vendedor *, int);
void F3(Vendedor *, int);
void F4(Vendedor *, int);
void main(void)
{
    int TAM;
    Vendedor VENDEDORES[100];
    do
    {
        printf("Ingrese el numero de vendedores:");
        scanf("%d", &TAM);
    } while (TAM > 100 || TAM < 1);
    Lectura (VENDEDORES, TAM);
    F1(VENDEDORES, TAM);
    F2(VENDEDORES, TAM);
    F3(VENDEDORES, TAM);
    F4(VENDEDORES, TAM);
    printf("\n\tFIN DEL PROGRAMA");
}
void Lectura(Vendedor A[], int T)
{
    int I, J;
    for ( I = 0; I < T; I++)
    {
        printf("\n\tIngrese datos del vendedor %d", I + 1);
        printf("\nNumero de vendedor:");
        scanf("%d", &A[I].num);
        printf("Nombre del vendedor:");
        fflush(stdin);
        gets(A[I].nom);
        printf("Ventas del año: \n");
        for ( J = 0; J < 12; J++)
        {
            printf("\tMes %d: ", J+1);
            scanf("%f", &A[I].ven[J]);
        }
        printf("Domicilio del vendedor: \n");
        printf("\tCalle y numero: ");
        fflush(stdin);
        gets(A[I].domi.cnu);
        printf("\tColonia: ");
        fflush(stdin);
        gets(A[I]. domi.col);
        printf("\tCodigo postal:");
        fflush(stdin);
        gets(A[I].domi.cp);
        printf("\tCiudad:");
        fflush(stdin);
        gets(A[I].domi.ciu);
        printf("Salario del vendedor:");
        scanf("%f", &A[I].sal);
        printf("Forma de pago (Banco-1 nomina-2 ventanilla-3):");
        scanf("%d", &A[I].cla);
        switch (A[I].cla)
        {
        case 1:
        {
            printf("\tNombre del banco: ");
            fflush(stdin);
            gets(A[I].pago.che.noba);
            printf("\tNumero de cuenta:");
            fflush(stdin);
            gets(A[I].pago.che.nucu);
        }
        break;
        case 2:
        {
            printf("\tNombre del banco:");
            fflush(stdin);
            gets(A[I].pago.nomi.noba);
            printf("\tNumero de cuenta:");
            fflush(stdin);
            gets(A[I].pago.nomi.nucu);
        }
        break;
        case 3: A[I].pago.venta = 'S';
        break;
        }
    }
}
void F1(Vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tVentas totales de los vendedores");
    for ( I = 0; I < T; I++)
    {
        printf("\nVendedor: %d", A[I].num);
        SUM = 0.0;
        for ( J = 0; J < 12; J++)
        SUM += A[I].ven[J];
        printf("\nVentas: %.2f\n", SUM);
        }
}
void F2(Vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tIncremento a los vendedores con ventas > 1,500,000$");
    for ( I = 0; I < T; I++)
    {
        SUM = 0.0;
        for ( J = 0; J < T; J++)
        SUM += A[I].ven[J];
        if (SUM > 1500000.00)
        {
            A[I].sal = A[I].sal * 1.05;
            printf("\nNumero de empleado: %d\nVentas: %.2f\nNuevo salario: %.2f",A[I].num, SUM, A[I].sal);
        }
    }
}
void F3(Vendedor A[], int T)
{
    int I, J;
    float SUM;
    printf("\n\t\tVendedpres con ventas < 300,000");
    for ( I = 0; I < T; I++)
    {
        SUM = 0.0;
        for ( J = 0; J < 12; J++)
        SUM += A[I].ven[J];
        if (SUM < 300000.00)
        printf("\nNumero de empleado: %d\nNombre: %s\nVentas: %.2f", A[I].num, A[I].nom, SUM);                     
    }
}
void F4(Vendedor A[], int T)
{
    int I;
    float SUM;
    printf("\n\t\tVendedores con cuenta en el Banco");
    for ( I = 0; I < T; I++)
    if (A[I].cla == 1)
    printf("\nNumero de vendedor: %d\nBanco♣8 %s\nCuenta: %s", A[I].num, A[I].pago.che.noba, A[I].pago.che.nucu);
}    




