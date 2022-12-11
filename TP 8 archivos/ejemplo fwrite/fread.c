/*      A continuación el ejemplo muestra cómo utilizar la función fread(). Abre el archivo creado
en el ejemplo anterior y lo muestra por pantalla: */

#include <stdio.h>
#define n 10
int main()
{
    int i;
    FILE *f;
    f= fopen("deportistas.dat", "rb");
    if (f != NULL)
    {
        fread(&i, sizeof(int), 1, f);
        while (!feof(f))
        {
            printf("%d\n", i);
            fread(&i, sizeof(int), 1, f);
        }
        fclose(f);
    }
    else
    {
        printf("Error en la apertura del archivo");
    }
    return 0;
}
