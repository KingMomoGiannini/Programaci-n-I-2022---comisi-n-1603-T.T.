/* Desarrollar un algoritmo que escriba en pantalla todos los números pares
comprendidos entre 1 y 50 */
#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=50;i++){
        if (i%2==0){
            printf("%d, ",i);
        }
    }
    return 0;
}