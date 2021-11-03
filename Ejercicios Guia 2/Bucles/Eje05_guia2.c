#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Bucle
  Descripción:Realizar un Programa q implemente el Producto de Wallis para hallar una aproximación del Numero PI
  Programa: Eje05_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int main()
{
    int numero, i, num, dem;
    float pi, aux, numerador, denominador;
    puts("******************************************");
    printf("Ingrese la cantidad de interacciones ");
    scanf("%d", &numero);
    numerador = 2;   //Seteo al numerador en 2
    denominador = 1; // seteo al denominador en 1
    pi = 1.0;
    for (i = 0; i < numero; i++)
    {
        printf(" %d / %d \n", num, dem);
        pi = pi * (numerador / denominador);
        printf("El valor aproximado de pi es: %f \n", pi * 2);
        if ((i % 2) != 0) //Si el valor de la "i" es diferente a 0  incrementa al numerador en 2
        {
            numerador = numerador + 2;
            num = numerador;
        }
        else // Si el valor de la "i" es igual a 0 incrementa al denominador en 2
        {
            denominador = denominador + 2;
            dem = denominador;
        }
    }
}