#include <stdio.h>
void Informe1(int[]); //Utilizando un índice
void Informe2(int *); //Utilizando un puntero

int main()
{
    int v[5] = {1, 2, 3, 4, 5};
    printf("Informe del vector con un indice");
    Informe1(v);
    printf("Informe del vector con punteros");
    Informe2(v);
    return 0;
}
void Informe1(int a[])
{
    for (int i = 0; i < 5; i++)
    printf("\n%d", a[i]);
}
void Informe2(int *a)
{
    for (int i = 0; i < 5; i++)
    printf("\n%d", *(a + i));
}