/* Definí las siguientes funciones, asegurándote 
su correcto funcionamiento con algunos tests.
10) esNumeroPerfecto, que devuelva si un 
número entero dado como parámetro es o no 
perfecto.*/
#include<stdio.h>
#include<stdlib.h>

int esNumeroPerfecto(int x){
    int div,eldiv=0,sumdiv=0;
    for (int i = 1; i <= x; i++)
    {
        div = x%i;
        if(div==0){
            eldiv =  i;
            sumdiv= sumdiv + eldiv; 
        }
    }
    if((sumdiv-x)==x)
        return 1;
    else
        return 0;
}


int main(){
    int num;    
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    esNumeroPerfecto(num);
    if (esNumeroPerfecto(num)==1)
    {
        printf("\n%d es un numero perfecto.",num);
    }
    else
    {
        printf("\n%d NO es un numero perfecto.",num);
    }
    return 0;
}