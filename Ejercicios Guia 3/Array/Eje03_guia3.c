/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con los números primos comprendidos entre 1 y 100 y los 
  muestre en pantalla en orden ascendente. 
  Programa: Eje03_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void llenar_vector(int v[]);
void imprimir_primos(int v[]);

int main()
{
  system("cls");
  int primos[MAX];
  llenar_vector(primos);
  imprimir_primos(primos);
  system("color 70"); // 7 fondo blanco 0 Letras negras
}

void llenar_vector(int v[])
{
  int i, acumulador = 0, cont = 0;
  for (i = 0; i <= MAX; i++) // limpio la variable
  {
    v[i] = 0;
  }
  for (i = 1; i <= MAX; i++) //
  {
    acumulador++;
    for (int i = 1; i <= acumulador; i++)
    {
      if (acumulador % i == 0)
      {
        cont++;
      }
    }
    if (cont == 2)
    {
      v[i] = acumulador;
    }
    else
    {
      cont = 0;
    }
  }
}

void imprimir_primos(int v[])
{
  printf("Los primos se mostraran de forma ascendente\n");
  for (int i = 0; i < MAX; i++)
  {
    if (v[i] != 0)
    {

      printf("%d  -\t ", v[i]);
    }
  }
}
