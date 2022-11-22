/*12. Realiza un programa que cargue una matriz de 3x3 y desarrolle un algoritmo para
obtener la diagonal principal de la matriz.

Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void diagonal(int matriz[3][3]){
    printf("\nLos numeros que componen la diagonal principal de la matriz son: ");
    for (int i = 0; i < 3; i++)
    {
        printf("%d  ", matriz[i][i]);
    }  
}

int main(){
    int matriz[3][3];
    int i,j;
    srand(time(NULL));
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            int num;
            num = rand() % 11;
            num = rand() % 10;
            matriz[i][j] = num;
        }
    }
    for ( i = 0; i < 3; i++)  //Mostramos cantidad de columnas
    {
            printf("\tColumna %d|",i);
    }
    for ( i = 0; i < 3 ; i++) //Creamos un bucle para mostrar los datos cargados en la matriz de fxc
    {
        printf("\nfila %d: \t",i); // mostramos cada fila y cada
        for ( j = 0; j < 3 ; j++)
        {
            printf("%d\t\t",matriz[i][j]);
        }
    }
    printf("\n\n");
    diagonal(matriz);
    return 0;   
}