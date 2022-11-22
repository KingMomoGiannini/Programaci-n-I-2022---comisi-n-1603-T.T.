/*Desarrollar un algoritmo que cargue una matriz que representa la notas de un
alumno determinado teniendo en cuenta que las filas representan las materias y las
columnas los trimestres.
Se pide:
Cargar la matriz y el nombre y apellido del alumno y luego informar: Nombre
completo del alumno y el siguiente reporte:
a. Promedio en cada una de las materias
b. Porcentaje de materias aprobadas por trimestres (nota >6).
c. Promedio general.

Giannini Sebastian; Comision 1603 TT 2022; Programación I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

void promedioMaterias(int y,int x,int matriz[y][x]){
    int i,j,materias[5];
    int suma=0;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j <3; j++)
        {
            suma = suma + matriz[j][i]; 
            if(j==2){
                materias[i] = suma/3;
            }
        }
        suma=0;
    }
    printf("\n\na) Promedio en cada materia:\n");
    printf("\t\tMatematica|\tLengua|\t\tIngles|\t\tGeografia|\tBiologia\n");
    printf("\nProm   : \t");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\t\t",materias[i]);
    }
}

void porcentaje_materias(int y, int x, int matriz[y][x]){
    int i,j,cont=0;
    int porcentaje[5];
    printf("\n\nb) Porcentaje de materias aprobadas:\n");
    for ( i = 0; i < y; i++)
    {
        for ( j = 0; j < x; j++)
        {
            if(matriz[i][j]>6){
                cont = cont + 1;
            }
            if(j==4){
                porcentaje[i]= (cont*100)/5;
            }
        }
        printf("\n\tTrim %d : %d %c\n", i+1,porcentaje[i],37);
        cont=0;
    }
}

void promedio_general(int y,int x, int matriz[y][x]){
    int i,j,suma=0;
    int prom[5],promgen;
    for ( i = 0; i < x ; i++)
    {
        for ( j = 0; j < y; j++)
        {
            suma = suma + matriz[j][i];
            if(j==2){
                prom[i] = suma/3;
            }
        }
        suma=0;
    }
    for ( i = 0; i < x; i++)
    {
        suma = suma + prom[i];
        if(i==(x-1)){
            promgen= suma/x;
        }
    }
    printf("\n\nc) El promedio general del alumno es: %d\n\n",promgen);
}

void carga_matriz(int y,int x,int matriz[y][x]){
    int i,j;
    for ( i = 0; i < y ; i++) //Cargamos la matriz de n*m con numeros aleatorios entre 4 y 10 para simular calificaciones
    {
        for ( j = 0; j < x; j++)
        {
            int num = rand() % 11;
            num = rand() % (10-4+1) + 4; 
            matriz[i][j] = num;
        }
    }
}

void mostrarMatriz(int y,int x, int matriz[y][x]){
    int i,j;
    for ( i = 0; i < y ; i++) //Creamos un bucle para mostrar los datos cargados en la matriz de fxc
    {
        printf("\nTrim %d: \t",i+1); // mostramos cada fila y cada
        for ( j = 0; j < x; j++)
        {
            printf("%d\t\t",matriz[i][j]);
        }
    }
}

int main(){
    srand(time(NULL));
    char alumno[50];
    int n=3,m=5,i,j;
    int notas[n][m];
    puts("Ingrese nombre y apellido del/la alumno/a: ");
    gets(alumno);
    carga_matriz(n,m,notas);
    system("cls");
    puts("Alumno: ");
    puts(alumno);
    printf("\n\n");
    printf("\t\tMatematica|\tLengua|\t\tIngles|\t\tGeografia|\tBiologia");
    mostrarMatriz(n,m,notas);
    promedioMaterias(n,m,notas);
    porcentaje_materias(n,m,notas);
    promedio_general(n,m,notas);
    return 0;
}