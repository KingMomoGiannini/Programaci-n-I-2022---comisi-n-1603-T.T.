#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct
{
    char nomAp[30];
    int legajo;
    int aprobadas;
    float promedio;
}alumno;

typedef struct 
{
    int legajo;
    int CantAprobadas;
}segAlumnos;

void cargar(alumno datos[2]){ // 1
    for (int i = 0; i < 2; i++)
    {
        printf("Ingrese el nombre y apellido del alumno: ");
        fflush(stdin);
        gets(datos[i].nomAp);
        printf("Ingrese el numero de legajo del alumno: ");
        scanf("%d",&datos[i].legajo);
        printf("Ingrese cantidad de materias aprobadas del alumno: ");        
        scanf("%d",&datos[i].aprobadas);
        printf("Ingrese el promedio del alumno: ");
        scanf("%f",&datos[i].promedio);
    }
    system("cls");
}

void listar(alumno datos[2]){ // 2
    for (int i = 0; i < 2; i++)
    {
        printf("Alumno: %s ; legajo: %d ; materias aprobadas: %d ; promedio: %.2f\n",
        datos[i].nomAp,datos[i].legajo,datos[i].aprobadas,datos[i].promedio);
    }
}

void maximo(alumno datos[2]){// 3 
    int max = datos[0].aprobadas;
    for (int i = 0; i < 2; i++)
    {
        if(max<datos[i].aprobadas){
            max=datos[i].aprobadas;
        }
    }
    printf("Maxima cantidad de materias aprobadas: %d",max);
    printf("\nalumnos con cantidad maxima de materias aprobadas: ");
    for (int i = 0; i < 2; i++)
    {
        if (datos[i].aprobadas==max){
            printf("\nAlumno: ");
            puts(datos[i].nomAp);
        }
    }
}

void ordenar(segAlumnos datos[2]){
    int i, j; 
    segAlumnos aux;
    for (i = 1; i < 2; i++)
    {
        j = i;
        aux = datos[i];
        while (j > 0 && aux.CantAprobadas > datos[j - 1].CantAprobadas)
        {
            datos[j] = datos[j - 1];
            j--;
        }
        datos[j] = aux;
    }
}

int main(){
    alumno datos[2];
    segAlumnos segDatos[2];
    int n;
    //int *max;
    system("cls");
    cargar(datos);//1
    listar(datos);//2
    maximo(datos);//3
    
    /*printf("\nalumnos con cantidad maxima de materias aprobadas: ");
    for (int i = 0; i < 2; i++)
    {
        if (datos[i].aprobadas==max){
            printf("\nAlumno: ");
            puts(datos[i].nomAp);
        }
    }*/
    printf("\n|Legajo\t|Cantidad de materias aprobadas|\n"); // 4
    for ( int j = 0; j < 2 ; j++)
    {
        segDatos[j].legajo=datos[j].legajo;
        segDatos[j].CantAprobadas=datos[j].aprobadas;
    }
    ordenar(segDatos);   
    for (int k = 0; k < 2; k++)
    {
        printf("\n%d\t|%d",segDatos[k].legajo,segDatos[k].CantAprobadas);
    }
    
    return 0;
}