#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
int main()
{
    char nombre[30];
    char apellido [30];
    char nombreyApellido[70];


    printf("Ingrese su nombre\n");
    gets(nombre);

    printf("Ingrese su apellido\n");
    gets(apellido);

    strcpy(nombreyApellido,strcat(nombre,apellido));
    printf("%s\n",nombreyApellido);

    strupr(nombreyApellido);
    printf("%s\n",nombreyApellido);



    return 0;
}
*/


float calcularPromedio(int,int);
void  mostrarDatos(char[][30], int[], int[], int[], float[]);

int main()

{
char nombre[3][30];//convertimos un vector en una matriz para trabajar con dos dimensiones. en el segundo [ indicamos la cantidad de caracteres//
int legajo[3];
int nota1[3];
int nota2[3];
float paraPromedio[3];
int i;


for( i=0; i<3; i++)

{
    printf("ingrese el nombre\n");
    fflush(stdin);
    gets(nombre[i]);


    printf("ingrese el legajo\n");
    scanf("%d", &legajo[i]);


    printf("ingrese la nota1\n");
    scanf("%d", &nota1[i]);


    printf("ingrese la nota2\n");
    scanf("%d", &nota2[i]);


    paraPromedio[i] = calcularPromedio(nota1[i],nota2[i]);

    mostrarDatos(nombre,legajo, nota1, nota2, paraPromedio);


    }
    return 0;
}

float calcularPromedio(int nota1,int nota2)
{

   float promedio;

   promedio= ((float)nota1 +  nota2)/2;


   return promedio;
}

void  mostrarDatos(char nombre[][30], int legajo[], int nota1[], int nota2[], float promedio[])
{
    int i;

    for(i=0;i<3;i++)
        {
            printf("El nombre es: %s\n",nombre[i]);
            printf("El legajo es: %d\n",legajo[i]);
            printf("la nota1 es: %d\n",nota1[i]);
            printf("la nota2 es: %d\n",nota2[i]);
            printf("el promedio es de %.2f\n\n", promedio[i]);
        }
}
