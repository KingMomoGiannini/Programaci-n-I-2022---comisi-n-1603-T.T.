/*Desarrollar un algoritmo que ingrese números hasta leer un cero, calcular y mostrar
por pantalla cuántos de ellos son negativos y cuántos son positivos.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int positivos=0,negativos=0;
    float num;
    do
    {
        printf("Ingrese un numero: ");
        scanf("%f",&num);
        if (num<0)
        negativos++;
        else if(num>0)
        positivos++; 
    } while (num!=0);
    system("pause");
    system("cls");
    printf("\nPositivos: %d\nNegativos: %d\n",positivos,negativos);
    return 0;
}
