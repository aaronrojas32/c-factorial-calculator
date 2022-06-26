/*
Nombre del programa: factorial.c
Descripcion: Programa que solcita un numero y calcula el factorial del numero.
Autor: Aaron Rojas Gutierrez
Fecha 18/04/2022
Version: 1.1
*/

//Declaramos las directivas para el procesador
#include <stdio.h>

//Iniciamos la funcion principal
int main() {
    
    //Declaramos las variables que vamos a utilizar
    int num,c,rep,factorial;
    
    //Recogemos el valor para calcular el factorial
    printf("Introduzca el numero del que desea calcular el factorial: \n");
    scanf("%d",&num);
    c=num;
    
    //Hacemos el bulce para calcular el factorial
    do{
        factorial=factorial*c;
        c--;
    }while(c!=1);
    
    //Imprimimos los resultados del calculo
    printf("El factorial de %d es %d \n",num,factorial);
    
    //Creamos un apartado para volver a inciar el programa
    printf("Si desea volver a iniciar el programa pulse 1 si no, pulse cualquier otro numero\n");
    scanf("%d",&rep);
    if(rep==1){
        main();
    }
    else{
        printf("Fin del programa\n");
    }
    
    return 0;
}
