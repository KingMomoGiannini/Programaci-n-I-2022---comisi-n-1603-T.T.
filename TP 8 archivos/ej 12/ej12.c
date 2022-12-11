/*12. Teniendo en cuenta el archivo creado anteriormente “deportistas”, leerlo y
separarlo en otros dos archivos nuevos. En uno los jugadores de tenis y en otro los
jugadores de fútbol. Mostrarlos por pantalla.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char dni[10];
    char nombreApellido[30];
    char deporte[10];
}datos;

int main(){
    FILE *fp;
    FILE *f1;
    FILE *f2;
    fp = fopen("deportistas2.dat","rb");
    f1 = fopen("futbolistas.dat","wb");
    f2 = fopen("tenistas.dat","wb");
    datos deportistas[100];
    char *res,x[100];
    int i=0;
    if (fp == NULL)
    {
        printf("Error de apertura de archivo.\n");
    }
    else{
        res = fgets(x,100,fp);
        while (res != NULL)
        {   
            printf("%s",x);
            strcpy(deportistas[i].dni,x);
            res = fgets(x,100,fp);
            printf("%s",x);
            strcpy(deportistas[i].nombreApellido,x);
            res = fgets(x,100,fp);
            printf("%s",x);
            strcpy(deportistas[i].deporte,x);
            res = fgets(x,100,fp);
            if (strcmp(deportistas[i].deporte,"futbol\n")==0) //Tener en cuenta siempre el \n al final de la cadena.
            {
                if (f1 == NULL)
                {
                    printf("Error de apertura de archivo furbo.\n");
                }
                else{            
                    fprintf(f1,"%s",deportistas[i].dni);
                    fprintf(f1,"%s",deportistas[i].nombreApellido);
                    fprintf(f1,"%s",deportistas[i].deporte);
                    fprintf(f1,"------------\n");
                }
            }
            else if(strcmp(deportistas[i].deporte,"tenis\n")==0){
                if (f2 == NULL)
                {
                    printf("Error de apertura de archivo tenis.\n");
                }
                else{            
                    fprintf(f2,"%s",deportistas[i].dni);
                    fprintf(f2,"%s",deportistas[i].nombreApellido);
                    fprintf(f2,"%s",deportistas[i].deporte);
                    fprintf(f2,"------------\n");
                }
            }
            i = i + 1;
        }
        fclose(fp);
        fclose(f1);
        fclose(f2);
        printf("-------------------------\n\n");
        f1 = fopen("futbolistas.dat","rb");
        res = fgets(x,100,f1);
        printf("Futbolistas: \n ");
        while(!feof(f1)){
            printf("%s",x);
            res = fgets(x,100,f1);
        }
        fclose(f1);
        printf("-------------------------\n\n");
        f2 = fopen("tenistas.dat","rb");
        res = fgets(x,100,f2);
        printf("Tenistas: \n ");
        while(!feof(f1)){
            printf("%s",x);
            res = fgets(x,100,f2);
        }
        fclose(f2);
    }
    return 0;
}