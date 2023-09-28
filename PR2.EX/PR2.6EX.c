#include <stdio.h>

/* Telefono.
El programa, al rescibir como datos la clave de la zona geografica y el
numero de segundos de una llamada telefonica, calcula el costo de la misma.

CLA y TIE: variable de tipo entero.
COS: variable de tipo real.*/

 void main(void)
 //Este es el punto de inicio de ejecución del Programa//
 {
    int CLA, TIE;
    float COS;
    // Aqui declaramos dos variables dos reales  y otra entera//
    printf("Ingrese la clave y el tiempo: ");
    scanf("%d %d" , &CLA, &TIE);
    /*Aqui estamos diciendole que primero nos imprima un texto luego con scanf estamos diciendole que escane esos numeros 
     y con %d que lo guarde. luego con &CLA Y &TIE estamos diciendole que obtenga la direccion de memoria para que scanf 
     pueda modificarla*/
    switch (CLA)
    //Swich se utiliza para tomar decisiones basadas en el valor de una expresión o variable.//
    {
    case 1: COS = TIE * 0.13 / 60; break;
    case 2: COS = TIE * 0.11 / 60; break;
    case 5: COS = TIE * 0.22 / 60; break;
    case 6: COS = TIE * 0.19 / 60; break;
    case 7: 
    case 9: COS = TIE * 0.17 / 60; break;
    case 10: COS = TIE * 0.20 / 60; break;
    case 15: COS = TIE * 0.29 / 60; break;
    case 20: COS = TIE * 0.28 / 60; break;
    default : COS = -1; break;
   /*En este case se utiliza una estructura switch para calcular el costo de la llamada (COS) 
   en función de la clave de la zona geográfica (CLA). Cada caso representa una 
   clave de zona diferente y tiene una fórmula para calcular el costo en función del 
   tiempo de llamada (TIE). Si la clave no coincide con ningún caso, pos se establece COS en 
   -1 como un valor de error.*/
    }
    if (COS != -1)
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f" , CLA, TIE, COS);
    else
        printf("\nError en la clave");
    /* luego utilizamos if para verificar si COS es diferente de -1 (lo que significa que no hubo un error en la clave). 
    Si es así, se muestra la clave, el tiempo y el costo de la llamada con printf. 
    Si COS es igual a -1, se muestra un mensaje de error.*/    
 }