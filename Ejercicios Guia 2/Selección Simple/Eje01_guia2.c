#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción:Ingresar 2 números, si a < b informar a*b , en caso contrario a/b
  Programa: Eje01_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int main()
{
  int a, b;
  int resultado;
  printf("Ingrese el primer valor: ");
  scanf("%d", &a);
  printf("Ingrese el segundo valor :");
  scanf("%d", &b);
  if (a < b)
  {
    resultado = a * b;
    printf("a*b: %d", resultado);
  }
  else
  {
    resultado = a / b;
    printf("a/b: %d", resultado);
  }
}