#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Array
  Descripción: Ingresar un vector de 10 números e informar el promedio.
  Programa: Eje01_guia2
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 10
int main()
{
  int i, numero[MAX], suma = 0;
  float aux, prom = 0;
  for (i = 0; i < 10; i++)
  {
    printf("Ingrese los valores: ");
    scanf("%d", &numero[i]);
    suma = suma + numero[i];
    aux = suma;
    prom = aux / MAX;
  }
  printf("El promedio de todos los numeros es %.2f ", prom);
}