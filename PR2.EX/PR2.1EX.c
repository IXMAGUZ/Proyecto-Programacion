#include <stdio.h>
#include <math.h>

/* Expresión.
El programa, al recibir como datos tres valores enteros, establece si los
➥mismos satisfacen una expresión determinada.
R, T y Q: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
//Este es el punto de inicio de ejecución del Programa//
{
    float RES;
    //aqui estamos definiendo una variable de tipo entero//
    int R, T, Q;
    printf("ingrese los valores de R, T, y Q: ");
    scanf("%d %d %d" , &R, &T, &Q);
    /*En estas tres lineas estamos primero declarando variable de numeros reales
    luego le estamos diciendo al programa que imprima los valores de R, T Y Q para luego
    esos valores de tipo entero (numeros) con el comando scanf, escanearlos en la computadora,
    "&d"se utiliza como el operador de dirección. en este caso lo que le esta diciendo a la memoria 
    es que los datos enteros se almacenan hay, luego (&) obtiene la direccion de memoria para que scanf pueda modificarlas.
    por eso &R, &T, &Q*/
    RES = pow (R, 4) - pow(T, 3) + 4 * pow(Q, 2);
    /*En esta linea se esta haciendo una operacion matematica, donde utilizando las variables R, T, Y Q
    almacena estos datos en RES, para luego usando el comando pow elevar las variables a su potencia, (R, 4) donde R es la variable
    y 4 es el numero al que se va a elevar la variable. Pero esto tiene un orden primero se calcula la potencia, luego la multiplicacion
     y de ultimos suma y resta.*/
    if (RES < 820)
    printf("\nR = %d\tT = %d\t Q = %d" , R, T, Q);
    /*Aqui se esta usando el comando if el cual se utiliza como un operador logico que nos
    dice si RES que es igual a la operacion matematica anterior, si RES es menor que 820 entonces
    imprime R que es igual a la variable dada. R = %D\tT no esta diciendo, que R va hacer igual al numero que habiamos escaneado,
    \t es un tabulador que hace un salto de esapacio para T que va hacer igual al valor que ingresamos, igual con Q = %d.
    Todo esto si RES es menor que 280.*/
    
}