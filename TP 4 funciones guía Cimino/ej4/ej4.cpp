/* Definí las siguientes funciones, asegurándote 
su correcto funcionamiento con algunos tests.
4) esVocal, que devuelva si un caracter dado
como parámetro es o no una letra vocal 
(contemplar mayúsculas y minúsculas).*/
#include<stdio.h>
#include<stdlib.h>

int esVocal(char y){
    switch (y)
    {
    case 'a': case 'A': 
        return 1;
        break;
    case 'e' : case 'E': 
        return 1;
        break;
    case 'i' : case 'I':
        return 1;
        break;
    case 'o' : case 'O': 
        return 1;
        break;
    case 'u' : case 'U':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}


int main(){
    char caracter;
    printf("Ingrese un caracter : ");
    fflush(stdin);
    scanf("%c",&caracter);
    esVocal(caracter);
    if(esVocal(caracter)==1){
        printf("\nEs vocal.");
    }
    else{
        printf("\nNo es vocal.");
    }
return 0;
}