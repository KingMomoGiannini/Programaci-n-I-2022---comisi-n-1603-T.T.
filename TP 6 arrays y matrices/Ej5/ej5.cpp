/*5. Cargar en un vector los tiempos de clasificación de 60 autos. Determinar:
a. Tiempo promedio.
b. Nro de auto que clasificó primero.
c. Nro de auto que clasificó último.

Nota: Crear una función para cada punto.

Giannini Sebastian; Comision 1603 TT 2022; Programación I */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//a. Tiempo promedio
int tProm(int x){
    int promedio = x/60;
    return promedio;
}

//leer vector
void leertiempito(int *tiempillo){
    int i;
    for ( i = 0; i < 60; i++)
    {
        printf("auto : %d , tiempo: %d seg\n", i,*(tiempillo+i));
    }
}
//b. Nro de auto que clasificó primero.
int primero(int tardoMenos[]){
    int i;
    int compMas,prim;
    for ( i = 0; i < 60; i++)
    {
        if((i==0) && (tardoMenos[i]>0)){  //Usamos un primer valor para comparar con el resto de los que se leeran dentro del bucle for.
            compMas= tardoMenos[i];
        }
        else if (tardoMenos[i]<compMas) // si la siguiente lectura da menor tiempo que la anterior, se guarda en la misma variable que la anterior.
        {
            compMas = tardoMenos[i];
            prim = i;                   // guardamos la posición, que nos dice el numero de auto que tardó menos en llegar.
        }
    }
    return prim;
}

//c. Nro de auto que clasificó último.
int ultimo(int tardoMas[]){
    int i;
    int compMenos, ult;
    for ( i = 0; i < 60; i++)
    {
        if ( (i==0) && (tardoMas[i]>0) ) //Usamos un primer valor para comparar con el resto de los que se leeran dentro del bucle for.
        {
            compMenos = tardoMas[i];
        }
        else if( tardoMas[i] > compMenos){ // guardamos la posición, que nos dice el numero de auto que tardó más en llegar.
            compMenos = tardoMas[i];
            ult = i;
        }
    }
    return ult;
}


int main(){
    
    int i,tiempo=0;
    int autos[60];
    srand(time(NULL));
    for ( i = 0; i < 60; i++)
    {
        autos[i] = rand(); //Se le asigna a cada parte del vector, un tiempo correspondiente a la llegada de cada auto, de manera aleatoria.
        tiempo = tiempo + autos[i];// sumamos todos los tiempos, para tener el tiempo total, y despues hacer el promedio entre todos los autos.
        //printf("auto: %d , Tiempo: %d seg\n",i, autos[i]); Mostramos lo que tardo cada auto en llegar.
    }
    leertiempito(autos);
    printf("\na. Tiempo promedio: %d seg\n", tProm(tiempo));
    printf("\nb. Nro de auto que clasifico primero: %d \n",primero(autos));
    printf("\nc. Nro de auto que clasifico ultimo: %d \n",ultimo(autos));
    return 0;
}
