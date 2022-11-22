/*4. Extraer un dígito de un número. La función recibe como 
parámetros dos números enteros uno de 5 cifras otro de 1 cifra , 
uno será del que se extraiga el dígito y el otro indica qué 
cifra se desea obtener. La cifra de la derecha se considera la 
número 0 (cero). Retornar el valor -1 si no existe el dígito solicitado. 
En el programa principal, mostrar por pantalla un mensaje que muestre 
el valor obtenido o la frase “El valor x no existe dentro del número xxxx”
Ejemplo: extraervalor(12385, 1) devuelve 8, y extraervalor(12345, 8) devuelve -1. */

#include<stdio.h>
#include<stdlib.h>
int extraervalor(int x, int y){
    int cifra,i;
    switch (y)
    {
    case 0:
        cifra = x%10;
        return cifra;
        break;
    case 1: 
        i = x/10;
        cifra = i%10;
        return cifra;
        break;
    case 2: 
        i = x/100;
        cifra = i%10;
        return cifra;
        break;
    case 3: 
        i = x/1000;
        cifra = i%10;
        return cifra;
        break;
    case 4:
        i = x/10000;
        cifra = i%10;
        return cifra;
        break;
    default:
        return -1;
        break;
    }
}

int main () {
    int num1,num2;
    printf("Ingrese un numero entero de 5 cifras: ");
    scanf("%d",&num1);
    printf("Indique que cifra de ese numero desea obtener:\n Derecha (0-1-2-3-4) Izquierda: ");
    scanf("%d",&num2); 
    do
    {
        extraervalor(num1,num2);
        if(extraervalor(num1,num2)>=0){
            printf("\nLa cifra %d, de %d vale: %d",num2, num1, extraervalor(num1,num2));
        }
        else if(extraervalor(num1,num2)==-1){
            printf("\nel valor x no existe dentro del numero xxxx.\n");
        }
        
    } while (extraervalor(num1,num2)!=-1 && extraervalor(num1,num2)<0);
    return 0;
}

