/* 11. Desarrollar un algoritmo que cargue un array de dos dimensiones con números
enteros, luego pida una posición X,Y y muestre por pantalla el dato
correspondiente.

Giannini Sebastian; Comision 1603 TT 2022; Programación I  */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void posicion(int a, int b, int matriz[a][b]){
    int x,y,cont=1;
    while(cont!=0){
        printf("\n Ingrese una posición para X de ( x ; y ): ");
        scanf("%d",&x);
        if ( x > a || x < 0)
        {
            printf("\nIngrese un dato valido.\n");
            system("pause");
            //system("cls");
        }
        else
        {
            //system("cls");
            cont=0;
        }
    }
    cont=1;
    while (cont!=0)
    {
        printf("\n Ingrese una posición para Y de ( x ; y ): ");
        scanf("%d",&y);
        if ( y > a || y < 0)
        {
            printf("\nIngrese un dato valido.\n");
            system("pause");
            //system("cls");
        }
        else
        {
            //system("cls");
            cont=0;
        }
    }
    printf("\n\n Para la posicion ( %d ; %d ) el valor es: %d \n\n",x,y,matriz[x][y]);
}

int main (){
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
    posicion(n,m,matriz);
}
