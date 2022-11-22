/*8. Dados dos arreglos unidimensionales A, B de n y m valores respectivamente, que
representan los elementos de un conjunto, se pide mostrar:
a. La unión.
b. La diferencia.
c. La intersección.

Giannini Sebastian; Comision 1603 TT 2022; Programación I

TERMINAR : Corregir Diferencia.

 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void mostrarConjunto ( int x[],int z){  //Funcion para mostrar los conjuntos A y B
    int i;
    for ( i = 0; i < z; i++)
    {
        if (i==z-1){
            printf("%d }\n",x[i]);
        }
        else{
        printf("%d,",x[i]);
        }
    }
}

void union_conjuntos(int x[], int y[]){  // a.
    int i,j;
    printf("\nA) Union: nuevo conjunto = { ");
    for ( i = 1; i <= 100 ; i++)     //Ciclo que abarca los valores de 0 a 10, para comparar con los valores de los conjuntos A y B.
    {
        for ( j = 0; j < 10; j++)
        {
            if( i == x[j] ){        //Comparamos el valor de i que va de 1 a 100, con el valor almacenado en la posición del vector.
                printf("%d,",i);
                j=10;                /*Para ambas condiciones colocamos j=10 para que salga del bucle anidado
                                     una vez coincidan i con el valor almacenado en la posición del vector.*/           
            }
            else if ( i == y[j] ){
                printf("%d,",i);
                j=10;
            }
        }
    }
    printf(" }\n");
}

void diferencia(int x[], int y[], int z, int w){
    int i,j,k;
    printf("\nB) Diferencia\n\n");
    printf("A-B = { ");
    for ( i = 0; i < z ; i++)
    {
        for ( j = 0; j < w; j++)
        {
            if ( x[i] == y[j] )
            {
                i++;
                j=w;
            }
            else if ( x[i] != y[j] ){
                printf("%d, ",x[i]);
                i++;
                j=w;
            }

        }
    }
    printf(" }\n");
    printf("\nB-A = { ");
    for ( i = 0; i < w; i++)
    {
        for ( j = 0; j < z ; j++)
        {
            if ( y[i] == x[j] )
            {
                i++;
                j=z;
            }
            else if ( y[i] != x[j] ){
                printf("%d,",y[i]);
                i++;
                j=z;
                
            }
        }
    }
    printf(" }\n");
}

void interseccion(int x[], int y[],int z, int w){
    int i,j,k,cont=0;
    printf("\nC) La interseccion entre ambos conjuntos es = { ");
    for ( i = 0; i <= 100; i++)
    {
        for ( j = 0; j < z; j++)
        {
            if (i==x[j])
            {
                for ( k = 0; k < w; k++)
                {
                    if (x[j]==y[k])
                    {
                        printf("%d, ",x[j]);
                        j=z;
                        k=w;
                    } 
                }
            }
        }   
    }
    printf("}\n");
}


int main (){
    int a[10],b[10];
    int n,m,i,elem;
    //srand(time(NULL));
    printf("Ingrese cantidad de elementos del conjunto A: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++) // bucle para ingresar valores al vector A
    {
        printf("\n%d º elemento: ",i+1);
        scanf("%d",&a[i]);
        
    }
    system("cls");
    printf("\nconjunto A = { ");
    mostrarConjunto(a,n);
    printf("Ingrese cantidad de elementos del conjunto B: ");
    scanf("%d",&m);
    for ( i = 0; i < m; i++) // bucle para ingresar valores al vector B
    {
        printf("\n%d º elemento: ",i+1);
        scanf("%d",&b[i]);
    }
    system("cls");
    printf("\nconjunto A = { ");
    mostrarConjunto(a,n);
    printf("\nconjunto B = { ");
    mostrarConjunto(b,m);
    union_conjuntos(a,b);
    diferencia(a,b,n,m);
    interseccion(a,b,n,m);
    return 0;
}
            