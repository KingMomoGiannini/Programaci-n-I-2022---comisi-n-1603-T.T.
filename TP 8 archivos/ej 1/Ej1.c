#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
    char c;
    FILE *archivo; //Creamos la variable que estará ligada al archivo.
    archivo = fopen("prueba.txt","r");//Abrimos el archivo previamente creado para leerlo.
    if(archivo == NULL){
        printf("\nError de apertura de archivo.");
    }
    else{
        while(c!=EOF){ //Mientras c sea distinto a el final del archivo de texto, se mostrará cada caracter.
            c = getc(archivo); //Obtenemos un caracter del archivo de texto.
            printf("%c -",c); //Lo mostramos.
        }
    }
    fclose(archivo);
    return 0;
}