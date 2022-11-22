/*Definí las siguientes funciones, asegurándote
 su correcto funcionamiento con algunos tests.
 2) obtenerResto, que devuelva el resto del 
cociente entre dos números enteros dados
como parámetros (sin usar el operador %).*/
#include<stdio.h>

int obtenerResto(int x,int y){
    int cociente,resto;
    cociente = x/y;
    resto = x - (cociente * y);
    return resto; 
}

int main(){
    int numerador,denominador;
    printf("Ingrese un numero para el numerador: ");
    scanf("%d",&numerador);
    printf("Ingrese otro numero para el denominador: ");
    scanf("%d",&denominador);
    obtenerResto(numerador,denominador);
    printf("El resto del cociente es : %d",obtenerResto(numerador,denominador));
    return 0;
}