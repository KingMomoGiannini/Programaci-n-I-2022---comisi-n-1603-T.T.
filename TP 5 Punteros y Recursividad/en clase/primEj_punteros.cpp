/* 16/09/2022
actividad_01: ingresar un numero e imprimir su doble usando una función y pasaje x referencia con puntero
Giannini Sebastián - Informatica Aplicada Comisión 1-603 ; Programación I */

#include <stdio.h>
void doble(int *a){
    *a=*a*2; //Le otorgamos un nuevo valor al puntero, de esta forma lo hacemos pasar por referencia a la funcion principal main
}

int main (){
    int num,*p; // Declaramos una variable entera, y un puntero entero
    printf("ingrese un valor entero: ");
    scanf("%d",&num); // Ingresamos un valor a almacenar en variable
    p=&num; // Hacemos que el puntero "Apunte" a la dirección de la variable
    doble(p); //Llamamos a la función que utiliza como argumento el valor al que apunta el puntero
    printf("el doble es: %d",*p); //Mostamos el valor modificado al que señala nuestro puntero
    printf("\nEl valor de la variable num es: %d", num);
    printf("\nEl valor de p es: %d\n\n", p);
    return 0;
}

/*Conclusión: El puntero que "apunta" hacia la dirección de una variable, 
es capaz de modificar el valor de dicha variable.*/