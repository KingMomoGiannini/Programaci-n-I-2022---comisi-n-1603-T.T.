/* Definí las siguientes funciones, asegurándote 
su correcto funcionamiento con algunos tests.
6) esMultiplo, que devuelva si un número 
entero es múltiplo de otro. Ambos son dados
como parámetros. */
#include<stdio.h>
#include<stdlib.h>

int esMultiplo(int x,int y){
    int cociente;
    cociente = x/y;
    for (int i = 1; i <= cociente ; i++)
    {
        int mult;
        mult = y*i;
        if (mult==x)
        {
            return 1;
        }
    }  
}

int main (){
    int num1,num2;
    printf("Ingrese el primer entero como parametro: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo entero como parametro: ");
    scanf("%d",&num2);
    esMultiplo(num1,num2);
    if(esMultiplo(num1,num2)==1){
        printf("\n%d es multiplo de %d.",num1,num2);
    }
    else{
        printf("\nNo son multiplos.");
    }
    return 0;
}