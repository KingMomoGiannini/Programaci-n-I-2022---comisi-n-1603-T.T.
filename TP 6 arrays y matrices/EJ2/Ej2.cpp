/* 2. Desarrollar un algoritmo que cargue un vector con 50 elementos y luego informe por
pantalla:
a. El cuarto elemento.
b. El segundo elemento.
c. Los elementos en orden invertido.
d. El producto entre el primero y el último elemento.
e. Los elementos de índice par.
f. Los elementos de índice impar.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */
#include<stdio.h>

int main(){
    int vec[50],i;
    for (i=0;i<50;i++){
        vec[i]=i+1;
    }
    printf("a- El cuarto elemento del vector es: %d\n", vec[3]);
    printf("b- El segundo elemento del vector es: %d\n", vec[1]);
    printf("c- Elementos en orden invertido:\n");
    for(i=49;i>=0;i--){
        printf("%d, ",vec[i]);
    }
    printf("\n\nd- El producto entre el primer y ultimo elemento : %d * %d = %d\n",vec[0],vec[49],vec[0]*vec[49]);
    printf("\ne- Elementos del vector de indice par:\n");
    for (i=0;i<50;i++){
        if(vec[i]%2==0)
        printf("%d, ",vec[i]);
    }
    printf("\nf- Elementos del vector de indice impar:\n");
    for(i=0;i<50;i++){
        if(vec[i]%2!=0)
        printf("%d, ",vec[i]);
    }
    return 0;
}