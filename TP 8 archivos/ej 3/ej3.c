/*3. Trabajando con el mismo archivo de texto anterior “Mitexto”, desarrollar un
algoritmo que ingrese un carácter e indique cuantas veces se repite dicho carácter
en el texto. Mostrar el resultado por pantalla.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char c,co;
    int cont=0;
    FILE *f;
    f = fopen("MiTexto.txt","r");
    printf("Ingrese un caracter: ");
    fflush(stdin);
    scanf("%c",&c);
    if (f== NULL){
        printf("\nError de apertura de archivo.\n");
    }
    else{
        while(co!=EOF){
            co=fgetc(f);
            if (co == c)
            {
                cont = cont+1;
            }
        }
    }
    fclose(f);
    printf("\nEl archivo contiene %d veces el mismo caracter.\n",cont);
    return 0;
}