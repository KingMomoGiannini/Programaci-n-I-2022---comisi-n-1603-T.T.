/* 2) Cargar un archivo de texto con cadenas de caracteres y despues mostrarlas por pantalla.

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *archivo;   //Creamos el archivo
    archivo = fopen("test.txt", "w");   //Abrimos el archivo, y le damos el nombre "test", la "w" indica que vamos a escribir dentro de ese archivo.
    char c[30];  
    printf("Ingrese una cadena de caracteres: ");
    fflush(stdin);
    gets(c);
    while (c != 'z')  //Bucle para ingresar caracteres en el archivo, hasta ingresar una "z".
    {
        fputs(c,archivo);   //Enviamos el contenido de la variable "c" hacia el archivo.
        printf("\nIngrese otra cadena: ");
        fflush(stdin);
        gets(c);  //Seguimos ingresando caracteres y enviandolas al archivo.
    }
    fclose(archivo); //Cerramos el archivo para dejar de ingresar datos en el.
    archivo = fopen("test.txt","r");  //Abrimos el archivo nuevamente para leer los datos que hay dentro.
    strcpy(c,fgets(archivo,strlen(c),archivo)); //Asignamos a "c" el primer caractér del archivo.
    while (c!= EOF) //Bucle para mostrar cada caracter, 
    {
        puts(c);
        strcpy(c,fgets(archivo,strlen(c),archivo)); //nuevamente asignamos a "c" el próximo caracter del archivo
        
    }
    fclose(archivo);
    printf("\n\n");
    return 0;
}

