/*13. Se cargan datos a una matriz de enteros de 3x4, se pide informar:
a. Los datos cargados en la matriz.
b. Promedio general. (Función Promedio).
c. Porcentaje de positivos. (Funcion Porcentaje)
d. Sumatoria de números pares ingresados en la matriz. (Función SumaPares)

Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void promedio(int matriz[3][4]){
    int i,j,suma=0;
    int promParc[3],promGen;
    printf("\nb) Promedio:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            suma = suma + matriz [i][j];
            if(j==3){
                promParc[i] = suma/4;
                printf("\n\tPromedio parcial %d = %d",i,promParc[i]); 
            }
        }
    }
    suma = 0;
    for ( i = 0; i < 3; i++)
    {
        suma = suma + promParc[i];
        if(i==2){
            promGen = suma/3;
        }
    }
    printf("\n\nPromedio General : %d \n\n", promGen);
}

void porcentaje(int matriz[3][4]){
    int i,j,porc,cont=0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (matriz[i][j]>0)
            {
                cont=cont+1;
            }
        }
    }
    porc = (cont*100)/12;
    printf("\nc) El porcentaje de numeros positivos es del : %d %c \n\n ", porc,37); //37 - Codigo ASCII para simbolo de porcentaje.
}

void sumatoria(int matriz[3][4]){
    int i,j,cont = 0,suma = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (matriz[i][j] % 2 == 0)
            {
                suma= suma + matriz[i][j];
            }
        }
    }
    printf("\nd) La sumatoria de los numeros pares da: %d\n\n", suma);
}    

int main (){
    int matriz[3][4];
    int i,j;
    srand(time(NULL));
    for ( i = 0; i < 3 ; i++) //Cargamos la matriz de 3x4 con numeros aleatorios entre 0 y 10
    {
        for ( j = 0; j < 4; j++)
        {
            int num = rand() % 11;
            num = rand() % (10);
            matriz[i][j] = num;
        }
    }
    printf("a) Datos cargados en la matriz: \n\n");
    for ( i = 0; i < 4; i++)  //Mostramos cantidad de columnas
    {
        printf("\tColumna %d|",i);
    }
    for ( i = 0; i < 3 ; i++) //Creamos un bucle para mostrar los datos cargados en la matriz de 3x4
    {
        printf("\nfila %d: \t",i); // mostramos cada fila y cada
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t\t",matriz[i][j]);
        }
    }
    system("pause");
    system("cls");
    promedio(matriz);
    system("pause");
    system("cls");    
    porcentaje(matriz);
    system("pause");
    system("cls"); 
    sumatoria(matriz);
    return 0;
}