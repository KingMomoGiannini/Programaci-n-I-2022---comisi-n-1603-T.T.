/* Definí las siguientes funciones, asegurándote 
su correcto funcionamiento con algunos tests.
5) mostrarSucesion, que imprima por 
consola la sucesión de números inclusiva 
entre a y b, dados como parámetros. */
#include<stdio.h>
#include<stdlib.h>

void mostrarSucesion(int x,int y){
    for (int i = x ; i <= y; i++)
    {
        printf("%d,",i);
    }
}

int main(){
    int a,b;
    printf("Ingrese un numero para a: ");
    scanf("%d",&a);
    printf("Ingrese un numero para b: ");
    scanf("%d",&b);
    mostrarSucesion(a,b);
    return 0;
}