#include <stdio.h>
#include <stdbool.h> //booleanos
#include <stdlib.h>  //arrays creo que los dinamicos o algo asi no se xd chatgpt

void agregar()
{
    int *auto_precio;
    int *auto_categoria;
    float *auto_impuesto;
    int tamaño;
    int contador;
    int contador_2;
    int i;

    printf("Ingrese cuantos autos va a ingresar \n");
    scanf("%d", &tamaño);

    auto_precio = (int *)malloc(tamaño * sizeof(int)); // arrays semi dinamicos
    auto_categoria = (int *)malloc(tamaño * sizeof(int));
    auto_impuesto = (float *)malloc(tamaño * sizeof(float));

    for (contador = 0; contador < tamaño; contador++)
    {
        printf("Auto numero %d \n", contador);
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
            auto_impuesto[contador_2] = auto_precio[contador_2] * 0.10;
            break;
        case 2: 
            auto_impuesto[contador_2] = auto_precio[contador_2] * 0.07;
            break;
        case 3: 
            auto_impuesto[contador_2] = auto_precio[contador_2] * 0.05;
            break;
        default:
            printf("Error de asignacion en las categorias \n");
            break;
        }
    }

    for (i = 0; i < tamaño; i++)
    {
        printf("\nEl auto de precio %d y categoria %d pagara %d impuestos \n",auto_precio[i],auto_categoria[i],auto_impuesto[i]);
    }

    // Liberar memoria del los array semi dinamicos
    free(auto_precio);
    free(auto_categoria);
    free(auto_impuesto);

    abort();

}

int main()
{
    int opcion;
    bool menu = true;

    while (menu)
    {
        printf("Elije una opcion \n");
        printf("1 - Agregar auto \n");
        printf("2 - salir \n");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            agregar();
            break;
        case 2:
            menu = false;
            break;
        default:
            printf("Elije una opcion valida");
            break;
        }
    }
}

//me rindo :( odio los array en c