#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

/*sumar es la función encargada de sumar los valores n1 y n2*/
int sumar (int n1, int n2)
{
    int respuesta;
    respuesta= n1+n2;
    return (respuesta);

}

/*restar es la función encargada de restar los valores n1 y n2 (n1-n2)*/
int restar(int n1, int n2)
{
    int respuesta;
    respuesta= n1-n2;
    return (respuesta);
}

/*mult es la función encargada de multiplicar los valores n1 y n2 (n1 * n2)*/
int mult(int n1, int n2)
{
    int respuesta;
    respuesta= n1 * n2;
    return (respuesta);

}

/*division es la función encargada de dividir los valores n1 y n2 (n1/n2)
 */
int division(int n1, int n2)
{
    int respuesta;
    if (n2<=0){
        printf("El valor del operando 2 es 0 por lo tanto no se puede dividir, cambie ese valor e intente nuevamente.\n\n");
        }
    respuesta= n1/n2;
    return (respuesta);



}

/*factorial es la función encargada de calcular el factorial del primer operador (n1)
Si n1 es menor que 0, le informa al usuario que no se puede calcular con números negativos.
*/
int factorial(int n1)
{
    int respuesta;
    if(n1==1)
        return 1;
     if (n1<0){
        printf("No se puede calcular factoriales de numeros negativos \n");
        return 0;
    }
    respuesta=n1* factorial(n1-1);
    return (respuesta);

}

/*factorial2 es la función encargada de calcular el factorial del segundo operador (n2)
Si n2 es menor que 0, le informa al usuario que no se puede calcular con números negativos.
*/
int factorial2(int n2)
{
    int respuesta;
    if(n2==1)
        return 1;
     if (n2<0){
        printf("No se puede calcular factoriales de numeros negativos \n");
        return 0;
    }
    respuesta=n2* factorial2(n2-1);
    return (respuesta);
}
