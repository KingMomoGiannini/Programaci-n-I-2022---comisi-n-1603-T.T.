/*5. Diseñar una función recursiva que calcule y muestre la suma de los primeros “n”
números naturales. El valor de n se ingresa por teclado.
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */
#include<stdio.h>

int sumaNat(int a, int b){
    if(a==0){
        return 1;
    }
    else{
        printf("%d + %d = %d\n",b,a,a+b);
        b= b + a;
        return sumaNat(a-1,b);
    }
}

int main (){
    int n,nsum=0;
    printf("Ingrese un numero para N: ");
    scanf("%d",&n);
    sumaNat(n,nsum);
    return 0;
}
