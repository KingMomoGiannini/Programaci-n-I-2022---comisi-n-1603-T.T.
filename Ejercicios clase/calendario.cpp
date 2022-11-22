#include <stdio.h>//Ejercicio de repaso de Funciones - Giannini Sebastián Informatica Aplicada comisión 1-603 TT 2022
/*Consigna: A partir de la funcion dada, descubrir que hace, luego utilizarla para crear un calendario a partir de una fecha en cuestión*/

int diasemana(int a, int b, int c)
{
  if (b<3)
        {
          b=b+10;
          c=c-1;
        }
  else{
      b=b-2;
    int siglo=c/100;
    int a2=c%100;
    int diasem=(((26*b-2)/10)+a+a2+(a2/4)+(siglo/4)-(2*siglo))%7;
    if (diasem<0)
          diasem=diasem+7;
    return diasem;
      }
}

int main(){
    int i,j,dia,mes,anio,x,k;
    printf("Ingrese un numero para seleccionar el dia de la fecha: ");
    scanf("%d",&dia);
    printf("Ingrese un numero para seleccionar el mes de la fecha: ");
    scanf("%d",&mes);
    printf("Ingrese un numero para seleccionar el anio de la fecha: ");
    scanf("%d",&anio);
    diasemana(dia,mes,anio);
    printf("\nLa fecha seleccionada corresponde al %d dia de la semana.\n\n",diasemana(dia,mes,anio));
    printf(".D|\t.L|\t.m|\t.M|\t.J|\t.V|\t.S|\n");
    printf("****************************************************\n");
    for (j=1;j<=30;j++){ 
      /*Ciclo para contar todos los días del mes de la fecha en cuestion*/
        diasemana(j,mes,anio); 
        /*Se ejecuta para saber que dìa cae cada fecha, en realidad 
        no tiene sentido el llamado a la función, pero se deja la opción 
        de utilizarlo mas de una vez, en caso de que se requiera*/
        if(j==1){
          for(i=0;i<diasemana(j,mes,anio);i++){  
            /*ciclo para llenar el vacío de los días 
            anteriores al primero del mes, si el primer 
            día es cualquiera despues del domingo*/
            printf("--|\t"); 
          }
        }
        if(j<10){
          printf(" ");// linea estetica, agrega un espacio para numeros menores a 10.
        }
        printf("%d|\t",j); // Acá mostramos la fecha que se escribe en cada ciclo.
        if(diasemana(j,mes,anio)==6){ 
          /*Si el día de la semana es el día tope, se deja 
          un espacio para continuar mostrando los valores.*/
          printf("\n");
        }
    }
  return 0;     
}