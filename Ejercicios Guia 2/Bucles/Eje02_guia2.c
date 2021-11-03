#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Bucle
  Descripción:Ingresar 10 números e informar el número máximo.
  Programa: Eje02_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int numero, i;
int mayor;

int main()
{
mayor = numero;
    for (i = 0; i < 10; i++)
    {
        puts("******************************************");
        printf("Ingrese los numeros para obtener el mayor  %d('Numero de ciclo'):", i);
        scanf("%d", &numero);
        if (numero > mayor)
        {
            mayor = numero;
        }
    }

    puts("******************************************");
    printf("El mayor es : %d \n", mayor);
}