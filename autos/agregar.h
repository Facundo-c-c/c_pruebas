#ifndef AGREGAR_H
#define AGREGAR_H
#include <stdio.h>
#include <stdlib.h>  

int agregar()
{
    int *auto_precio;
    int *auto_categoria;
    float *auto_impuestos;
    int tamaño;
    int contador;
    int contador_2; //por las dudas
    int i;

    printf("Ingrese cuantos autos va a ingresar \n");
    scanf("%d", &tamaño);

    auto_precio = (int *)malloc(tamaño * sizeof(int)); // arrays semi dinamicos
    auto_categoria = (int *)malloc(tamaño * sizeof(int));
    auto_impuestos = (float *)malloc(tamaño * sizeof(float));

    for (contador = 0; contador < tamaño; contador++)
    {
        printf("Auto numero %d \n", (contador+1));
        printf("Ingrese el precio del auto \n");
        scanf("%d", &auto_precio[contador]);
        printf("Ingrese la categoria 1 2 3 \n");
        scanf("%d", &auto_categoria[contador]);
    }

    for (contador_2 = 0; contador_2 < tamaño; contador_2++)
    {
        switch (auto_categoria[contador_2])
        {
        case 1:
            auto_impuestos[contador_2] = auto_precio[contador_2] * 0.10;
            break;
        case 2: 
            auto_impuestos[contador_2] = auto_precio[contador_2] * 0.07;
            break;
        case 3: 
            auto_impuestos[contador_2] = auto_precio[contador_2] * 0.05;
            break;
        default:
            printf("Error de asignacion en las categorias \n");
            break;
        }
    }

    for (i = 0; i < tamaño; i++)
    {
        printf("\nEl auto de precio %d y categoria %d pagara %.2f impuestos \n",auto_precio[i],auto_categoria[i],auto_impuestos[i]);
    }

    // Liberar memoria del los array semi dinamicos o algo asi
    free(auto_precio);
    free(auto_categoria);
    free(auto_impuestos);
}
#endif