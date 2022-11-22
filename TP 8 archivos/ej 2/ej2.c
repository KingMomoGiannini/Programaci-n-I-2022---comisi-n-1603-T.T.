#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main (){
    char c;
    char b;
    FILE *archivo; //Creamos el identificador de archivo.
    FILE *archivodos;//Creamos el identificador del segundo archivo.
    archivo = fopen("MiTexto.txt","r"); //Abrimos ambos archivos, uno para lectura y el segundo para escritura.
    archivodos = fopen("MiTextoNuevo.txt","w");
    if (archivo == NULL){
        printf("Error de apertura de archivo.\n");
    }
    else{
        while(c!=EOF){
            c = getc(archivo); //Obtenemos cada caracter del primer archivo.
            putc(c,archivodos);//colocamos caracter a caracter en el segundo archivo.
        }
    }
    fclose(archivo);//Cerramos ambos archivos.
    fclose(archivodos);
    archivodos = fopen("MiTextoNuevo.txt","r"); //Abrimos el segundo archivo, esta vez en modo lectura.
    if(archivodos == NULL){
        printf("Error de apertura de segundo archivo.\n");
    }
    else{
        while (b!=EOF)  // Comprobamos que el segundo archivo contenga una copia de lo que hay en el primero.
        {
            b = getc(archivodos);
            printf("%c",b);
        }
    }
    fclose(archivodos);
    return 0;
}