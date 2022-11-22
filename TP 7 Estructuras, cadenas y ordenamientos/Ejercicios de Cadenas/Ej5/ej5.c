/*5. Diseñar un algoritmo que lea una palabra y la transforme a mayúscula.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char palabra[20];
    int i, j;
    puts("Ingrese una palabra: ");
    gets(palabra);
    printf("\nPalabra en matusculas: \n");
    for ( i = 0; i < strlen(palabra); i++)
    {
        palabra[i] = toupper(palabra[i]); //Aplicamos función toupper() que sirve para 
        printf("%c",palabra[i]);          //transformar una letra minuscula en mayuscula.
    }
    printf("\n");
    return 0;
}