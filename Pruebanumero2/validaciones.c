#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"
#define TAM 20
#define OCUPADO 1
#define LIBRE 0
#include <ctype.h>


char validarnombre(char input[])
{

    char aux[50];
    fflush(stdin);
    gets(aux);
    if(soloNombre(aux))
    {
     strcpy(input,aux);
     return 1;
    }
    return input[50];
}

int soloNombre(char str[])
{
    int i;
    for(i=0; i!= '\0'; i++){
        if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')){
         return 0;

    }
    }
    return 1;
}
int validarNumero(int numero1)
{
int a;
int b;
char numAux[30];
do{
 fflush(stdin);
 gets(numAux);
 b=atoi(numAux);

    if(b==0){
     printf("Error: debe ingresar datos enteros\n");
    }
    else{
     a=atoi(numAux);
     numero1=a;
    }
 }while(b==0);
 return numero1;
}
