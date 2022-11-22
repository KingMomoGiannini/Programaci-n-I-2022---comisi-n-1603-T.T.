/* 12) Realizá un programa que permita al usuario ingresar su edad 
(entre 1 y 120 años) y su género ('F' o 'M'). La computadora debe 
indicar si la persona está o no en edad de jubilarse.
( Las mujeres se jubilan con 60 años o más. Los hombres se jubilan 
con 65 años o más.) */
#include<stdio.h>
#include<stdlib.h>

void seJubila(int x, char sexo){
    switch (sexo)
    {
    case 'm':case 'M':
        if(x>=65){
            printf("\nSiendo hombre con 65 años o mas, se puede jubilar.");
        }
        else{ 
            printf("\nSiendo hombre menor a 65 años, NO se puede jubilar.");
        }
        break;
    case 'f':case 'F':
        if(x>=60){
            printf("\nSiendo mujer con 60 años o mas, se puede jubilar.");
        }
        else{ 
            printf("\nSiendo mujer menor a 60 años, NO se puede jubilar.");
        }
        break;
    default:
        break;
    }
}

int main(){
    int edad;
    char genero;
    printf("Ingrese un numero para indicar su edad: ");
    scanf("%d",&edad);
    fflush(stdin);
    printf("\nIndique su genero F(femenino)/M(masculino):\n\n\t-F\n\n\t-M\n\n ");
    scanf("%c",&genero);
    seJubila(edad,genero);
    return 0; 
}