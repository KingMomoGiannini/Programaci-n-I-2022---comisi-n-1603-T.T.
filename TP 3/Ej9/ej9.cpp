/* Desarrollar un algoritmo que ingrese un entero positivo, y muestre por pantalla la
suma de sus cifras */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,cif,sumCif=0,cont=1;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d",&num);
    system("cls");
    while (num>0){
        cif=num%10;
        sumCif = sumCif + cif;
        num = num/10;
        printf("\nCifra %d : %d",cont,cif);
        cont++;
    }
    printf("\n\nLa suma de las cifras del numero ingresado da: %d",sumCif);
    return 0;
}