/*4. Sobre el archivo anterior, desarrollar un algoritmo que lea dicho archivo y cuente la
cantidad de palabras, la cantidad de líneas y la cantidad de caracteres del mismo.
Mostrar los resultados por pantalla.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){
    int cPalabras=0,cLineas=0,cCaracteres=0, palabra=0;
    char c;
    FILE *f;
    f = fopen("MiTexto.txt","r"); //Abrimos el archivo para lectura.
    if (f == NULL)
    {
        printf("\nError de apertura de archivo.\n"); // Indicador de que el archivo no se puede leer.
    }
    else{
        while (c!=EOF)
        {
            c = fgetc(f);
            if(isgraph(c)){ // "isgraph()" es una función que devuelve = 1 cuando el caracter es graficable por la consola(excepto el espacio).
                /*Si se lee un caracter, se cuenta
                y ademas se tiene en cuenta que forma 
                parte de una palabra*/
                cCaracteres= cCaracteres + 1;
                palabra=1;  //Indica que existe una palabra.
            }
            else{ //Si no se lee un caracter graficable (Si hay un espacio) y se indica que una palabra existe. Contamos la palabra.
                if(palabra==1){  
                    cPalabras = cPalabras+1;
                }
                palabra=0; //Volvemos a indicar que en el espacio no hay caracteres.
            }
            if (cCaracteres == 1) //Si un caracter se cuenta, ya existe una linea.
            {
                cLineas = 1;
            }
            if(c=='\n'){   //Si c equivale a un salto de linea, se cuenta una linea mas.
                cLineas= cLineas+1;
            }
        }
    }
    fclose(f);
    printf("\nCantidad de caracteres: %d.",cCaracteres);
    printf("\nCantidad de palabras: %d.",cPalabras);
    printf("\nCantidad de lineas: %d.",cLineas);
    return 0;
}