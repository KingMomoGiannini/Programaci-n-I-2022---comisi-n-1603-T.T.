/* Desarrollar un algoritmo que ingrese dos números enteros, (primero < segundo),
validar y muestre por pantalla los números del primer número al segundo. */
#include<stdio.h>
int main(){
    int num1,num2,i;
    printf("Ingrese el primer numero : ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero : ");
    scanf("%d",&num2);
    for ( i = num1; i <= num2; i++)
    {
        printf("%d",i);
        if(i!=num2){
            printf(", ");
        }
    }
    return 0;
}