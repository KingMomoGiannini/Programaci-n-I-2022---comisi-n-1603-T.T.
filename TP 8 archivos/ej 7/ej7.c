/*7. Desarrollar un algoritmo que lea un archivo de texto que contiene un número entero
por renglón. Muestra por pantalla el promedio y los valores del máximo y el mínimo
respectivamente.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>


int main(){
    char carNum;
    int prom=0,max=0, min=0,reng=1,num;
    FILE *f;
    f = fopen("enteros.txt","r");
    if (f == NULL)
    {
        printf("Error de apertura de archivo. \n");
    }
    else
    {
        while (carNum != EOF)
        {
            carNum = fgetc(f);
            if (carNum!='\n' && carNum != '\0')
            {
                num = atoi(&carNum);  //Función atoi() Para convertir un caracter numerico en un valor entero.
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
            }
            else
            {
                reng = reng+1;
            }
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