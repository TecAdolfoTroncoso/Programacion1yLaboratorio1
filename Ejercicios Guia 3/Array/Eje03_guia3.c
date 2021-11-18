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
int vector[MAX];

int main()
{
  int m;
  system("color 70"); // 7 fondo blanco 0 Letras negras
  llenar_vector();
  //imprime_vector();
  ordenarcaracteres(llenar_vector);
}
void llenar_vector()
{
  for (int i = 0; i < MAX; i++)
  {
    vector[i] = rand() % 101;
  }
}

void imprime_vector()
{
  for (int i = 0; i <= MAX; i++)
  {
    printf("%d - %d \n", i + 1, vector[i]);
  }
}

void ordenarcaracteres(int m)
{

  int cont = 0, x = 0, i, j;
  for (i = 1; m <= i; i++)
  {
    for (j = 1; i <= j; j++)
    {
      if (i % j == 0)
      {
        cont++;
      }
    }
    if (cont == 2 || j == 1 || j == 0)
    {
      vector[i] = j;
      x++;
    }
    else
    {
      cont = 0;
    }
  }

  for (j = 0; j < x; i++)
  {
    printf("%d\n", vector[i]);
  }
}

