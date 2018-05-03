#ifndef VALIDACIONES_H_INCLUDED
#define VALIDACIONES_H_INCLUDED
typedef struct{

char nombre[50];
int edad;
int dni;
int estado;

}ePersona;

void validarnombre(ePersona persona[]);
void validarNumero(int numero);


#endif // VALIDACIONES_H_INCLUDED
