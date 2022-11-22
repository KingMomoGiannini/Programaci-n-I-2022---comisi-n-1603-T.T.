#include <stdio.h>
#include <stdlib.h>
/* Programa que muestra el total de ventas de varios
productos de una empresa de refrescos */
int main()
{
    int ventas_cola, ventas_naranja, ventas_limon;
    float precio_cola, precio_naranja, precio_limon;
    float total_cola, total_naranja, total_limon;

    /* ------------Lectura de datos: ventas y precio de cada producto----------------------------- */

    printf("Datos de la Bebida Cola:\n");
    printf("\tCantidad de Ventas:");
    scanf("%d", &ventas_cola);
    printf("\tPrecio: ");
    scanf("%f", &precio_cola);
    printf("Datos de la Bebida Naranja:\n");
    printf("\tCantidad de Ventas:");
    scanf("%d", &ventas_naranja);
    printf("\tPrecio: ");
    scanf("%f", &precio_naranja);
    printf("Datos de la bebida limon:\n");
    printf("\tCantidad de Ventas:");
    scanf("%d", &ventas_limon);
    printf("\tPrecio: ");
    scanf("%f", &precio_limon);



    /* --------------------------------------Proceso----------------------------------- */
    total_cola = ventas_cola * precio_cola;
    total_naranja = ventas_naranja * precio_naranja;
    total_limon = ventas_limon * precio_limon;

/* --------------------------------------Salida tabulada------------------------------- */
    printf("Producto\t Ventas\t\t Precio\t Total\n");
    printf("----------------------------------------------\n");
    printf("Cola    %15ld %15.2f %10.2f\n", ventas_cola, precio_cola, total_cola);
    printf("Naranja %15ld %15.2f %10.2f\n", ventas_naranja, precio_naranja, total_naranja);
    printf("Limon   %15ld %15.2f %10.2f\n", ventas_limon, precio_limon, total_limon);
    printf(" %37s %11.2f\n", "TOTAL", total_cola + total_naranja + total_limon);

    return 0;
}
