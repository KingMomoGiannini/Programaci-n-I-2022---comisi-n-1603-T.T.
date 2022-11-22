 /* Desarrollar un algoritmo que ingresa un número entero mayor o igual cero (validar)
y luego muestre por pantalla el factorial del mismo */
#include<stdio.h>
int main (){
    int num,val;
    num=-1;
    while (num<0)
    {
        printf("Ingrese un numero entero mayor o igual a cero: ");
        scanf("%d",&num);
        if (num<0){
            printf("\nDebe ser mayor o igual a cero.\n");
        }
    }
    /*for (i=num;i>=0;i--){
        fact=num*
        printf("%d * %d",num)
    }*/
    return 0;
}
