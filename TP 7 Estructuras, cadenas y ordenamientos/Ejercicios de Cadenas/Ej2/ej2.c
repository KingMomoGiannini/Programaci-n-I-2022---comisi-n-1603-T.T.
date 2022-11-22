/*2. Diseñar un algoritmo que lea una palabra e indique por pantalla cuantas letras tiene
dicha cadena.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char palabra[20];
    puts("Ingrese una palabra: ");
    gets(palabra);
    printf("La palabra ingresada posee %d letras.\n\n",strlen(palabra));
    return 0;
}
