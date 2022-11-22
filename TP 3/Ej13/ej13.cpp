/* Desarrollar un algoritmo que pida al usuario dos números y una letra: “I”, “i” ó “p”,
“P”, luego mostrar en pantalla los pares (si se pulsó la “p”, “p”) ó impares (si se pulsó
la “i”, “I”), comprendidos entre el primer número y el segundo. Tener en cuenta que
el primer número debe ser menor al segundo y validar que ingrese las letras
correspondientes.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1,num2,i;
    char paridad=0;
    do
    {
    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    if(num1>num2){
        printf("el primer numero debe ser menor que el segundo.\n\n");
    }
    } while (num1>num2);

    do
    {
        printf("Ingrese que tipos de valores desea mostrar (Pares: P, Impares: I) :\n");
        printf("- P.\n- I.\n\n");
        fflush(stdin);
        scanf("%c",&paridad);
        fflush(stdin);
        if((paridad != 'p')&&(paridad != 'P')&&(paridad != 'i')&&(paridad != 'I')){
            printf("El caracter ingresado no es valido.\n\n");
        }
    }while ((paridad!='p')&&(paridad!='P')&&(paridad!='i')&&(paridad!='I'));
    //while ((paridad!='p')||(paridad!='P')||(paridad!='i')||(paridad!='I')) <-- Esto no permitia que saliera del bucle
    system("cls");
    for ( i = num1; i <=num2 ; i++)
    {
        if (((paridad=='p')||(paridad=='P')) && (i%2==0))
        {
            printf("%d, ",i);
        }
        if (((paridad=='i')||(paridad=='I')) && (i%2 != 0))
        {
            printf("%d, ",i);
        }
    }
   return 0;
}