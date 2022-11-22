/* Desarrollar un algoritmo que ingrese un número entero positivo y muestre por
pantalla todos sus divisores */
#include<stdio.h>
int main(){
    int num,i;
    do
    {
    printf("Ingrese un numero entero positivo: ");
    scanf("%d",&num);
    for (i=1;i<=num;i++){
        if(num%i==0){
            printf("%d es divisor de %d\n",i,num);
        }
    }
    } while (num==0 || num<0);
    return 0;
}