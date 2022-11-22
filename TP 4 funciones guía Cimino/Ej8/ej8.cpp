/*Definí las siguientes funciones, asegurándote 
su correcto funcionamiento con algunos tests.
8) esPrimo, que devuelva si un número 
entero dado como parámetro es o no primo.*/
#include<stdio.h>
#include<stdlib.h>

int esPrimo(int x){
    int divPrim=0;
    for (int i = 1; i <=x; i++)
    {
        if(x%i==0){
            divPrim++;
            if(divPrim>2){
                return -1;
            }
        }
    }
    if(divPrim==2){
        return 0;
    }
}

int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    esPrimo(num);
    if (esPrimo(num)==0){
        printf("\n%d es un numero primo.",num);
    }
    else if(esPrimo(num)==-1){
        printf("\n%d no es un numero primo.",num);
    }
    return 0;
}
