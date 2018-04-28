#ifndef SERIES_H_INCLUDED
#define SERIES_H_INCLUDED


typedef struct
{
    int idSerie;
    char nombre[50];
    char genero[20];
    int cantidadTemporadas;
    int estado;
}eSerie;


void inicializarSeriesEstado(eSerie[], int);
void inicializarSeriesHardCode(eSerie[]);
void mostrarListaSeries(eSerie[], int);
int serieBuscarLugarLibre(eSerie[], int);
int serieSiguienteId(eSerie[],int);
int serieAlta(eSerie[] ,int);
int serieBaja(eSerie[] ,int , int );
int serieModificacion(eSerie[] ,int , int);
int serieOrdenar(eSerie[] ,int , int);


#endif // SERIES_H_INCLUDED
