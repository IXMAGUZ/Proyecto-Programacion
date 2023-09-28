#include <stdio.h>

/* Billete de ferrocarril.
El programa calcula el costo de un billete de ferrocarril teniendo en
➥cuenta la distancia entre las dos ciudades y el tiempo de permanencia
➥del pasajero.*/

void main (void)
//Este es el punto de inicio de ejecución del Programa//

{
    int DIS, TIE;
    float BIL;
    //Aqui estamos diciendole que donde vea DIS P TIE es un valor entero y donde vea BILL es un valor real//
     printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
     scanf("%d %d" , &DIS, &TIE);
     /*Aqui estamos diciendole que primero nos imprima un texto luego con scanf estamos diciendole que escane ese numero 
     y con %d que lo guarde, porque hay dos, porque son dos valores que tenemos que ingresar. luego con &DIS Y &TIE
     estamos diciendole que obtenga la direccion de memoria para que scanf pueda modificarla*/
     if ((DIS*2 > 500)&& (TIE > 10))
         BIL = DIS * 2 * 0.19 * 0.8;
     /*Se inicia una estructura if que verifica dos condiciones con el operador && (AND lógico). 
     La primera condición (DIS*2 > 500) verifica si el doble de la distancia es mayor que 500, 
     y la segunda condición (TIE > 10) verifica si el tiempo de estancia es mayor que 10. 
     Si ambas condiciones son verdaderas se calcula el coste de billete multiplicando la DIstancia x 2 x 0.19 y x 0.8*/
     else
         BIL = DIS * 2 * 0.19;
    /*Si algunas de las condiciones son falsas entonces se calcula el billete sin el 0.8*/
    printf("\nCosto del billete: %7.2f" , BIL);
    /*Luego imprime el costo del billete. El %7.2f significa que el valor que imprima sera real pero,
    que no puede pasar de 7 digitos a la izquierda y 2 a la derecha.*/  
}