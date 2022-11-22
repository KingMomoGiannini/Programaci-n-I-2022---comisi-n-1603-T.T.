/*1. Diseñar un algoritmo que lea una palabra y muestre por pantalla todas las letras que
la componen. Ej HOLA -> H - O - L - A

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char palabra[20];
    puts("Ingrese una palabra: ");
    gets(palabra);
    for (int i = 0; i < strlen(palabra) ; i++)
    {
        if (i==(strlen(palabra)-1)){
            printf("%c",palabra[i]);
        }
        else
        printf("%c-",palabra[i]);
    }
    return 0;   
}