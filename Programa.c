#include <stdio.h>
#include <time.h>
struct cedula//declaramos la una estructura llamada cedula
{
    char nombre[20];//declaramos un arreglo de tipo caracter llamado nombre
    char apellido[30];//declaramo otro arreglo de tipo caracter llamado apellido
    struct tm fecha;//declaramos una estructura para el ingreso de las fechas
    char sexo[2];//declaramos un arreglo de tipo caracter llamada sexo
    char tipo_sangre[5];//declaramos un arreglo de tipo caracter llamada tipo de sangre
    char equipo_pelota[20];//declaramos un arreglo de tipo caracter llamada equipo de pelota
};
int main()//definimos la funcion principal del programa.
{
    int i;
    int cantidad;
    //declaramos dos variables
    printf("Ingrese la cantidad de cedulas:");//solicitamos la cantidad de cedulas a ingresar
    scanf("%d", &cantidad);//la guardamos en la variable cantidad
    
    struct cedula cedulas[cantidad];
    //esto es un arreglo de estructuras cedulas con un tamaño determinado por la cantidad ingresada
    for ( i = 0; i < cantidad; i++)
    //Aqui abrimos un bucle en donde declaramos que i = 0, y mientras este sea menor que la cantidad ingresada tendra que repetirse
    {
        printf("Ingrese los datos de la cedula #%d:\n", i + 1);
        //Aqui se imprime un mensaje para ingresar los datos 
        ingresarCedula(&cedulas[i]);//aqui utilizamos la funcion ingresarcedula para recolectar datos de cada cedula
    }
    printf("\nDatos ingresados:");
    for ( i = 0; i < cantidad; i++)
    //abrimos un bucle for para imprimir los datos ingresados, de una cantidad de cedulas ya antes escritas
    {
        imprimirCedula(cedulas[i]);
        //con esta funcion se imprimiran todas las cedulas desde la primera hasta la ultima
    }
    char nombreArchivoGuardar[50];//declaramos un arreglo de tipo caracter
    printf("Ingrese el nombre del archivo para guardar las cedulas:");
    scanf("%s", nombreArchivoGuardar);
    //solicitamos ingresar el nombre del archivo donde lo vamos a guardar, luego esto se guardara en la variable
    guardaEnArchivo(cedulas, cantidad, nombreArchivoGuardar);
    //llamamos a esta funcion para guardar los datos dentro del archivo
    char nombreArchivoCargar[50];//declaramos una variable de tipo caracter
    printf("Ingrese el nombre del archivo para cargar las cedulas:");
    scanf("%s", nombreArchivoCargar);
    //solicitamos el nombre del archivo para cargar y lo guardamos en la variable 
    cargarDesdeArchivo(cedulas, cantidad, nombreArchivoCargar);
    //llamamos a la funcion cargardesdeaerchivo para cargar los archivos anteriormente guardados
    printf("\nDatos cargados desde el archivo:\n");
    //se imprime todos los datos guardados en ese archivo
    for ( i = 0; i < cantidad; i++)
    //se abre un bucle for, el cual permitira mandado datos mientras que i sea igual que la cantidad de cedulas ingresadas
    {
        imprimirCedula(cedulas[i]);
        //con esta funcion se imprimira todas las cedulas guardads, dentro de ese archivo.
    }
    return 0;//con esto indicamos que el programa se ejecuto bien
}
void ingresarCedula(struct cedula *persona)//comienzo de la funcion ingresar cedula. 
{
    printf("Ingrese el nombre:");
    scanf("%s", persona->nombre);
    //se solicita ingresar el nombre de la persona este se almacenara en la estructura cedula en nombre
    printf("ingrese el apellido:");
    scanf("%s", persona->apellido);
    //se solicitaa ingresar el apellido de la persona, este se almacenara en la estructura cedula en apellido
    printf("Ingresar la fecha de nacimiento (YYYY MM DD):");
    scanf("%d %d %d", &persona->fecha.tm_year, &persona->fecha.tm_mon, &persona->fecha.tm_mday);
    //se solicita ingresar la fecha de nacimiento, eso se almacenra en la estructura cedula, dentro de struct fecha. 
    printf("Ingresar el sexo (M/F):");
    scanf("%1s", persona->sexo);
    //se solicita ingresar el sexo de la persona, este se almacenara en la estructura cedula, en sexo.
    printf("Ingresar el tipo de sangre:");
    scanf("%2s", persona->tipo_sangre);
    //se solicita ingresar el tipo de sangre este se almacenara en la estructura cedula, en tipo_sangre
    printf("Ingresar tu equipo de pelota:");
    scanf("%s", persona->equipo_pelota);
    //se solicita ingresar el equipo de pelota, este se almacenara en la estructura cedula, en equipo_pelota
}
void imprimirCedula(struct cedula persona)//En esta funcion se imprimira los resultados ingresados anteriormente
{
    printf("\nNombre: %s\n", persona.nombre);
    printf("\nApellido: %s\n", persona.apellido);
    printf("Fecha de nacimiento: %d-%02d-%02d\n", persona.fecha.tm_year, persona.fecha.tm_mon, persona.fecha.tm_mday);
    printf("Sexo: %c\n", persona.sexo);
    printf("Tipo de sangre: %s\n", persona.tipo_sangre);
    printf("Equipo de pelota: %s\n", persona.equipo_pelota);
    /*Aqui hay una serie de printf, para imprimir una serie de datos, en este se puede ver diferentes funciones como persona... esto nos indica 
    que el datos que queremos imprimir por ejemplo persona.nombre esta diciendo que lo que va imprimir despues de los dos puntos es el dato que esta
    guardado hay. en el caso de la fecha, es basicamente lo mismo ya que la dentro de la sruct cedula hay otra struc tm, la cual nos permite ingresar 
    fechas.*/
}
void guardaEnArchivo(struct cedula *cedula, int cantidad, char *nombreArchivo)//en esta funcion se guardaran los resultados en los archivos
{
    FILE *archivo = fopen(nombreArchivo, "w");//utilizamos fopen para abrir un archivo en modo escritura "W" y lo guarda en la variable archivo
    if (archivo == NULL)//con esto verificamos si cuando abrimos el archivo, de verdad se abrio
    {
        printf("No se pudo abrir el archivo.");
        return;
    }
    //si al momento de abrirlo la operacion no se completa aparece un mensaje de que no se pudo abrir
    fwrite(cedula, sizeof(struct cedula), cantidad, archivo);//con esta funcion escribimo dentro del archivo los que estamos especificando con el puntero
    //sizeof indica el tamaño de cada elemento
    fclose(archivo);//esto cierra el archivo despues de escribir en el
}
void cargarDesdeArchivo(struct cedula *cedulas, int cantidad, char *nombreArchivo)
{
    FILE *archivo = fopen(nombreArchivo, "r");//abrimos el archivo con fopen en modo de lectura "r" y guarda el puntero al archivo en la variable
    if (archivo == NULL)//con esto chequeamos si el al momento de abrir el archivo la operacion tuvo exito.
    {
        printf("No se pudo abrir el archivo:");
        return;
    }
    //si no se pudo abrir entonces se imprime un mensaje de "erro"
    fread(cedulas, sizeof(struct cedula), cantidad, archivo);
    //con fread como su nombre lo indica lee desde el archivo la cantidad de elementos en el arreglo 
    fclose(archivo);//cerramos el archivo depues de leer 
}
