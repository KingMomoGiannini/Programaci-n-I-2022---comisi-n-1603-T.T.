/*6. Desarrollar un algoritmo que ingrese un valor en decimal y a través de una función
recursiva lo devuelva en binario.
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */
#include<stdio.h>

/*Podemos transformar un numero de decimal a binario dividiendo el mismo sucesivamente por 2
el resto de cada división que hagamos nos devolverá el valor en binario del mismo numero */

int bin(int x){
    if(x==0){
        return 0;
    }
    else{
        bin(x/2); //llamamos a la funcion para apilar el resultado de las divisiones del valor decimal.
        printf("%d",x%2); //mostramos el resultado de cada valor empezando por el que quedo encima de la pila
        return (x%2); //Devolvemos el resto de la división de cada valor hasta el decimal ingresado
        } 
        /*Al llamar a la funcion antes de finalizar las acciones de la misma, lo que hacemos
        es "apilar" los datos, entonces cuando se cumple la condición de corte, estos datos se
        desapilan de la misma forma y las sentencias colocadas luego del llamado a la funcion 
        se realizan a medida que se desapilan los datos - Referencia: "Recursividad NO final" */
}

int main(){
    int dec;
    printf("Ingrese un valor entero: ");
    scanf("%d",&dec);
    bin(dec);   
    printf("\n\n");
    return 0;
}