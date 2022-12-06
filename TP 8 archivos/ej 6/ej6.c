/*6. Desarrollar una función que tome como parámetro de entrada el 
archivo creado en el punto anterior y liste su contenido por pantalla.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */
#include<stdio.h>
#include<stdlib.h>

void lista(FILE *x){
    char c;
    while (c!=EOF)
    {
        c = fgetc(x);
        printf("%c",c);
    }
}

int main(){
    FILE *f;
    f = fopen("Primos.txt","r");
    if (f==NULL)
    {
        printf("Error al abrir el archivo.\n");
    }
    else
    {
        lista(f);
        fclose(f);
    }
    return 0;
}