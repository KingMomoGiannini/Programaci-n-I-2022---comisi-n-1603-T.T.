/*14. Desarrollar un algoritmo que cargue una matriz con valores enteros positivos y
muestre por pantalla el máximo y mínimo ingresado.Suponer máximos y mínimos
únicos.

Giannini Sebastian; Comision 1603 TT 2022; Programación I  */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void extremos(int y,int x,int matriz[y][x]){
    int i,j,max=0,min=30;
    for ( i = 0; i < y; i++)
    {
        for ( j = 0; j < x; j++)
        {
            if (matriz[i][j]>max)
            {
                max = matriz[i][j];
            }
            if (matriz[i][j]<min){
                min = matriz[i][j];
            }
        }
    }
    printf("\nEl valor maximo ingresado en la matriz es: %d",max);
    printf("\nEl valor minimo ingresado en la matriz es: %d\n\n",min);
}


int main(){
    int i,j,n=3,m=3;
    int matriz[n][m];
    srand(time(NULL));
    for ( i = 0; i < n ; i++) //Cargamos la matriz de fxc con numeros aleatorios entre 0 y 30
    {
        for ( j = 0; j < m; j++)
        {
            int// num = rand() % 11;
            num = rand() % (30+1);
            matriz[i][j] = num;
        }
    }
    system("cls");
    for ( i = 0; i < m; i++)  //Mostramos cantidad de columnas
    {
        printf("\tColumna %d|",i);
    }
    for ( i = 0; i < n ; i++) //Creamos un bucle para mostrar los datos cargados en la matriz de fxc
    {
        printf("\nfila %d: \t",i); // mostramos cada fila y cada
        for ( j = 0; j < m; j++)
        {
            printf("%d\t\t",matriz[i][j]);
        }

    }
    system("pause");
    system("cls");
    extremos(n,m,matriz);
    return 0;
}


/*  Para ver los n*m elementos de la matriz, a modo de cuadro.

    system("cls");
    for ( i = 0; i < m; i++)  //Mostramos cantidad de columnas
    {
        printf("\tColumna %d|",i);
    }
    for ( i = 0; i < n ; i++) //Creamos un bucle para mostrar los datos cargados en la matriz de fxc
    {
        printf("\nfila %d: \t",i); // mostramos cada fila y cada
        for ( j = 0; j < m; j++)
        {
            printf("%d\t\t",matriz[i][j]);
        }

    }*/