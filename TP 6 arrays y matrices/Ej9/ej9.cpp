/*9. Desarrollar un algoritmo que cargue una matriz pidiendo al usuario el número de
filas y columnas, posteriormente mostrar la matriz en pantalla.

Giannini Sebastian; Comision 1603 TT 2022; Programación I */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main (){
    int f,c,i,j;
    srand(time(NULL));
    printf("Ingrese un numero para filas: ");
    scanf("%d",&f);
    printf("Ingrese un numero para columnas: ");
    scanf("%d",&c);
    int matriz[f][c];
    for ( i = 0; i < f ; i++) //Cargamos la matriz de fxc con numeros aleatorios entre 0 y 10
    {
        for ( j = 0; j < c; j++)
        {
            int num = rand() % 11;
            num = rand() % (10+1);
            matriz[i][j] = num;
        }
    }
    system("cls");
    for ( i = 0; i < c; i++)  //Mostramos cantidad de columnas
    {
        printf("\tColumna %d|",i+1);
    }
    for ( i = 0; i < f ; i++) //Creamos un bucle para mostrar los datos cargados en la matriz de fxc
    {
        printf("\nfila %d: \t",i+1); // mostramos cada fila y cada 
        for ( j = 0; j < c; j++)
        {
            printf("%d\t\t",matriz[i][j]);
        }   
    }
    return 0;
}