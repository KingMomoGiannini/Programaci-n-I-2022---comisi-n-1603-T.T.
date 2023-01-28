#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    int codigo;
    int categoria;
    float deuda;
    char nombreApellido[20];
    char estado;
}datos;

void cargaReg(FILE *x,datos a[100], int *i ){
    int codigo;
    int cat;
    float deud;
    char estado;
    char nya[20];

    fscanf(x,"%d\t%s\t%d\t%c\t%f\n",&codigo,&nya,&cat,&estado,&deud);
    while(!feof(x)){
        if (estado == 'A')
        {
            a[*i].codigo = codigo;
            strcpy(a[*i].nombreApellido,nya);
            a[*i].categoria=cat;
            a[*i].estado = estado;
            a[*i].deuda = deud;
            *i = *i + 1;
        }    
        fscanf(x,"%d\t%s\t%d\t%c\t%f\n",&codigo,&nya,&cat,&estado,&deud);
    }
    printf("%d",*i);
}

void SaldoACobrar(datos a[100],float adeudadoT[3], int *i){

    for (int j = 0; j < *i; j++)
    {
        if(a[j].categoria == 1){
            adeudadoT[0] = adeudadoT[0] + a[j].deuda;
        }
        else if(a[j].categoria == 2){
            adeudadoT[1] = adeudadoT[1] + a[j].deuda;
        }
        else if(a[j].categoria == 3){
            adeudadoT[2] = adeudadoT[2] + a[j].deuda;
        }
    }
}   

int Mostrar(int *i,float x[3]){
    if (*i==3)
    {
        return 0;
    }
    else{ 
        printf("\t%d\t$%.2f\n",*i+1,x[*i]);
        *i = *i + 1;
        return Mostrar(i,x);
    }
}

void Informe(datos x[100],int y,float *mayDeuda){
    *mayDeuda=0;
    for (int i = 0; i < y; i++)
    {
        if (x[i].deuda>*mayDeuda)
        {
            *mayDeuda = x[i].deuda;
        }
    }
}

int main(){
    FILE *f;
    datos socios[100];
    int x=0, y=0,z=0;
    float deuda[3]={0},deudaMax;
    f = fopen("Socios.txt","r");
    if (f == NULL)
    {
        printf("Error de apertura de archivo.\n");
    }
    else
    {
        cargaReg(f,socios,&z);

        for (int i = 0; i < z ; i++)
        {
            printf("%d\t",socios[i].codigo);
            printf("%s\t",&socios[i].nombreApellido);
            printf("%d\t",socios[i].categoria);
            printf("%s\t",&socios[i].estado);
            printf("$%f\n",socios[i].deuda);
        }
        system("pause");
        fclose(f);
        SaldoACobrar(socios,deuda,&z);
        printf("\nCategoria\tDeuda Total\n");
        Mostrar(&x,deuda);
        system("pause");
        Informe(socios,z,&deudaMax);
        printf("\n-----\nSocios con mayor deuda registrada:\n");
        for (int i = 0; i < z; i++)
        {
            if(deudaMax == socios[i].deuda){
                printf("%d\t",socios[i].codigo);
                printf("%s\t",&socios[i].nombreApellido);
                printf("%d\t",socios[i].categoria);
                printf("%s\t",&socios[i].estado);
                printf("$%f\n",socios[i].deuda);
                //printf("---------------\n\n");
            }
        }
        fclose(f);
    }
    return 0;
}