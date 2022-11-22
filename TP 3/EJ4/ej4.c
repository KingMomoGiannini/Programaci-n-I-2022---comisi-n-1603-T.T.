/*Desarrollar un algoritmo que, ingrese un número entero entre 0 y 10 (validar este valor) y muestre por pantalla la tabla de multiplicar del número ingresado.*/
#include<stdio.h>
int main(){
    int num,i;
    do
    {
       printf("Ingrese un numero entero entre 0 y 10: ");
       scanf("%d",&num);
       if(num<0 || num>10){
           printf("Valor invalido\n");
        }
    } while (num<0 || num>10);
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}