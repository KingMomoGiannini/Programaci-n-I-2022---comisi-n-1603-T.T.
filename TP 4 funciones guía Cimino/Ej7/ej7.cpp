/* Definí las siguientes funciones, asegurándote 
su correcto funcionamiento con algunos tests.
7) cantDivisores, que devuelva la cantidad 
de divisores que posea un número entero 
dado como parámetro.*/
#include<stdio.h>
#include<stdlib.h>

int cantDivisores(int x){
    int div,cant=0;
    for (int i = 1; i <= x; i++)
    {
        div=(x%i);
        if (div==0)
        {
            printf("%d es divisor de %d\n",i,x);
            cant++;           
        }
    }
    return cant;    
}


int main (){
    int num;
    printf("\t\tCantidad de divisores de un numero\n\n");
   /* system("pause");
    system("cls");*/
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);
    cantDivisores(num);
    printf("\nEl numero %d, posee %d divisores.",num,cantDivisores(num));
    return 0;
}