/*6. Diseñar un algoritmo que lea una palabra e indique si dicha palabra es un
palíndromo (si es capicua o no).

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (){
    char palabra[20], palabra2[20];
    int i,j,cont=0;
    puts("Ingrese una palabra: ");
    gets(palabra);
    int indice=strlen(palabra);
    j = indice;
    for ( i = 0 ; i < indice ; i++)
    {
        j = j - 1;
        palabra2[i] = palabra[j];
    }
    puts(palabra);
    puts(palabra2);
    for ( i = 0; i < indice; i++)
    {
        if(palabra[i]==palabra2[i]){
            cont= cont +1; 
        }
    }
    if(cont==indice){
        printf("\nEs un palindromo.\n");
    }
    else{
        printf("\nNO es un palindromo.\n");
    }
    return 0;
}