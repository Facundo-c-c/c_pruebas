#include <stdio.h> //librerias genericas
#include "operaciones.h" //funciones de las cuentas

int main()
{

    //variables
  
    int operacion; //creo variables de numeros enteros
    int num_1;
    int num_2;
    int resultado;

    //mensaje y seleccion operacion

    printf("Seleccione la operacion a realizar:\n");
    printf("1. Suma\n");
    printf("2. Resta\n");
    printf("3. Multiplicacion\n");
    printf("4. Division\n");
    printf("Ingrese la operacion: ");
    scanf("%d", &operacion);

    //toma de valores

    printf("Ingrese el primer numero: ");

    scanf("%d",&num_1); //indico el tipo de valor y lo envio a una variable

    printf("Ingrese el segundo numero: ");

    scanf("%d",&num_2);

    //confirmo la operacion y llamo a la funcoin

    switch (operacion)
    {
    case 1:
        resultado = suma(num_1, num_2);
        printf("La suma de los numeros es: %d \n",resultado);
        break;
    case 2:
        resultado = resta(num_1, num_2);
        printf("La resta de los numeros es: %d \n",resultado);
        break;
    case 3:
        resultado = multiplicacion(num_1, num_2);
        printf("La multiplicacion de los numeros es: %d \n",resultado);
        break;
    case 4:
        resultado = division(num_1, num_2); //solos numeros enteros
        printf("La division de los numeros es: %d \n",resultado);
        break;
    default:
        printf("Ingrese una opciona valida");
        break;
    }
}