/*7. Desarrollar un algoritmo ingrese dos números enteros positivos x e y. Crear una
función recursiva: que calcule la potencia de x^y.
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */
#include<stdio.h>

int potencia(int x, int y){
    if(y==0){
        return 1;
    }
    else{
        return x*(potencia(x,y-1));
    }
}

int main(){
    int base,exponente;
    printf("Ingrese un numero positivo para la base: ");
    scanf("%d",&base);   
    printf("Ingrese un numero positivo para la potencia: ");
    scanf("%d",&exponente);
    printf("el resultado es: %d", potencia(base,exponente));
    return 0;
}