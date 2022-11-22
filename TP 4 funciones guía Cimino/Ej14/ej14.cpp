/* 14) Realizá un programa que permita al usuario ingresar los datos de cada uno de los 8 choferes de 
una empresa de viajes en ómnibus:
▪ Edad [25 a 40] ▪ Antigüedad [5 a 30] ▪ Turno ('M'|'T'|'N')
Todos los choferes obtendrán un bono de 500 dólares. Los que tengan una antigüedad superior a la 
mitad de su edad, cobrarán un 10% extra. Los del turno nocturno cobrarán otro 5% extra.
La computadora debe mostrar, de forma clara y ordenada:
A) El monto total que la empresa paga en concepto de bono para todos sus choferes.
B) En cuál turno los choferes son, en promedio, más jóvenes.*/ 
#include<stdio.h>
#include<stdlib.h>

int valEdad(int x){
    if((x<25)||(x>40)){
        return 1;
    }
    else if((x>=25)&&(x<=40)){
        return 0;
    }
}

int valAntig(int x){
    if((x<5)||(x>30)){
        return 1;
    }
    else if((x>=5)&&(x<=30)){
        return 0;
    }
}
char valTurno(char l){
    switch (l)
    {
    case 'm':case 'M':
        return 'm';
        break;
    case 't':case 'T':
        return 't';
        break;
    case 'n':case 'N':
        return 'n';
        break;
    default:
        return '0';
        break;
    }
}

int main(){
    int choferes=2,edad,antiguedad;
    char turno;
    system("cls");
    for (int i = 1; i <= choferes; i++)
    {
        printf("chofer %d.\n",i);
        do
        {
            printf("\nIngrese la edad del chofer: ");
            scanf("%d",&edad);
            valEdad(edad);
            if (valEdad(edad)!=0)
            {
                printf("\nDebe ser una edad entre 25 y 40 años.");
            }
            
        } while (valEdad(edad)!=0);
        do
        {
            printf("\nIngrese la antiguedad del chofer: ");
            scanf("%d",&antiguedad);
            valAntig(antiguedad);
            if (valAntig(antiguedad)!=0)
            {
                printf("\nDebe ser una antiguedad entre 5 y 30 años.");
            }
        } while (valAntig(antiguedad)!=0);
        do
        {
            printf("\nTurno en el que trabaja el chofer:\n\t-M (Mañana)\n\t-T (Tarde)\n\t-N (Noche)\n\n");
            fflush(stdin);
            scanf("%c",&turno);
            valTurno(turno);
            if (valTurno(turno)=='0')
            {
                printf("\nCaracter invalido.\n");
            }            
        } while (valTurno(turno)=='0');
        

        system("cls");
    }
    
    return 0;
}
