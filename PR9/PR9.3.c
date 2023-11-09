#include <stdio.h>
#include <ctype.h>
/*Letras minisculas y mayusculas.
el programa, al recibir como datos un archivo formado por cadenas de caracteres
determina el numero de letras minisculas y mayusculas que hay en el archivo*/
void minymay(FILE *);
void main(void)
{
    char p;
    FILE *ar;
    if ((ar = fopen("arc5.txt", "r")) != NULL)
    {
        minymay(ar);
        fclose(ar);
    }
    else
    printf("no se pudo abrir el archivo");
}
void minymay(FILE *arc)
{
    int min = 0, may = 0;
    char p;
    while (!feof(arc))
    {
        p = fgetc(arc);
        if (islower(p))
        min++;
        else
        if (isupper(p))
        may++;
    }
    printf("\nNumero de minisculas: %d", min);
    printf("\nNumero de mayusculas: %d", may);
}