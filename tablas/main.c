#include <stdio.h> //librerias genericas

int main()
{
    int num_1;
    int num_2;
    int aux;

    printf("Ingrese el primer numero: ");
    scanf("%d",&num_1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num_2);

    if (num_1 > num_2){
        aux = num_2;
        num_2 = num_1;
        num_1 = aux;
    }

    for (int a = num_1; a <= num_2; a++)
    {
        printf("\nLa tabale del %d \n",a);
        for (int b = 1; b <= 10; b++)
        {
            printf("%d x %d : %d \n",a,b,a*b);
        }
    }

    return 0;
}