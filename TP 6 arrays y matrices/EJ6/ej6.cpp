/* 6. Se leen números enteros positivos hasta ingresar uno negativo. Se pide mostrar el
valor máximo y las veces que se repite.

Giannini Sebastian; Comision 1603 TT 2022; Programación I */

#include<stdio.h>

int main(){
    int num[1000];
    int sum=0,rep=0; 
    int max;
    printf("Ingrese numeros hasta que sean menores que 0: ");
    do
    {
        scanf("%d",&num[sum]);
        if ( (sum==0) && ( num[sum]>0 ) )
        {
            max = num[sum]; 
        }
        else if(num[sum]>max)
        {
            max = num [sum];
        }
        sum++;
    } while (num[sum-1] > 0); //Al colocar num[sum] nunca terminaba el bucle, a pesar de ingresar un numero negativo, se solucionó colocando "num[sum-1]".

    printf("\nEl valor maximo es: %d \n", max);

    for ( int i = 0; i <sum ; i++)
    {
        if (num[i]==max)
        {
            rep++;
        }
    }
    printf("\nEl valor maximo se repite %d veces\n", rep);
    return 0;
}