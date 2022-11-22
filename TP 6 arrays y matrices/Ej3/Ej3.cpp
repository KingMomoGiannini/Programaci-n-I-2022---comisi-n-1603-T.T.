/*3. Ingresar 20 números y mostrar por pantalla el promedio, y los valores de aquellos
que superaron dicho promedio.
Giannini Sebastian; Comision 1603 TT 2022; Programación I*/

#include<stdio.h>

int main(){
    int num[20],total=0,i;
    float promedio;
    printf("Ingrese 10 numeros para calcular su promedio\n\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d numero: ",i+1);
        scanf("%d",&num[i]);
        total= total+num[i];
    }
    promedio = total/10;
    printf("\n\nEl promedio de todos los numeros ingresados es de: %.2f",promedio);
    for ( i = 0; i < 10; i++)
    {
        if(num[i]>promedio){
            printf("\nvalor: %d, posicion: %d, supera el valor del promedio.",num[i],i);
        }
    }
    return 0;
}