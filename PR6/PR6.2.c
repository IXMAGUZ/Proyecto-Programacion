#include <stdio.h>
/*Alumnos.
El programa, al recibir un arreglo bidimensional que contiene informacion
sobre calificaciones de alumnos en cuatro materias diferentes, obtiene
resultados estadisticos.*/
const int MAX = 50;
const int EXA = 4;
//se declaran dos constantes una con un valor de 50 y otra con un valor de 4
void Lectura(float [MAX][EXA], int);
void Funcion1(float [MAX][EXA], int);
void Funcion2(float [MAX][EXA], int);
//se declaran tres prototipos de funciones, las cuales leeran y calcularan las calificaciones de los alumnos
void main(void)//Aqui inicia la funcion principal
{
    int NAL;//se declara una variable llamada NAL
    float ALU[MAX][EXA];//Se declara una variable de caracter Real 
    do//se abre un bucle do while
    {
    printf("Ingrese el numero de alumnos del grupo:");//se solicita el numero de alumnos
    } while (NAL > MAX || NAL < 1);//se abre un bucle while, este se repite si el numero de alumnos esta fuera del rango
    Lectura(ALU, NAL);//se llama a la funcion lectura esta ingresa la calificacion del los alumnos
    Funcion1(ALU, NAL);//se llama a la funcion1 para calcular el promedio de cadsa alumno
    Funcion2(ALU, NAL);//se llama a la funcion2 para calcular el promedio de los examenes
}
void Lectura(float A[][EXA], int N)//Aqui comienza la funcion lectura
{
    int I, J;//se declaran dos variables de caracter entero
    for ( I = 0; I <N; I++)
    for ( J = 0; J < EXA; J++)
    //se abren dos bucles uno para recorrer los alumnos u otro los examenes
    {
        printf("Ingrese la calificacion %d del alumno %d:", J+1, I+1);
        scanf("%f", &A[I][J]);
        //se solicita ingresar la calificacion de los alumnos y se guardara en la matriz
    }
    /*como funciona los bucles for, cuando ingresemos el numero de alumnos entonces de acuerdo a ese numero se ira repitiendo el bucle para guardar los datos
    se ingresamos que hay 10 alumnos, entonces ese bucle se repetira 10 veces*/
}
void Funcion1(float A[][EXA], int T)//Aqui comienza la funcion 1
{
    int I, J;//se declaran variables
    float SUM, PRO;//se declaran dos variables de cararacter real
    for ( I = 0; I < T; I++)//se abre un bucle for para recorrer las calificaciones de los alumnos
    {
     SUM = 0;//la suma se inicializa en 0
     for (J=0; J<EXA; J++)//se abre otro bucle para recorrer los examenes de los alumnos
     SUM += A[I][J];//aqui se suma cada calificacion
     PRO = SUM / EXA; //se calcula el promedio dividiendo las sumas de la calificaciones entre los examenes
     printf("\nEl promedio del alumno %d es: %5.2f", I+1, PRO);//se imprime el promedio de los alumnos
    }
}
void Funcion2(float A[][EXA], int T)//Aqui comienza la funcion 2 
{
    int I, J, MAY;//se declaran tres variables
    float SUM, PRO, MPRO = 0;//se declaran tres variables de caracter real y una de ellas es igual a 0
    printf("\n");//NO SE PARA QUE ESTA ESO AHI
    for ( J = 0; J < EXA; J++)//se abre un bucle for para recoorer los examenes de los alumnos 
    {
    SUM = 0;// la suma se inicializa en 0
    for ( I = 0; I < T; I++)//se abre otro bucle for ese es para los alumnos
    SUM += A[I][J];//se suma las calificaciones de los alumnos
    PRO = SUM / T;//se calcula el promedio del examen dividiendo la calificacion entre la variable T
    if (PRO > MPRO) //esto comprueba que le promedio es mayor que el promedio maximo
    {
        MPRO = PRO; //si es asi el promedio maximo sera igual al promedio del alumno
        MAY = J;
    }
    printf("\nEl promedio del examen %d es: %f", J+1, PRO);//se imprime el promedio el examen
    }
    printf("\nEl examen con mayor promedio es: %d \tpromedio: %5.2f", MAY+1, MPRO);//se imprime el examen con mayor promedio

}