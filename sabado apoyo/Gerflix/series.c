#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "series.h"
/*
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
*/

void inicializarSeriesEstado(eSerie series[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        series[i].estado =0;
    }
}


void inicializarSeriesHardCode(eSerie series[])
{
    int id[5] = {100,101,102,103,104};
    char nombre[][50]={"TBBT","TWD","GOT","BB","LCDP"};
    char genero[][50]={"Comedia","Terror","Suspenso","Policial","Policial"};
    int cantidad[5] = {10,9,7,5,2};

    int i;

    for(i=0; i<5; i++)
    {
        series[i].idSerie=id[i];
        series[i].cantidadTemporadas=cantidad[i];
        series[i].estado = 1;
        strcpy(series[i].nombre, nombre[i]);
        strcpy(series[i].genero, genero[i]);
    }
}

void mostrarListaSeries(eSerie series[], int cant)
{

int i;
int j;
int auxCant;

for(j=0;j<cant;j++)
{
    if(series[j].estado==0)
    {
        auxCant=j;
        break;
    }
}
for(i=0; i<auxCant; i++){
printf(" SERIES:\n %d\n %s\n %s\n %d\n %d\n----------------\n", series[i].idSerie, series[i].nombre, series[i].genero, series[i].cantidadTemporadas, series[i].estado);
}

}
