/* 13) Realizá un programa que permita al usuario ingresar la cantidad de cierto producto y el precio 
unitario de dicho producto. Por cada carga debe preguntar si se desea seguir ingresando de la forma
"¿Deseás ingresar otro artículo? [S/N]". La carga de datos finaliza cuando el usuario lo 
determine. La computadora debe mostrar el monto total del ticket.*/
#include<stdio.h>
#include<stdlib.h>

float montoCarga(float x, int y){
    float monto;
    monto = x * y;
    return monto;
}

int ingreso(char l){
    do
    {
        switch (l)
        {
        case 's': case 'S':
            return 1;
            break;
        case 'n': case 'N':
            return 0;
            break;
        default:
            printf("\nIngrese un caracter valido.");
            break;
        }
    } while (((l =='s') || (l='S'))&&((l=='n') || (l=='N')));
    
}

int main (){
    int cantidad;
    float precioUnitario,montoTotal=0;
    char ing;
    do
    {    
        printf("Ingrese el precio unitario del producto: ");
        scanf("%f",&precioUnitario);
        printf("Ingrese la cantidad de productos: ");
        scanf("%d",&cantidad);
        montoCarga(precioUnitario,cantidad);
        montoTotal= montoTotal + montoCarga(precioUnitario,cantidad);
        printf("\n¿Deseás ingresar otro artículo? [S/N]: ");
        fflush(stdin);
        scanf("%c",&ing);
        ingreso(ing);
    } while (ingreso(ing)!=0);
    printf("El monto total del ticket es de: $ %.2f",montoTotal);
    return 0;
}