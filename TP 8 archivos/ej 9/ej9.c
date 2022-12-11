/*9. Crear un archivo binario “numeros.dat”, en donde se guarden una sucesión de
números enteros positivos o nulos la carga finaliza cuando se lee un valor negativo .

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *f;
    int num;
    f = fopen("numeros.dat","wb");
    if (f == NULL)
    {
        printf("Error de apertura de archivo.\n");
    }
    else{
       while(num >= 0){
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        if (num>=0)
        {
            fwrite(&num,sizeof(int),1,f);
        }
       }
       fclose(f);
    }
    return 0;
}