/* Desarrollar un algoritmo que permita calificar a un grupo de alumnos de la escuela
secundaria. Por teclado se ingresa el nombre y las tres calificaciones de cada alumno
y con esos datos el programa debe calcular e informar el promedio de cada alumno
y decir si está aprobado o no; para aprobar se requiere un promedio de seis o más y
haber obtenido al menos seis en la última de las tres calificaciones. Luego el
programa debe informar cuántos alumnos aprobaron. Utilizar una variable char (“S”
o “N”), para decidir si quiere procesar o no la información. */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,j,aprob=0,cantAlum;
    float cal1,cal2,cal3,prom;
    char nombre[20],procesar;
    printf("Ingrese la cantidad de alumnos que desea calificar: ");
    scanf("%d",&cantAlum);
    fflush(stdin);
    for(i=0;i<cantAlum;i++){
        printf("\nIngrese el nombre del alumno: ");
        gets(nombre);
        printf("primer calificación: ");
        scanf("%f",cal1);
        printf("segunda calificación: ");
        scanf("%f",cal2);
        printf("tercera calificación: ");
        scanf("%f",cal3);
        prom=(cal1+cal2+cal3)/3;
        printf("promedio : %.2f",prom);
        system("pause");
        if((prom>=6)&&(cal3>=6)){
            aprob++;
        }        
    }
    printf("\nDesea procesar la información? S:Si N:No \n");
    scanf("%c",&procesar);
    if ((procesar=='s')||(procesar=='S'))
    {
        printf("La cantidad de alumnos aprobados es de : %d",aprob);
    }
    else if ((procesar=='n')||(procesar=='N'))
    {
        printf("adios.");
    }
    
    return 0;
}