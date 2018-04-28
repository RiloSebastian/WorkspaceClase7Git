#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuarios.h"
#include "series.h"
#define OCUPADO 0
#define LIBRE 1

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);
    }
}

int usuarioAlta(eUsuario usuarios[] ,int cant){

    int retorno = -1;
    char nombre[50];
    int id;
    int indice;

    if(cant > 0 && usuarios != NULL)
    {
        retorno = -2;
        indice = usuarioBuscarLugarLibre(usuarios,cant);
        if(indice >= 0)
        {
            retorno = -3;
            id = usuarioSiguienteId(usuarios,cant);

            //if(!getValidString("Nombre?","Error","Overflow", nombre,50,2))
            //{
                retorno = 0;
                strcpy(usuarios[indice].nombre,"esteban");
                usuarios[indice].idUsuario = id;
                usuarios[indice].estado = OCUPADO;
            //}
        }
    }
    return retorno;
}
int usuarioBuscarLugarLibre(eUsuario usuarios[], int cant)
{
    int retorno = -1;
    int i;
    if(cant > 0 && usuarios != NULL)
    {
        retorno = -2;
        for(i=0;i<cant;i++)
        {
            if(usuarios[i].estado == LIBRE)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}

int usuarioSiguienteId(eUsuario usuarios[], int cant)
{
    int retorno = 0;
    int i;
    if(cant > 0 && usuarios != NULL)
    {
        for(i=0; i<cant; i++)
        {
            if(usuarios[i].estado == OCUPADO)
            {
                    if(usuarios[i].idUsuario>retorno)
                    {
                         retorno=usuarios[i].idUsuario;
                    }
            }
        }
    }

    return retorno+1;
}

int usuariobuscarPorId(eUsuario usuarios[] ,int cant, int id)
{
    int retorno = -1;
    int i;
    if(cant > 0 && usuarios != NULL)
    {
        retorno = -2;
        for(i=0;i<cant;i++)
        {
            if(usuarios[i].estado == OCUPADO && usuarios[i].idUsuario == id)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}






int usuarioBaja(eUsuario usuarios[],int cant,int id){
int retorno=-1;

printf("Ingrese id:\n");
scanf("%d",&id);

retorno=usuariobuscarPorId(usuarios, cant, id);

usuarios[retorno].estado=LIBRE;

return retorno;
}








void mostrarListaUsuarios(eUsuario usuario[], int cant)
{
    int i;
    int j;
    int auxCant;

    for(j=0; j<cant; j++)
    {
        if(usuario[j].estado==0)
        {
            auxCant=j;
            break;
        }
    }
    for( i=0; i<auxCant; i++)
    {
        printf("USUARIO: %d\n %s\n %d\n %d\n----------------\n", usuario[i].idUsuario, usuario[i].nombre, usuario[i].idSerie, usuario[i].estado);
    }

}

void mostrarUsuarioConSuSerie(eUsuario usuarios[],int cantU, eSerie series[], int cant)
{
    int j;
    int h;
    int k;
    int i;

    int auxCant;
    int auxCantU;

    for(j=0; j<cant; j++)
    {
        if(series[j].estado==0)
        {
            auxCant=j;
            break;
        }
    }
    for(h=0; h<cant; h++)
    {
        if(usuarios[h].estado==0)
        {
            auxCantU=h;
            break;
        }
    }
    for(k=0; k<auxCantU; k++)
    {
        for(i=0; i<auxCant; i++)
        {
            if(usuarios[k].idSerie==series[i].idSerie)
            {
                printf(" %s\n %s\n-------------\n", usuarios[k].nombre, series[i].nombre);
                break;
            }
        }
    }
}

void mostrarSerieConUsuario(eSerie series[],int cantU, eUsuario usuarios[], int cant)
{

    int j;
    int h;
    int k;
    int i;

    int auxCant;
    int auxCantU;

    for(j=0; j<cant; j++)
    {
        if(series[j].estado==0)
        {
            auxCant=j;
            break;
        }
    }
    for(h=0; h<cant; h++)
    {
        if(usuarios[h].estado==0)
        {
            auxCantU=h;
            break;
        }
    }

    for(k=0;k<auxCant;k++){
        printf("\n\n%s:\n", series[k].nombre);
        for(i=0;i<auxCantU;i++){
            if(series[k].idSerie==usuarios[i].idSerie){
                printf("%s\n", usuarios[i].nombre);
            }
        }
    }
}
