#include <stdio.h>
/*Spa.
El programa, al recibir como datos el tipo de tratamiento, la edad y el numero
de dias de internacion de un cliente en un spa, calcula el costo total del tratamiento

TRA, EDA, DIA: variables de tipo entero.
COS: variable de tipo real*/


void main(void)
{
    int TRA, EDAD, DIA;
    float COS;
     // Aqui declaramos dos variables tres reales  y otra entera//
    printf("Ingrese tipo de tratamiento, edad y dias: ");
    scanf ("%d %d %d" , &TRA, &EDAD, &DIA);
    /*Aqui estamos diciendole que primero nos imprima un texto luego con scanf estamos diciendole que escane esos numeros 
     y con %d que lo guarde. luego con &TRA, %EDAD Y &DIA estamos diciendole que obtenga la direccion de memoria para que scanf 
     pueda modificarla*/ 
    switch (TRA)
{
case 1: COS = DIA * 2800; break;
case 2: COS = DIA * 1950; break;
case 3: COS = DIA * 2500; break;
case 4: COS = DIA * 1150; break;
default: COS = -1; break;
}
/*Con el comado swich que es un selector, que dependiendo de los casos que pongamos 
el hara una selección, si ninguno de los casos cumple con los requisitos entonces usa 
el default, que haria una operacion generica, en este caso iguala el costo a -1 */
if (COS != -1)
 // Verificar si el costo no es igual a -1 (significa que el tipo de tratamiento es válido).
{
    if (EDAD >= 60)
        COS = COS * 0.75;
    else
        if (EDAD <= 25)
            COS = COS * 0.85;
    /*En este proceso lo que estamos haciendo es aplicando descuentos dependiendo de la edad. 
    El segundo if nos esta diciendo que si es mayor o igual de 60 años entonces se le aplica un 
    descuento de 25%, luego viene el else que funciona como una contradición, si no es de ese rango de edad
    entonces el descuento es de 15%.*/
    printf ("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f" , TRA, DIA, COS);
}
else
    printf("\nLa clave del tratamiento es incorrecta");
    //Luego imprimimos la clave del tratamiento, pero  Si el tipo de tratamiento es incorrecto, mostrara un mensaje de error.
}