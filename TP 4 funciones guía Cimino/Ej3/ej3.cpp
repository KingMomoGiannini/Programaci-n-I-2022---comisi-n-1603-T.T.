/* Definí las siguientes funciones, asegurándote
 su correcto funcionamiento con algunos tests.
 3) imprimirSimbolo, que imprima por 
consola n veces un caracter en la misma línea. 
Tanto n como el caracter se reciben como 
parámetro.*/
#include<stdio.h>
#include<stdlib.h>

void imprimirSimbolo(int x,char y){
    for (int i = 0; i < x; i++)
    {
        printf("%c",y);
    }
}

int main(){
    int n;
    char caracter;
    printf("Ingrese un numero n: ");
    scanf("%d",&n);
    fflush(stdin);
    printf("Ingrese un caracter a imprimir n veces: ");
    scanf("%c",&caracter);
    imprimirSimbolo(n,caracter);
    return 0;
}