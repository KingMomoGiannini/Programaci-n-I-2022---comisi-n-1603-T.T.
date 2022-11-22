/*  9. Desarrollar un algoritmo que muestre por pantalla una media pirámide de dígitos
como se muestra en la siguiente figura. Crear una función recursiva para generar
cada fila de la de la media pirámide. El usuario introduce por teclado el valor N<10,
que representa el número que indica el final de la media pirámide.
1
21
321
4321
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */
#include<stdio.h>

void mediaPiramide(int x){
    int i;
    if(x==0){
        printf("\n");
    }
    else{
        mediaPiramide(x-1);
        if(x>=1){
            for ( i = x; i >= 1 ; i--)
            {
                printf("%d",i);
            }
            printf("\n");
        }
    }
}

int main(){
    int n;
    printf("Ingrese un valor menor a 10 y mayor a 0: ");
    scanf("%d",&n);
    mediaPiramide(n);
    return 0;
}