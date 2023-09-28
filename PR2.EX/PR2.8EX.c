#include <stdio.h>

/*Empresa textil.
El programa, al recibir como datos decisivos la categoria y antiguedad de
un empleado, determina si el mismo reune las condiciones establecidad
por la empresa para ocupar un nuevo cargo en una sucursal.

CLA, CAT, ANT, RES: variable de tipo entero.
SAL: variable de tipo real. */

void main(void)
{
    int CLA, CAT, ANT, RES;
    // definimos las variables como numeros enteros
    printf("\nIngrese la clave, categoria y antiguedad del trabajador: ");
    scanf("%d %d %d" , &CLA, &CAT, &ANT);
    /*Aqui estamos diciendole que primero nos imprima un texto luego con scanf estamos diciendole que escane esos numeros 
     y con %d que lo guarde. luego con &CLA, &CAT Y &ANT estamos diciendole que obtenga la direccion de memoria para que scanf 
     pueda modificarla*/
    switch (CAT)
    {
    case 3:
    case 4: if (ANT >= 5)
                RES = 1;
            else
                RES = 0;
        break;
    case 2: if (ANT >= 7)
                RES = 1;
            else
                RES = 0;
            break;
    default: RES = 0;
        break;
    /*Esta serie de codigos es lo que se llama swich, funciona como un selector el cual dependiendo del case (caso) 
    tomara acciones si ningunos de los casos son correspondientes, entonces el default se encargura de que la variable
    RES tenga un valor especifico en este caso 0*/
    } 
    if (RES = 1)
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto" , CLA);
    else
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto" , CLA);
    //Aqui dependiendo de los resultados se imprime un texto. Si RES es igual a 1 imprime la primera linea, si no la segunda
}

