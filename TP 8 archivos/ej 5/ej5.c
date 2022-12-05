/*5. Desarrollar un algoritmo que cree y guarde en un archivo de texto “Primos.txt”, los
1000 primeros números primos. Cada número se escribirá en una línea. Crear una
función EsPrimo() que indique dicha condición.

Giannini Sebastian; Comisión 1-603 TT 2022; programacion I */


#include<stdio.h>
#include<stdlib.h>

int EsPrimo(int x){
    int i,j,primo=0,cont=0;
    while (primo==0)
    {
        for (j = 1; j <= x; j++)
        {
            if (x==1){ // Indicamos que 1 no es primo.
                x = x +1 ;
            }            
            if (x%j==0) //Contamos los divisores de num (x en esta función)
            {
                cont = cont +1 ;
            }
        }
         /* Si solo tiene 2 divisores (1 y el numero en cuestion) 
            el ciclo while se cierra. si tiene mas de 2 divisores 
            pasamos al siguiente valor, reseteando el contador de 
            divisores. */
        if (cont == 2)
        {
            primo = 1;
        }
        else if(cont > 2)
        {
            primo = 0;
            cont = 0;
            j = 1;
            x = x + 1;
        }
    }
    if (primo == 1 && cont == 2) 
    /*Si ambas condiciones se cumplen (ruptura de ciclo while y confirmación de divisores)
    la función devuelve el numero primo en cuestión. De lo contrario la función retorna 0 */
    {
        return x;
    }
    else
    {
        return 0;
    }
}

int main(){
    FILE *f;
    int num=1,primo=0,cont=0,j;
    f = fopen("Primos.txt","w");
    if (f == NULL)
    {
        printf("\nError de apertura de archivo.\n"); // Indicador de que el archivo no se puede leer.
    }
    else{
        for ( int i = 0; i < 1000; i++) //Ciclo para escribir el archivo 1000 veces
        {
            if (EsPrimo(num)!=0) //El archivo se escribe siempre y cuando el numero que devuelva la función sea distinto de 0
            {
                fprintf(f,"%d\n",EsPrimo(num));
                num = EsPrimo(num)+1; //Le asignamos a num el valor devuelto por la funcion aumentado en 1
            }
        }    
        fclose(f);
    }
    return 0;    
}