/*8. Desarrolle un programa que pida por teclado el número de legajo de un alumno y
dos notas; que calcule el promedio y guarde toda la información en un archivo de
texto “Notas.txt”. El ingreso de datos finaliza con un legajo igual a -1.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int legajo;
    int nota1;
    int nota2;
    int promedio;
}datos;

int main(){
    FILE *f;
    datos alumno[100];
    f = fopen("Notas.txt","w");
    if (f== NULL){
        printf("Error de apertura de archivo.");
    }
    else{
        if (alumno->legajo!=-1)
        {
            for (int i = 0; i < 100; i++)
            {
                printf("Ingrese el numero de legajo del alumno: ");
                scanf("%d",&alumno->legajo);
                if (alumno->legajo==-1)
                {
                    i=100;
                }
                else{
                    printf("Ingrese la primer nota del alumno: ");
                    scanf("%d",&alumno->nota1);
                    printf("Ingrese la segunda nota del alumno: ");
                    scanf("%d",&alumno->nota2);
                    alumno->promedio = (alumno->nota1+alumno->nota2)/2;
                    fprintf(f,"Legajo de alumno: %d\n",alumno->legajo);
                    fprintf(f,"primer nota de alumno: %d\n",alumno->nota1);
                    fprintf(f,"segunda nota de alumno: %d\n",alumno->nota2);
                    fprintf(f,"promedio de alumno: %d\n",alumno->promedio);
                    fprintf(f,"--------------------------------------\n");
                }
            }
        }
        else{
            fclose(f);
        }
    }
    return 0;
}
