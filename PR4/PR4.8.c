#include <stdio.h>

/* Lluvias.
El programa permite calcular el promedio mensual de las lluvias caídas en
➥ tres regiones importantes del país. Determina también cuál es la región
➥ con mayor promedio de lluvia anual. */

// Prototipo de función para determinar la región con el mayor promedio anual.
void Mayor(float, float, float);

void main(void)
{
    int I;
    float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
    //Declaramos las variables tanto entera como reales
    for (I = 1; I <= 12; I++)//Abrimos un ciclo for donde ingresaremos los datos de la lluvias 
    {
        printf("\n\nIngresa las lluvias del mes %d", I);//Solicitamos que ingrese la cantiddad de lluvias
        printf("\nRegiones Golfo, Pacifico y Caribe:");
        scanf("%f %f %f", &GOL, &PAC, &CAR);
        AGOL += GOL;
        APAC += PAC;
        ACAR += CAR;
        /*Estas líneas acumulan las cantidades de lluvia ingresadas para cada región en las variables AGOL, APAC y ACAR. 
        Se realiza esto en cada iteración del bucle para mantener un seguimiento de las cantidades totales de lluvia para cada región.*/
    }
    printf("\n\nPromedio de lluvias Región Golfo: %6.2f", (AGOL / 12));
    printf("\nPromedio de lluvias Región Pacífico: %6.2f", (APAC / 12));
    printf("\nPromedio de lluvias Región Caribe: %6.2f \n", (ACAR / 12));
     // Se calcula y se muestra el promedio de lluvias para cada región.

    Mayor(AGOL, APAC, ACAR);// Se usa la función Mayor para determinar la región con el mayor promedio anual.
}
void Mayor(float R1, float R2, float R3)
//Se declara esta función para determinar la región con el mayor promedio de lluvia anual.
{
    if (R1 > R2)
    {
        if (R1 > R3)
            printf("\nRegion con mayor promedio: Region Golfo. Promedio: %6.2f", R1 / 12);
        else
            printf("\nRegión con mayor promedio: Región Caribe. Promedio: %6.2f", R3 / 12);
    }
    else
     {
        if (R2 > R3)
            printf("\nRegión con mayor promedio: Región Pacífico. Promedio: %6.2f", R2 / 12);
        else
            printf("\nRegión con mayor promedio: Región Caribe. Promedio: %6.2f", R3 / 12);
    }
    /*Aqui se observan una serie de If y else que funcionan para saber que datos van a imprimir
    si la variable R1 es mayor que la variable R2 y mayor que R3, entonces imprimira un resultado X, si no imprimira otro resultado.*/
}