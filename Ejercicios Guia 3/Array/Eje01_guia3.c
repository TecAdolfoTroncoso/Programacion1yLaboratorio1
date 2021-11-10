#include <stdio.h>

/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con los 100 primeros números enteros y los muestre en pantalla 
  en orden ascendente. 
  Programa: Eje02_guia2
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 100
int vector[MAX];
int main()
{
 llenar_vector();
  //imprime_vector();
  ordenarcaracteres();
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

void ordenarcaracteres()
{
  printf("\n\nOrden Descendente\n");
  int a, k, i;
  for (int a = 1; a <= MAX; a++)
  {
    for (i = 1; i < MAX; i++)
    {
      if (vector[i] < vector[i + 1])
      {
        int min = vector[i];
        vector[i] = vector[i + 1];
        vector[i + 1] = min;
      }
    }
  }
  for ( i = 1; i < MAX; i++)
  {
    printf ("%d\t",vector[i]);
  }
  
}