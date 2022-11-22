/* Sebastian Giannini 
6. Desarrollar una función que dado un número entero
devuelva true si es primo de lo contrario que devuelva false.*/
#include<stdio.h>
#include<stdlib.h>

int primo(int x){
    int cont=0,i;
    for ( i = 1; i <= x; i++)
    {
        if(x%i==0)
        {
            cont++;
            if(cont>2){
                return false;
            }
        }
    }
    if (cont==2){
        return true;
    }
}

int main(){
    int num;
    system("cls");
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);
    primo(num);
    if((primo(num))==true){
        printf("\nEl numero ingresado %d, es primo.", num);
    }
    else if((primo(num))==false){
        printf("\nEl numero ingresado %d, NO es primo.", num);
    }
    return 0;
}
