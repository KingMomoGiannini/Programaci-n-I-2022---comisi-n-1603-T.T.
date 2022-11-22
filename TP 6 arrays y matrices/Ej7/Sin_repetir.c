#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int vector[20]={4,2,5,7,6,5,2,1,7,8,9,3,4,2,7,5,9,3,4,20};
    int vector_sin_repetidos[20] = {0};
    int indice = 0;//para cargar en la posicion indicada
    system("cls");
    //------------------------------muestra el vector original-------------------
    for (int i = 0; i < 20; i++)
    {
       printf(" %d ",vector[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        int esigual = 0;//si es igual ignora y no guarda
        for (int j = 0; j < i + 1; j++)
        {
            if (vector[i] == vector_sin_repetidos[j])
            {
                esigual = 1;
            }
        }
        if (esigual == 0)//si no es igual lo guarda
        {
            vector_sin_repetidos[indice] = vector[i];
            indice++;
        }
    }
    printf("\n\nVector sin repetidos\n");
    for (int i = 0; i < indice; i++)
    {
        printf(" %d ", vector_sin_repetidos[i]);
    }

    return 0;
}
