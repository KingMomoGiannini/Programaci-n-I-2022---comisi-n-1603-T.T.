
#include<stdio.h>
#include<stdlib.h>

int signo(int x){
    if(x>=0){
        return 1;
    }
    else if (x<0){
        return -1;
    }
}

int factorial(int x)
{
    int i, y,fact = 0;
    fact=x;
    for ( i = 1; i <= x ; i++)
    {
        y = (fact * i);
        fact = y;
    }
return y;    
}
int mayor(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}


int main(){
    int m,n;
    do
    {
        printf("Ingrese un numero entero: ");
        scanf("%d",&m);
        printf("Ingrese otro numero entero: ");
        scanf("%d",&n);
        signo(m);
        signo(n);
        if((signo(m)<0) || (signo(n)<0)){
            printf("\nAmbos numeros deben ser positivos. \n");
            system("pause");
            system("cls");
        }
    } while ((signo(m)==-1)||(signo(n)==-1));
    // A
    factorial(m); 
    // B 
    factorial(n);
    printf("\nPm vale: %d",factorial(m));
    printf("\nPn vale: %d",factorial(n));
    // C
    mayor(m,n);
    if (mayor(m,n)>n)
    {
        int var = factorial(m)/factorial(m-n);
        int comb= factorial(m)/(factorial(n)*factorial(m-n));
        printf("\nLa variación entre ambos numeros es: %d",var);
        printf("\nLa combinación entre ambos numeros es: %d",comb);
    }
return 0;
}