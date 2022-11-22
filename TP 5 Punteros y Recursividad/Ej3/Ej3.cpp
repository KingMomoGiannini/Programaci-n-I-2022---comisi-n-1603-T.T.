/*3. Diseñar una función void que tome un valor como parámetro de tipo entero y que
devuelva su módulo o valor absoluto como parámetro.
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */

#include<stdio.h>

void modulo(int *x){
    if(*x<0){
        *x=(*x) * (-1);
    }
}

int main(){
    int num;
    int *valor;
    printf("Ingrese un numero entero como valor: ");
    scanf("%d",&num);
    valor = &num;
    modulo(valor);
    printf("El modulo o valor absoluto del numero ingresado es: %d\n\n", *valor);
    return 0;
}