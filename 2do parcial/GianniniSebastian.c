/*Segundo parcial - Arrays, Matrices, Estructuras y Registros
Giannini Sebastian; Comision 1603 TT 2022; Programación I */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char equipos[20];
    int goles;
}datos;

typedef struct{
    int numEquipo;
    int puntos;
}equipo;

void CantGoles(datos gol[4], datos equip[4], int partidos[4][4]){
    int i,j,goles[4][4];
    printf("\nPUNTO (1)\n");
    /*------Ordenamiento por nombre de manera ascendente------*/
    datos aux; 
    for (i = 1; i < 4; i++)
    {
        j = i;
        aux = equip[i];
        while (j > 0 && aux.equipos < equip[j - 1].equipos)
        {
            equip[j] = equip[j - 1];
            j--;
        }
        equip[j] = aux;
    }
    /*------Ingreso de los goles de equipo a equipo-------*/
    for (i=0; i<4;i++){
        gol[i].goles=0;
        for(j=0; j<4; j++){
            if(i==j){
                j=j+1;
            }
            if(j<4){
                printf("\ngoles de %s a %s: ",equip[i].equipos,equip[j].equipos);
                scanf("%d",&partidos[i][j]);
                gol[i].goles = gol[i].goles + partidos[i][j];
            }
        }
    }
    /*-------Mostramos la cantidad de goles que metio cada equipo-------*/
    for(i=0;i<4;i++){
        printf("\nEquipo %s; Cantidad de goles %d .",equip[i].equipos,gol[i].goles);
    }
    system("pause");
    system("cls");
}
/*Funcion que crea y muestra la tabla que almacena los goles en cada partido */
void mostrarTabla(int partidos[4][4], datos equip[4]){
    for (int i = 0; i < 4; i++)
    {
        printf("\n%s: ",equip[i].equipos);
        for (int j = 0; j < 4; j++)
        {
            if (i==j){
                printf("\t-");
                j++;
            }
            else{
                printf("\t%d",partidos[i][j]);
            }
            if (j==3)
            {
                printf("\t%d\n",partidos[i][j]);
            }
        }
    }
    printf("\n\n");
    system("pause");
}

void puntuacion(int partidos[4][4], equipo num_equipo[4]){
    for (int i = 0; i<4; i++)
    {
        num_equipo[i].puntos=0; //Todos los equipos comienzan con los puntos en 0 
        for (int j = 0; j < 4; j++) // A medida que se compara entre partidos se añade o no puntaje.
        {
            if (j==i)
            {
                j = j+1;
            }
            if (j<4)
            {
                if(partidos[i][j]>partidos[j][i]){
                    num_equipo[i].puntos= num_equipo[i].puntos +3;
                    num_equipo[i].numEquipo= i+1;
                }
                else{
                    num_equipo[i].numEquipo= i+1;
                }
                if (partidos[i][j]==partidos[j][i])
                {
                    num_equipo[i].puntos=num_equipo[i].puntos + 1;
                    num_equipo[i].numEquipo= i+1;
                }
            }
        }
    }
}

void ganador(equipo puntos[4], datos equipo[4],char ganador[20] ){
    int max=0,cont=0;
    for (int i = 0; i < 4; i++)
    {
        if (puntos[i].puntos>max)
        {
            max = puntos[i].puntos;
            strcpy(ganador,equipo[i].equipos);
            cont = 0;
        }
        if((max>0) && (max == puntos[i].puntos)){
            cont= cont +1;
        }
    }
    if (cont>1){
        strcpy(ganador,"empate");
    }
}

int main(){
    datos partido[4];
    equipo datosEquip[4];
    /*-----Armamos la matriz que almacenara los goles de cada equipo en cada partido------*/
    int partidos[4][4];
    /*-----Pre-cargamos los nombres de los equipos para enviarlos al array de registros------*/
    char equipos[4][20]= {"River plate","Racing club","Boca Juniors","A.Independiente"};
    char win[20];
    /*-----Enviamos los nombres al array de registros------*/
    for (int i=0;i<4;i++){
        strcpy(partido[i].equipos,equipos[i]);
        puts(partido[i].equipos);
    }
    CantGoles(partido,partido,partidos);
    mostrarTabla(partidos,partido);
    printf("\n");
    puntuacion(partidos,datosEquip);
    /*-----Mostramos la puntuación de cada equipo------*/
    for (int i = 0; i < 4; i++)
    {
        printf("\nEl equipo nro: %d : %s. obtuvo: %d puntos.",datosEquip[i].numEquipo,partido[i].equipos,datosEquip[i].puntos);
    }
    printf("\n\n");
    system("pause");
    printf("\n\n");
    ganador(datosEquip,partido,win);
    /*-----Indicamos al ganador o si hubo un empate------*/
    if(strcmp(win,"empate")!=0){
        printf("\nEl equipo ganador es: %s \n",win);
    }
    else{
        printf("\nEMPATE!\n");
    }
    return 0;
}