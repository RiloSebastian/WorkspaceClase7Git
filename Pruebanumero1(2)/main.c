#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 20
#define OCUPADO 1
#define LIBRE 0

int main(){

ePersona persona[20];
int opcion;
int index;
char respuesta[2];

inicializar(persona, 20);

do{
printf("\n 1. Agregar una persona\n 2. Borrar una persona\n 3. Imprimir lista ordenada por nombre\n 4. Imprimir grafico de edades\n");
printf("\n opcion: ");
fflush(stdin);
scanf("%d", &opcion);

switch(opcion){

case 1:
    index=altaPersona(persona,20);
    if(index==0){
        printf("Persona Agregada\n");
    }
    else{
        printf("Error\n");
    }
    break;
case 2:
    index=bajaPersona(persona,20);
    if(index==0){
        printf("Persona dada de baja\n");
    }
    else{
        printf("la persona no ha sido dada de baja\n");
    }
    break;
case 3:
    mostrarListaPorNombre(persona,20);
    break;
case 4:
    mostrarGrafico(persona,20);
    break;
default :
    printf("\n Error: ingrese alguna de las opciones dadas con anterioridad.\n");
    break;
}

printf("volver a ingresar?: ");
scanf("%s", respuesta);

}while(strcmp(respuesta,"s")==0);

return 0;
}
