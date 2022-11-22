/*5. Cree y desarrolle una función “potencia” 
que reciba por parámetros dos enteros X(base) e
Y(potencia); y devuelve por pantalla el resultado de dicha operación.*/

#include<stdio.h>
#include<stdlib.h>

int elevadoa(int x, int y){
    int operacion,i;
    for ( i = 0; i <= y; i++)
    {
        if(i==0){
            operacion=1;
        }
        else
        {
            operacion= operacion*x;

        }

    }
   return operacion; 
}

int main(){
    int base,potencia;
    printf("Ingrese un numero para la base: ");
    scanf("%d",&base);
    printf("Ingrese un numero para la potencia: ");
    scanf("%d",&potencia);
    elevadoa(base,potencia);
    printf("\n%d elevado a %d = %d",base,potencia,elevadoa(base,potencia));
    return 0;
}