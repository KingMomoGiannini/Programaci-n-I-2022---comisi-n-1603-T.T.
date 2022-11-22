/*1. Desarrollar un algoritmo que cargue un vector con 50 números enteros y luego los
muestre por pantalla.
Giannini Sebastian;  comisión 1-603 TT */

#include<stdio.h>

int main(){
    int vec[50],i;
    for (i=0;i<50;i++){
        vec[i]=i;
        printf("%d\n",vec[i]);
    }
    return 0;
}
