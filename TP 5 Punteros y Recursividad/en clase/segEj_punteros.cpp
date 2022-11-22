/* 16-09-2022 ingresar dos valores y devolverlos intercambiados (Con punteros)
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I*/

#include<stdio.h>  
void  intercambio(int *x, int*y){
    int c;
    c=*x;
    *x=*y;
    *y=c;
}

int main(){
    int num1,num2,*a,*b;
    printf("Ingrese un valor para A: ");
    scanf("%d",&num1);
    printf("Ingrese otro valor para B: ");
    scanf("%d",&num2);
    a=&num1;
    b=&num2;
    intercambio(a,b);
    printf("El valor de A ahora es %d\n", *a);
    printf("El valor de B ahora es %d", *b);
    return 0;
}