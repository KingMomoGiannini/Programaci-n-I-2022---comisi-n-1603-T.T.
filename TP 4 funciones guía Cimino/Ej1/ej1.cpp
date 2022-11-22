/*Definí las siguientes funciones, asegurándote 
su correcto funcionamiento con algunos tests.
1) esPar, que devuelva si un número entero 
dado como parámetro es par o no. */

#include<stdio.h>

void esPar(int x){
    if(x%2==0){
        printf("El numero ingresado es par.");
    }
    else{
        printf("No es par.");
    }
}

int main(){
    int num;
    printf("Ingrese un numero como parametro: ");
    scanf("%d",&num);
    esPar(num);
    return 0;
}
