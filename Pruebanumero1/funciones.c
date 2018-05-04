#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 20
#define OCUPADO 1
#define LIBRE 0


void inicializar( ePersona persona[],int cant){
    int retorno = -1;
    int i;
    if(cant > 0 && persona != NULL)
    {
        retorno = 0;
        for(i=0; i<cant; i++)
        {
            persona[i].estado= LIBRE;
            persona[i].dni= 0;
        }
    }
}




int buscarLibre(ePersona persona[], int cant){
int indice=-1;
int i;

for(i=0;i<20;i++){
    if(persona[i].estado==0){
        indice=i;
        break;
    }
}
return indice;
}

int altaPersona(ePersona persona[], int cant){

int index=-1;
int indice;
indice=buscarLibre(persona,20);
if(indice!=-1){

    printf("\n Ingrese un nombre:\n");
    scanf("%s", persona[indice].nombre);
    printf(" Ingrese edad:\n");
    scanf("%d", &persona[indice].edad);
    printf(" Ingrese un Dni:\n");
    scanf("%d", &persona[indice].dni);

    persona[indice].estado= OCUPADO;

    index=0;
}
return index;
}

int bajaPersona(ePersona persona[], int cant){

int index=-1;
int auxDni;
int i;

printf("Ingrese DNI de la persona:\n");
scanf("%d", &auxDni);

for(i=0;i<20;i++){
    if(persona[i].dni==auxDni){
        persona[i].estado=LIBRE;
        index=0;
        break;
    }
}
return index;
}

void mostrarListaPorNombre(ePersona persona[], int cant){
int i;
int j;
int k;
char auxnombre[50];

for(i=0;i<20-1;i++){
if(persona[i].estado==OCUPADO){
    for(j=i+1;j<20;j++){
        if(strcmp(persona[j].nombre,persona[i].nombre)<0 && persona[j].estado==OCUPADO){
            strcpy(auxnombre, persona[j].nombre);
            strcpy(persona[j].nombre, persona[i].nombre);
            strcpy(persona[i].nombre, auxnombre);
   }
  }
 }
}

for(k=0;k<20;k++){
    if(persona[k].estado==OCUPADO){
     printf("\n %s \n ", persona[k].nombre);
  }
 }
}

void mostrarGrafico(ePersona persona[], int cant){
    int i;
    int j;
    int menos18=0, entre18y35=0, mas35=0, contOcupado=0;

    for(i=0;i<cant;i++){
            if(persona[i].estado==OCUPADO){
                if(persona[i].edad<18){
                menos18++;
                }
                else if(persona[i].edad>35){
                    mas35++;
                }
                else{
                    entre18y35++;
                }
               contOcupado++;
            }
      }
      for(j=contOcupado; j>=0;j--){
            if(menos18<=j){
                printf("     ");
            }
            else{
                printf("  *  ");
            }
            if(entre18y35<=j){
                printf("     ");
            }
            else{
                printf("  *  ");
            }
            if(mas35<=j){
                printf("     \n");
            }
            else{
                printf("  *  \n");
            }
      }
      printf("<18 18><35 >35\n\n");

}
