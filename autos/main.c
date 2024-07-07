#include <stdio.h>
#include <stdbool.h> //booleanos
#include <stdlib.h>  //arrays creo que los dinamicos o algo asi no se xd chatgpt
#include "agregar.h"

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
            menu = false;
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