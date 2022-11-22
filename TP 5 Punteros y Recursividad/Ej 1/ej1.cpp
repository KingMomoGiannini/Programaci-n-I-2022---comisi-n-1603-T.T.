/*1. Ingresar dos números A y B y desarrollar una función void que reciba como
parámetros de entrada dichos números, que permita dejar en A el número más
grande, y lo retorne al programa principal con el cambio realizado
*/
#include<stdio.h>

void mayorA(int *x, int *y){
    int c;
    if(*y>*x){
        c=*x;
        *x=*y;
        *y=c;
    }
}

int main(){
    int num1,num2,*a,*b;
    printf("Ingresa un numero para A: ");
    scanf("%d",&num1);
    printf("Ingresa un numero para B: ");
    scanf("%d",&num2);
    a=&num1;
    b=&num2;
    mayorA(a,b);
    printf("\n\nEl valor de A es el mayor entre ambos, A vale: %d",*a);
    printf("\n\nB vale: %d\n",*b);
    return 0;
}