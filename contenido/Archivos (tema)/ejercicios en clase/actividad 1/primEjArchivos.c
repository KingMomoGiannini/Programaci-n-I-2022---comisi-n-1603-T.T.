/*Cargar un archivo de texto con caracteres y despues mostrarlo por pantalla.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *archivo;   //Creamos el archivo
    archivo = fopen("test.txt", "w");   //Abrimos el archivo, y le damos el nombre "test", la "w" indica que vamos a escribir dentro de ese archivo.
    char c;  
    printf("Ingrese un caracter: ");
    fflush(stdin);
    scanf("%c",&c);
    while (c != 'z')  //Bucle para ingresar caracteres en el archivo, hasta ingresar una "z".
    {
        fputc(c,archivo);   //Enviamos el contenido de la variable "c" hacia el archivo.
        printf("\nIngrese otro dato: ");
        fflush(stdin);
        scanf("%c",&c);  //Seguimos ingresando caracteres y enviandolas al archivo.
    }
    fclose(archivo); //Cerramos el archivo para dejar de ingresar datos en el.
    archivo = fopen("test.txt","r");  //Abrimos el archivo nuevamente para leer los datos que hay dentro.
    c = fgetc(archivo); //Asignamos a "c" el primer caractér del archivo.
    while (c!= EOF) //Bucle para mostrar cada caracter, 
    {
        printf("%c",c);
        c = fgetc(archivo); //nuevamente asignamos a "c" el próximo caracter del archivo
        
    }
    fclose(archivo);
    printf("\n\n");
    return 0;
}

/* 2) Cargar un archivo de texto con cadenas de caracteres y despues mostrarlas por pantalla.

*/


/*int main(){
    FILE *archivo;
    char c;
    archivo = fopen("test.txt","r");
    if (archivo!=NULL)
    {
        c = fgetc(archivo);
        while (c!=EOF)
        {
            printf("%c",c);
            c = fgetc(archivo);
        }
        fclose(archivo);
        
    }
    return 0;
    
}*/