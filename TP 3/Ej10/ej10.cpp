 /* Desarrollar un algoritmo que ingresa un número entero mayor o igual cero (validar)
y luego muestre por pantalla el factorial del mismo */
#include<stdio.h>
int main (){
    int num,val,i,fact,acum=1;
    num=-1;
    while (num<0)
    {
        printf("Ingrese un numero entero mayor o igual a cero: ");
        scanf("%d",&num);
        if (num<0){
            printf("\nDebe ser mayor o igual a cero.\n");
        }
    }
    for (i=num;i>=1;i--){
        fact=acum*i;
        acum=fact;
        printf("%d",i);
        if(i!=1){ //Condición para mostrar la multiplicación por pantalla.
            printf("*");
        }
    }
    printf("\nEl factorial de %d = %d",num,acum);
    return 0;
}