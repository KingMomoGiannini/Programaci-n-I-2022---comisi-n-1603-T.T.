/*10. Crear una función que tome como parámetros de entrada el archivo creado en el
punto anterior y dos vectores de enteros, calcular y guardar los números pares en un
vector los impares en otro y que además calcule y muestre a través de la misma
función la cantidad de ceros cargados.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void indicaParidad(FILE *x, int vec1[10],int vec2[10]){
    int i,j=0,k=0,ceros=0;
    fread(&i,sizeof(int),1,x); // 
    /*Con esta función, le asignamos a "i" el primer dato guardado en el 
    archivo. 
    Nota: Cada vez que usamos la función, se lee el siguiente dato.*/
    printf("Numeros cargados en el archivo: \n");
    while (!feof(x))
    {
        printf("%d\n",i);
        if (i%2==0 && i!=0)
        {
            vec1[j]=i;
            j=j+1;
        }
        else{
            vec2[k]=i;
            k=k+1;
        }
        if (i==0)
        {
            ceros=ceros+1;
        }
        fread(&i,sizeof(int),1,x);//Volvemos a leer al final, ya que al principio leímos el primer dato
    }
    system("pause");
    system("cls");
    printf("\nNumeros pares guardados en el vector 1:\n");
    for ( int z = 0; z < j ; z++)
    {
        printf("%d\n",vec1[z]);
    }
    printf("Numeros impares guardados en el vector 2:\n");
    for ( int y = 0; y < k ; y++)
    {
        printf("%d\n",vec2[y]);
    }
    printf("Cantidad de 0 cargados en el archivo: %d\n",ceros);
}

int main(){
    FILE *f;
    int vec1[10],vec2[10];
    f = fopen("numeros.dat","rb");
    if (f == NULL)
    {
        printf("Error de apertura de archivo.\n");
    }
    else{
        indicaParidad(f,vec1,vec2);
        fclose(f);
    }
    return 0;
}