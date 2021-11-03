#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Array
  Descripción:Ingresar un vector de 10 números e informar el número máximo.
  Programa: Eje02_guia2
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 10
int main()
{
    int i, numero[MAX],mayor;
    mayor = numero[i];
    for (i = 1; i <= 10; i++)
    {
        printf("Ingrese los valores: %d('Numero de ciclo'):", i );
        scanf("%d", &numero[i]);
        if (numero > mayor)
        {
            mayor = numero;
        }
    }
    printf("El mayor es : %d \n", mayor);
 }
