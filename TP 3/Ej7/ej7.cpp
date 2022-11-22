/* Desarrollar un algoritmo que calcule y visualice en pantalla una tabla con las 20
primera potencias de 2. v.1 */ 
#include<stdio.h>
int main(){
    int i,j,num=2,pot;
    for(i=0;i<=20;i++){
        if(i==0){
            pot=num/num;
        }
        if (i==1){
            pot=num*1;
        }
        if (i>1){
            pot=pot*num;
        }
        printf("%d elevado a la %d = %d\n",num,i,pot);
    }
    return 0;
}