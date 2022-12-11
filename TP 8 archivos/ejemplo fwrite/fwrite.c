/*      El siguiente ejemplo sencillo muestra cómo utilizar la función fwrite(). Crea un archivo
binario, y carga 10 números consecutivos. */

#include <stdio.h>
#define n 10
int main()
{
    FILE *f;
    int i;
    f= fopen("numeros.dat", "wb");
    if (f != NULL)
    {
        for (int i = 1; i <= n; i++)
        {
            fwrite(&i, sizeof(int), 1, f);
        }
    fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    return 0;
}
