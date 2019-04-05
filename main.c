#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main()
{
    char seguir='s';
    int opcion=0;
    int n1=0;
    int n2=0;

    while(seguir=='s')
    {
        printf("----------CALCULADORA----------\n\n\n"); //comienzo del menu
        printf("1- Ingresar 1er operando (A= %d)\n",n1);
        printf("2- Ingresar 2do operando (B= %d)\n",n2);
        printf("3- Calcular todas las operaciones\n");
        printf("4- Informar resultados \n");
        printf("5- Salir\n");

        scanf("%d",&opcion); //se toma la opcion que indico el usuario

        switch(opcion)
        {
            case 1:
                system("cls");
                printf("Ingresa el valor del primer operando: ");
                scanf("%d",&n1); //se toma el primer numero
                printf("Valor del 1er operando: %d\n\n",n1);
                break;
            case 2:
                system("cls");
                printf("Ingresa el valor del segundo operando: ");
                scanf("%d",&n2); //se toma el segundo numero
                printf("Valor del 2do operando: %d\n\n",n2);
                break;
            case 3: //aqui se mostraran los valores cargados en cada una de las operaciones
                 system("cls");
                 printf("a- Calcular la suma (%d+%d)\n",n1,n2);
                 printf("b- Calcular la resta (%d-%d)\n",n1,n2);
                 printf("c- Calcular la division (%d/%d)\n",n1,n2);
                 printf("d- Calcular la multiplicacion (%d*%d)\n",n1,n2);
                 printf("e- Calcular el factorial (%d!)\n",n1);
                break;
            case 4: //aqui se mostraran los resultados de todas las operaciones
                system("cls");
                printf("El resultado de la suma es: %d\n\n",sumar(n1,n2));
                printf("El resultado de la resta es: %d\n\n",restar(n1,n2));
                printf("El resultado de la division es: %d\n\n",division(n1,n2));
                printf("El resultado de la multiplicacion es: %d\n\n",mult(n1,n2));
                printf("El resultado del factorial A es: %d\n\n",factorial(n1));
                printf("El resultado del factorial B es: %d\n\n",factorial2(n2));
                break;
            case 5: // aqui se saldra del programa
                seguir = 'n';
                system("cls");
                printf("Fin!");
                break;
                default: //en caso de no asignar un valor numerico correcto de opcion, se volvera a pedir que lo ingrese nuevamente
            printf("Esa opcion no existe, ingrese un numero nuevamente\n\n\n");
        }
    }

    return 0;
}



