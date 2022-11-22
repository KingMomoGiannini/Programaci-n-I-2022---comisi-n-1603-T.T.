/*Ej clase: Crear una estructura de registro con  los siguientes campos:
struct
{
    legajo
    nota
    nombre y apellido
}
Cargar 10 alumnos y mostrar los datos ordenados por nota de manera ascendente
a) ordenar por nota.
b) ordenar por nombre y apellido.
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    int legajos;
    int notas;
    char nomAp[30];
}alumnos;


int main (){
    alumnos carpeta[10];
    alumnos aux;
    int i,j;
    for (i=0; i<2; i++){
        printf("Ingrese el numero de legajo: ");
        scanf("%d", &carpeta[i].legajos );
        printf("\nIngrese la nota correspondiente: ");
        scanf("%d", &carpeta[i].notas);
        printf("\nIngrese el nombre del alumno: ");
        scanf("%s", carpeta[i].nomAp);
    }
    for (int i= 1;i<2; i++){
        j=i;
        aux= carpeta[i];
        while((j > 0) && (aux.notas < carpeta[j-1].notas)){
            carpeta[j]= carpeta[j-1];
            j--;
        }
        carpeta[j]= aux;
    }
    for(i=0;i<2; i++){
        printf("\nLegajo %d, alumno: %s, nota: %d\n",carpeta[i].legajos,carpeta[i].nomAp, carpeta[i].notas);
    }
    return 0;

}