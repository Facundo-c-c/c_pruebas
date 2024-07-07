#include <stdio.h> //librerias genericas

int main()
{
    int num_1;
    int num_2;

    for (num_1 = 1; num_1 <= 10; num_1++)
    {
        printf("\nLa tbale del %d \n",num_1);
        for (num_2 = 1; num_2 <= 10; num_2++)
        {
            printf("%d x %d : %d \n",num_1,num_2,num_1*num_2);
        }
        num_2 = 1;

    }

    return 0;
}