#include <stdio.h>
#define n 100
int main()
{
    FILE *archivo;
    char cadena[n];
    char *res;
    archivo = fopen("string.txt", "r");
    if (archivo != NULL)
    {
        res = fgets(cadena, n, archivo);
        while (res != NULL)
        {
            printf("%s", cadena);
            res = fgets(cadena, n, archivo);
        }
        fclose(archivo);
    }
    else
    {
        printf("Error en la apertura");
    }
    return 0;
}
