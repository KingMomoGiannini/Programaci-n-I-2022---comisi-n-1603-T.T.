/*Sebastian Giannini - TP 4 (funciones)
3. Crear la siguiente función que recibe un número y retorna 
la suma de los dígitos.
Desarrollar un programa para generar valores al azar de 5 dígitos.
Mostrar por pantalla este número y la suma de sus dígitos utilizando 
la función antes descripta. Investigar además la función rand().*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int sum_dig(int x)
{
    int i,cif,suma=0;
    for (i = 0; i < 5; i++)
    {
        cif = x % 10;
        x = x/10; 
        suma = suma + cif;
    }
    return suma;     
}

int main()
{
    int num_azar;
    system("cls");
    do{
        srand(time(NULL)); /*Esta funcion permite que la funcion "rand()" 
                            se base en el tiempo para cambiar constantemente.
                            por eso se usa con la libreria "time.h"  */
        num_azar=rand();   /*La funcion "rand()" genera un numero aleatorio
                            y este numero lo guardamos en una variable---> num_azar */ 
    }while(num_azar<10000);
    printf("Numero al azar: %d",num_azar);
    sum_dig(num_azar);
    printf("\nLa suma de las cifras de el numero aleatorio da: %d",sum_dig(num_azar));
    return 0;
}