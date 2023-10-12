#include <stdio.h>
//Apuntadores y arreglos
void main(void)
{
    int X = 5, Y = 8, V[5] = {1, 3, 5, 7, 9};//se declaran unas series de variable y un arreglo
    int *AY, *AX;//se declaran punteros llamados AY y AX
    AY  = &Y;//se asigna el puntero AY a la direccion de momoria de Y
    X = *AY;//se asigna el puntero AX a la direccion de momoria de X
    *AY = V[3] + V[2];//Se modifican los valores apuntados por AY
    printf("\nX=%d y=%d V[0]=%d V[1]=%d V[2]=%d V[3]=%d V[4]=%d", X, Y, V[0], V[1], V[2], V[3], V[4]);
    AX = &V[V[0]*V[1]];//se asigna un el puntero AX a un elemento de V
    X = *AX;//se asigna el valor de X al valor que apunta AX
    Y = *AX * V[1];
    *AX = *AY - 3;//aqui se modifica el valor que apunta AX
    printf("\nX=%d Y=%d V[0]=%d V[1]=%d V[2]=%d V[3]=%d V[4]=%d", X, Y, V[0], V[1], V[2], V[3], V[4]);
    //se imprimen los valores 
}