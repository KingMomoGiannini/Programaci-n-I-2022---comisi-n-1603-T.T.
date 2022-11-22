/* Definí las siguientes funciones, asegurándote 
su correcto funcionamiento con algunos tests.
9) mostrarNPrimos, que muestre por la
consola, separados por comas, los primeros n
números primos. El valor de n se recibe como 
parámetro */
#include<stdio.h>
#include<stdlib.h>

void mostrarNPrimos(int x){
    int div=0;
    for (int i = 1; i <=x; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            if((i%j)==0){
                div++;
            }
        }
        if(div==2){
            printf("%d",i);
            if(i!=x){
                printf(", ");
            }
        }
        div=0;
    }   
}

int main(){
    int num;
    system("cls");
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    printf("\nLos numeros primos desde 0 a %d son:\n\n",num);
    mostrarNPrimos(num);
    return 0;
}