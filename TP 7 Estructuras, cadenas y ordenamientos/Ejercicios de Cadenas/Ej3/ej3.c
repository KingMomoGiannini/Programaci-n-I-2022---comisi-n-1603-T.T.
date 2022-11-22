/*3. Diseñar un algoritmo que lea una palabra e indique por pantalla cuantas vocales y
cuantas consonantes tiene dicha cadena.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<string.h>


int main(){
    char palabra[20];
    int contVocal=0,contsonante=0;
    puts("Ingrese una palabra: ");
    gets(palabra);
    for (int i = 0; i < strlen(palabra) ; i++)
    {
        if(palabra[i]=='a'||palabra[i]=='A'||palabra[i]=='e'||palabra[i]=='E'||palabra[i]=='i'||palabra[i]=='I'||palabra[i]=='o'||palabra[i]=='O'||palabra[i]=='u'||palabra[i]=='U'){
            contVocal = contVocal + 1;
        }
        else{
            contsonante = contsonante + 1;
        }
    }
    printf("\nLa palabra contiene %d vocales y %d consonantes\n\n",contVocal,contsonante);
    return 0;
}