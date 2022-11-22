/* Desarrollar un algoritmo que ingrese un número entero positivo y muestre por
pantalla todos sus divisores V2 */
#include<stdio.h>
int main(){
    int num,i;
    do
    {
        printf("Ingrese un numero entero positivo: ");
        scanf("%d",&num);
        if(num<0){
            printf("Debe ser positivo.\n");
        }
    } while (num==0 || num<0);

    printf("Divisores de %d : \n",num);
    for(i=1;i<=num;i++) {

        if(num%i==0){
            printf("\t%d\n",i);
        }
    }
    return 0;
}