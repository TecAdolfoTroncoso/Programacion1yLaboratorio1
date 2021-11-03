#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Bucle
  Descripción:Calcular el Factorial de un número leído por teclado e informar si es primo.
  Programa: Eje06_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int main()
{
  int numero, factorial, contador = 0;

  factorial = 1;

  printf("Ingrese el numero a factorizar: \n");
  scanf("%d", &numero);

  for (int i = 1; i <= numero; i++)
  {
    factorial = (factorial * i);
  }

  printf("El factorial de %d es %d.\n", numero, factorial);

  for (int i = 1; i <= numero; i++)
  {
    if (numero % i == 0)
    {
      contador++;
    }
  }

  if (contador == 2)
  {
    printf("El numero %d es primo\n", numero);
  }
  else
  {
    printf("El numero %d no es primo\n", numero);
  }
}
