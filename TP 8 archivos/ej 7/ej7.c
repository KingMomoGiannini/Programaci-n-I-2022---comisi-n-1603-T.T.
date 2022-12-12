/*7. Desarrollar un algoritmo que lea un archivo de texto que contiene un número entero
por renglón. Muestra por pantalla el promedio y los valores del máximo y el mínimo
respectivamente.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main(){
    char carNum[4];
    char *res;
    int prom=0,max=0, min=0,reng=0,num;
    FILE *f;
    f = fopen("enteros.txt","r");
    if (f == NULL)
    {
        printf("Error de apertura de archivo. \n");
    }
    else
    {
        res= fgets(carNum,4,f);
        while (res!=NULL)
        {
            num = atoi(res);  //Función atoi() Para convertir un caracter o cadena numerico en un valor entero.
            res = fgets(carNum,4,f);
            if(num>max){
                max = num;
            }
            else if(num>0 && num<max){
                min = num;
                if (num<min)
                {
                    min = num;
                }
            }
            prom = prom + num;
            reng = reng+1;
        }
        prom = prom/reng;
        fclose(f);
        printf("\nEl promedio entre los numeros en el archivo es de: %d", prom);
        printf("\nEl maximo encontrado es: %d",max);
        printf("\nEl minimo encontrado es: %d",min);
        printf("\nRenglones: %d\n\n",reng);
    }
    return 0;
}