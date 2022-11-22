/* Desarrollar un algoritmo que permita calificar a un grupo de alumnos de la escuela
secundaria. Por teclado se ingresa el nombre y las tres calificaciones de cada alumno
y con esos datos el programa debe calcular e informar el promedio de cada alumno
y decir si está aprobado o no; para aprobar se requiere un promedio de seis o más y
haber obtenido al menos seis en la última de las tres calificaciones. Luego el
programa debe informar cuántos alumnos aprobaron. Utilizar una variable char (“S”
o “N”), para decidir si quiere procesar o no la información. */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,j,aprob,cantAlum;
    float cal1,cal2,cal3,prom;
    char nombre [20];
    char procesar;
    printf("Ingrese la cantidad de alumnos que desea calificar: ");
    scanf("%d",&cantAlum);
    fflush(stdin);
    printf("Ingrese el nombre del alumno");
    gets (nombre);
    puts (nombre);
    return 0;
}
