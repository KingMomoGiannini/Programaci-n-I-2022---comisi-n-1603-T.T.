/* Desarrollar un algoritmo que ingrese números hasta ingresar un número negativo,
se pide mostrar por pantalla el promedio. */
#include<stdio.h>
int main(){
    int cont=0;
    float num,sum,prom;
    do
    {
        printf("Ingrese un numero positivo: ");
        scanf("%f",&num);
        if (num>0)
        {
            cont=cont+1;
            sum=sum+num;
        }
    } while (num>=0);
    prom = sum/cont;
    printf("\nEl valor promedio de los valores ingresados es de: %.2f",prom);
    return 0;
}