#include <stdio.h>
#include <stdlib.h>

int main()
{

    int max = 100;
    int min = 10;
    int i;

    for (i = 0; i < 10; i++)
    {

        int random = rand() % (max - min + 1) + min;

        printf("%c ", (char)(random));
    }

    return 0;
}
 
 //muy complejo para el momentos