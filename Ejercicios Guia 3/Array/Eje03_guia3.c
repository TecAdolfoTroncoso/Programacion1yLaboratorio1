#include <stdio.h>
#include <stdlib.h>

/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con los números primos comprendidos entre 1 y 100 y los 
  muestre en pantalla en orden ascendente. 
  Programa: Eje03_guia2
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 100
int vector[MAX];
int main()
{
  system("color 70"); // 7 fondo blanco 0 Letras negras
  llenar_vector();
  //imprime_vector();
  filtroprimo();
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
  for (int i = 0; i < MAX; i++)
  {
    printf("%d - %d \n", i + 1, vector[i]);
  }
}

void filtroprimo()
{
  int cont = 0;

  for (int i = 2; i < vector[i]; i++)
  {
    for (int j = 0; j <= i/2 ; j++)
    {
      if (i % j == 0)
      {
        cont = cont + 1;
        break;
      }
    }

    if (cont < 1)
    {
      scanf(" %d ",i);
    }
  }
}