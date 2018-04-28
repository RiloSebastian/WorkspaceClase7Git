#ifndef USUARIOS_H_INCLUDED
#define USUARIOS_H_INCLUDED

typedef struct
{
    int idSerie;
    char nombre[50];
    int idUsuario;
    int estado;
}eUsuario;

void inicializarUsuariosEstado(eUsuario[], int);
void inicializarUsuariosHardCode(eUsuario[]);
void mostrarListaUsuarios(eUsuario[], int);
void mostrarUsuarioConSuusuario(eUsuario[],int, eUsuario[], int);
void mostrarusuarioConUsuario(eUsuario[],int, eUsuario[], int);

int usuarioBuscarLugarLibre(eUsuario[], int);
int usuariobuscarPorId(eUsuario[] ,int, int);
int usuarioSiguienteId(eUsuario[],int);
int usuarioAlta(eUsuario[],int);
int usuarioBaja(eUsuario[],int,int);
int usuarioModificacion(eUsuario[],int,int);
int usuarioOrdenar(eUsuario[],int,int);



#endif // USUARIOS_H_INCLUDED
