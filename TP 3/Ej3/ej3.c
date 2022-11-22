/*Desarrollar un algoritmo que ingrese 10 números enteros y muestre por pantalla
un mensaje únicamente cuando son positivos.*/
#include<stdio.h>
int main(){
    int num,i;
    for (i=0;i<10;i++){
        printf("Ingrese un numero entero: ");
        scanf("%d",&num);
        if(num>0){
            printf("\nEs positivo.\n");
        }
    }
    return 0;
}