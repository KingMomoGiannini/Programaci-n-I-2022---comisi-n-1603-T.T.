/* 4. Cargar un vector de n componentes y a través de funciones indicar:
a. Cantidad de elementos positivos.
b. Cantidad de negativos.
c. Cantidad de ceros.
Giannini Sebastian; Comision 1603 TT 2022; Programación I */
#include<stdio.h>

int ePositivos(int x){ 
    if(x>0){
        return 1;
    }
    else{
        return 0;
    }
}

int eNegativos(int y){
    if(y<0){
        return 1;
    }
    else{
        return 0;
    }
}

int ceros(int z){
    if(z==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n,i,vec[100],pos=0,neg=0,cer=0;
    printf("Ingrese un numero para la cantidad de elementos a cargar: ");
    scanf("%d",&n);
    for ( i = 0; i < n ; i++)
    {
        printf("\nPosicion %d, valor: ",i);
        scanf("%d",&vec[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (ePositivos(vec[i])==1){
            pos++;
        }
        if (eNegativos(vec[i])==1)
        { 
            neg++;
        }
        if (ceros(vec[i])==1)
        {
            cer++;
        } 
    }
    printf("\ncantidad de elementos positivos: %d",pos);
    printf("\ncantidad de elementos negativos: %d",neg);
    printf("\ncantidad de ceros: %d\n",cer);
    return 0;
}