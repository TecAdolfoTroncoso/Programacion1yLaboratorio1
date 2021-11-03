#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Bucle
  Descripción:Imprimir los primeros N números primos.
  Programa: Eje08_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int main()
{
  int max, numero, divisible;
  divisible = 0;
  numero = 2;
  printf("Ingrese la cantidad de numeros a analizar: ");
  scanf("%d", &max);

  while (numero <= max)
  {
    for (int i = 1; i <= numero; i++)
    {
      if (numero % i == 0)
      {
        divisible++;
      }
      if (divisible > 2)
      {
        break;
      }
    }
    if (divisible == 2)
    {
      printf("%d es primo numero \n", numero);
    }
    divisible = 0;
    numero++;
  }
}