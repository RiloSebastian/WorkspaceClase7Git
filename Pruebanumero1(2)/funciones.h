#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
typedef struct{

char nombre[50];
int edad;
int dni;
int estado;

}ePersona;

void inicializar(ePersona persona[],int cant);
int buscarLibre(ePersona persona[], int cant);
int altaPersona(ePersona persona[], int cant);
int bajaPersona(ePersona persona[], int cant);
void mostrarListaPorNombre(ePersona persona[], int cant);
void mostrarGrafico(ePersona persona[], int cant);

#endif
