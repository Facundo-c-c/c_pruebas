#include <stdio.h>

int main()
{

    int horas;
    int precio = 0;

    printf("Ingrse la cantidad de horas: \n");
    scanf("%d",&horas);

    if(horas < 2)
    {
        precio = horas * 5;
    }
    else
    {
        if (horas <= 5)
        {
            precio = ((horas - 2) * 3) + 10;
        }
        else
        {
            if (horas <= 10)
            {
                precio = ((horas - 5) * 3) + 22;
            }
            else
            {
                precio = ((horas - 10) * 2) + 22;
            }
        }
    }

    printf("El precio por %dhs de estacionamientos es %d$ \n",horas,precio);

    return 0;
}