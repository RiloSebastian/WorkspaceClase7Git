/*  1. Mostrar el listado de series
    2. Mostrar el listado de usuarios
    3. Mostrar el listado de Usuarios con el nombre de la serie que ve
    4. Mostrar por cada serie, el nombre de los usuarios que la ven.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "usuarios.h"
#include "series.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{
    char seguir;
    int opcion;
    int retorno=-1;
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);
    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);



do{

    printf("respuesta: ");
    scanf("%d", &opcion);

    switch(opcion)
    {
    case 1:
    {
        retorno=usuarioAlta(listaDeUsuarios,TAMUSUARIO);
        if(retorno==0)
        {
            printf("usuario ingresado\n");
        }
        else
        {
            printf("no se pudo ingresar\n");
        }
        break;
    }
    case 2:
    {
        mostrarListaUsuarios(listaDeUsuarios, TAMUSUARIO);
        break;
    }
    case 7:
    {
        mostrarUsuarioConSuSerie(listaDeUsuarios,TAMUSUARIO, listaDeSeries, TAMSERIE);
        break;
    }
    case 8:
    {
        mostrarSerieConUsuario(listaDeSeries,TAMUSUARIO,listaDeUsuarios,TAMSERIE);
        break;
    }
    }
    printf("Continuar:");
    fflush(stdin);
    scanf("%s", &seguir);

}while(seguir=='s');
    return 0;
}
