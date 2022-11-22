/* 11) Realizá un programa que permita al usuario ingresar el valor unitario de cierto artículo y la 
cantidad de artículos vendidos por un vendedor, del cual se sabe que gana un sueldo fijo de $14000 
más el 16% del monto total vendido. Con tales datos, la computadora debe calcular el monto a 
cobrar por el vendedor y mostrarlo.*/

#include<stdio.h>
#include<stdlib.h>

float montoTotal(float x, int y){
    float montoVendido,total;
    montoVendido = x * y;
    total = ((montoVendido/100)*16) + 14000;
    return total;
}

int main(){
    float precioUnitario;
    int cantArtic;
    printf("Ingrese el valor unitario del articulo: $  ");
    scanf("%f",&precioUnitario);
    printf("Ingrese la cantidad de articulos vendidos: ");
    scanf("%d",&cantArtic);
    montoTotal(precioUnitario,cantArtic);
    printf("\n\nEl monto a cobrar por el vendedor es de : $ %.2f",montoTotal(precioUnitario,cantArtic));
    return 0;
}