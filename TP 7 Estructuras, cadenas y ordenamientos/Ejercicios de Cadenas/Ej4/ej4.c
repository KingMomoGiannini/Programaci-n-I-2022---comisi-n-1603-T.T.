/*4. Diseñar un algoritmo que lea una palabra y que muestre carácter a carácter sin
repeticiones.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */
#include<stdio.h>
#include<string.h>

int main(){
    char palabra[25],letras[25]= {'$'};
    int i,j,sinRep=0;
    puts("Ingrese una palabra: ");
    gets(palabra);
    for ( i = 0; i < strlen(palabra); i++) // Muestra caracter a caracter.
    {
        printf("%c  ", palabra[i]);
    }
    printf("\n\n");
    for ( i = 0; i < strlen(palabra); i++)
    {
        int seRepite=0;
        for ( j = 0; j < sinRep; j++)    // sinRep=0, lo que da a entender que el primer caracter se va a guardar, y luego sinRep, aumentará de 1 en 1.
        {
            if(palabra[i]==letras[j]){    // Si alguna letra de la palabra se repite, esta no se guarda en la nueva cadena.
                seRepite= seRepite + 1;   // seRepite, funciona como bandera, para percibir si un caracter vuelve a aparecer  
            }                             // luego de haberse ya ingresado en la cadena "letras".  
        }
        if (seRepite==0)                  
        {
            letras[sinRep]=palabra[i];    // Ingresamos el caracter sin repetir en cada elemento de la cadena "letras".
            sinRep = sinRep + 1;          // Agregamos un elemento a la cadena para contar luego los caracteres 
        }                                 // que hayamos ingresado en la misma.
    }
    printf("Cadena sin repetir letras: \n"); //Mostramos la nueva cadena con un bucle, usando como condición de corte
    for ( i = 0; i < sinRep; i++)            // la cantidad de elementos ingresados en "letras".
    {
        printf("%c  ",letras[i]);
    }
    printf("\n\n");    
    return 0;
}