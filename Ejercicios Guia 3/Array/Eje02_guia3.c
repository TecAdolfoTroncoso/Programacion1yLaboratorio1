#include <stdio.h>
#include <stdlib.h>

/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con los 100 primeros números enteros y los muestre en pantalla 
  en orden Descendente. 
  Programa: Eje02_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 100
int vector[MAX];
int main()
{
 system("color 70");// 7 fondo blanco 0 Letras negras
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
  for (int i = 0; i <= MAX; i++)
  {
    printf("%d - %d \n", i + 1, vector[i]);
  }
}

void ordenarcaracteres()
{
  printf("\n\nOrden Descendente\n");
  int a, i; // Contadores 
  for (int a = 1; a <= MAX; a++) // recorre los 100 lugares del array
  {
    for (i = 1; i <= MAX; i++) //recorre 99 lugares del array deja el lugar 100 del array como el ultimo como menor.
    {
      if (vector[i] < vector[i + 1])// Compara el primer valor del array contra el siguiente del mismo.
      {
        int min = vector[i]; // 
        vector[i] = vector[i + 1];
        vector[i + 1] = min;
      }
    }
  }
  for ( i = 1; i <= MAX; i++)
  {
    printf ("%d\t",vector[i]);
  }
  
}