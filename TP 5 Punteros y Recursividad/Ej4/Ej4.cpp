/*4. Diseñar una función void que reciba como parámetro una fecha como tres enteros
(dia,mes,anio) y devuelva la fecha correspondiente al día siguiente.
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */
#include<stdio.h>

void fechaSig(int *x, int *y, int *z){
    *x = *x + 1;
    if (*x>30) {
        *x = 1;
        *y = *y + 1;
        if(*y > 12){
            *y = 1;
            *z = *z + 1;
        }  
    }
}

int main(){
    int dia,mes,ano,*a,*b,*c;
    printf("Ingrese una fecha\n\nDia: ");
    scanf("%d",&dia);
    printf("\nMes: ");
    scanf("%d",&mes);
    printf("\nAnio: ");
    scanf("%d",&ano);
    a = &dia;
    b = &mes;
    c = &ano;
    fechaSig(a,b,c);
    printf("\n\nEl dia siguiente seria : %d - %d - %d \n\n",*a,*b,*c);
    return 0;
}