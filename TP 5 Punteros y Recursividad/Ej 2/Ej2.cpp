/*2. Diseñar una función void que tome un valor como parámetro de tipo entero y que
lo devuelva invertido también como parámetro. Si el número es cero, el procedimiento 
no modifica el valor del parámetro.
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */
#include<stdio.h>

void inversion(int *a, int *b){
    int c;
    if(*a<10 && *a>=0){  
        c=(*a%10);
        printf("mostrar c= %d\n",c);
        *a=c;
    }
    else{
        c= (*a % 10);
        *b =(*b+c)*10;
        *a=*a/10;
        if(*a/10!=0){
            inversion(a,b);    
        }
        else{
            *a=*a+*b;
        }
    }
}

int main(){
    int num,b=0,*p,*p2;
    printf("Ingrese un numero: ");
    scanf("%d",&num);
    printf("El numero sera invertido...\n");
    p=&num;
    p2=&b;
    inversion(p,p2);
    printf("El numero ahora es: %d\n\n",*p);
    return 0;
}