/*8. Diseñar una función recursiva que tome numero y mostrar el mismo de forma
invertida ejemplo 123 – 321.
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */
#include<stdio.h>

void inv(int x)
{
    if (x<10 && x > -10)
    {
        printf("%d",x);
    }
    else{
        printf("%d",x%10);
        inv(x/10);
    }
}

int main(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    inv(num);
    return 0;
}