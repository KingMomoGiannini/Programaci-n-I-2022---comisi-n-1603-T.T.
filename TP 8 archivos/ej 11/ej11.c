/*11. Desarrolle un programa que genere un archivo binario “deportistas.dat”, cuya
estructura interna sea: DNI(int), NombreApellido(30), deporte(10), tenis o fútbol.
Cargar dicho archivo usando algún criterio conveniente, luego recorrerlo y mostrarlo
por pantalla.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int dni;
    char NombreApellido[30];
    char deporte[10];
}datos;

int main(){
    FILE *f;
    datos deportistas[100];
    int a;
    char x[100];
    char *res;
    f = fopen("deportistas.dat","wb");
    if ( f == NULL)
    {
        printf("Error de apertura de archivo\n");
    }
    else
    {
        while(deportistas->dni !=0){
            printf("Ingrese DNI del deportista: ");
            scanf("%d",&deportistas->dni);
            if(deportistas->dni!=0){
                /*fwrite(&deportistas->dni,sizeof(int),1,f);<--- Esta opción de escritura no dio buen resultado
                                                                        a la hora de escribir en archivo y mostrar el 
                                                                        contenido por pantalla */
                fprintf(f,"DNI: ");
                fprintf(f,"%d\n",deportistas->dni);
                printf("Ingrese nombre y apellido del deportista: ");
                fprintf(f,"Nombre y apellido: ");
                fflush(stdin);
                gets(deportistas->NombreApellido);
                fprintf(f,"%s\n",deportistas->NombreApellido);
                /*fwrite(&deportistas->NombreApellido,sizeof(int),1,f);<--- Esta opción de escritura no dio buen resultado
                                                                        a la hora de escribir en archivo y mostrar el 
                                                                        contenido por pantalla */
                printf("Que deporte realiza? 1) tenis -- 2) futbol : \n");
                scanf("%d",&a);
                if(a==1){
                    strcpy(deportistas->deporte,"tenis");
                    fprintf(f,"Deporte: ");
                    fprintf(f,"%s\n",deportistas->deporte);
                    fprintf(f,"------------------------------\n\n");
                    /*fwrite(&deportistas->deporte,sizeof(int),1,f); <--- Esta opción de escritura no dio buen resultado
                                                                        a la hora de escribir en archivo y mostrar el 
                                                                        contenido por pantalla */
                }
                else
                {
                    strcpy(deportistas->deporte,"futbol");
                    fprintf(f,"Deporte: ");
                    fprintf(f,"%s\n",deportistas->deporte);
                    fprintf(f,"------------------------------\n\n");
                    /*fwrite(&deportistas->deporte,sizeof(int),1,f);<--- Esta opción de escritura no dio buen resultado
                                                                        a la hora de escribir en archivo y mostrar el 
                                                                        contenido por pantalla */
                }
            }
            else{
                system("cls");
            }
        }
        fclose(f);
        f = fopen("deportistas.dat","rb");
        /*fread(&x,sizeof(int),1,f);<--- Esta opción de lectura no dio buen resultado
                                         a la hora de observar el archivo y mostrar el 
                                         contenido por pantalla */
        res = fgets(x,10,f);
        while ( res != NULL )
        {   
            
            printf("%s",x);
            res = fgets(x,10,f);
            /*fread(&x,sizeof(int),1,f);<--Esta opción de lectura no dio buen resultado
                                            a la hora de observar el archivo y mostrar el 
                                            contenido por pantalla */
        }
        fclose(f);
    }
    return 0;
}