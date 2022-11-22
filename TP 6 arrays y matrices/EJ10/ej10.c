/* 10. Desarrollar un algoritmo que ingrese un matriz de n x m, y luego muestre por
pantalla la cantidad de ceros que contiene, crear una función para tal fin.

Giannini Sebastian; Comision 1603 TT 2022; Programación I */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ceros(int y, int x, int matriz[y][x]){
    int i,j,cont=0;
    for ( i = 0; i < y; i++)
    {
        for ( j = 0; j < x; j++)
        {
            if((matriz[i][j])==0){
                cont=cont+1;
            }
        }

    }
    printf("\nCantidad de ceros: %d ",cont)
    ;
}

int main(){
    int n,m,i,j;
    srand(time(NULL));
    printf("Ingrese un numero para filas: ");
    scanf("%d",&n);
    printf("Ingrese un numero para columnas: ");
    scanf("%d",&m);
    int matriz[n][m];
    for ( i = 0; i < n ; i++) //Cargamos la matriz de fxc con numeros aleatorios entre 0 y 10
    {
        for ( j = 0; j < m; j++)
        {
            int num = rand() % 11;
            num = rand() % (10);
            matriz[i][j] = num;
        }
    }
    system("cls");
    for ( i = 0; i < m; i++)  //Mostramos cantidad de columnas
    {
        printf("\tColumna %d|",i+1);
    }
    for ( i = 0; i < n ; i++) //Creamos un bucle para mostrar los datos cargados en la matriz de fxc
    {
        printf("\nfila %d: \t",i+1); // mostramos cada fila y cada
        for ( j = 0; j < m; j++)
        {
            printf("%d\t\t",matriz[i][j]);
        }
    }
    ceros(n,m,matriz);
    return 0;
}
