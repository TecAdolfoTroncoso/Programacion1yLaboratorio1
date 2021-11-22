#include <stdio.h>
#include <stdlib.h>

/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con los 100 primeros números enteros y los muestre en pantalla 
  en orden Ascendente. 
  Programa: Eje01_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 100
int vector[MAX];
int main()
{
  system("color 70"); // 7 fondo blanco 0 Letras negras
  llenar_vector();
  ordenarcaracteres();
}
void llenar_vector()
{
  for (int i = 0; i <= MAX; i++)
  {
    vector[i] = rand() % 102;
  }
}

void ordenarcaracteres()
{
  printf("\n\nOrden Ascendente\n");
  int a, i;                      // Contadores
  for (int a = 0; a <= MAX; a++) // recorre los 100 lugares del array
  {
    for (i = 0; i < MAX-1; i++) //recorre 99 lugares del array deja el lugar 100 del array como el ultimo como menor.
    {
      if (vector[i] > vector[i + 1]) // Compara el primer valor del array contra el siguiente del mismo.
      {
        int mayor = vector[i]; //
        vector[i] = vector[i + 1];
        vector[i + 1] = mayor;
      }
    }
  }
  for (i = 0; i < MAX; i++)
  {
    printf("%d\t", vector[i]);
  }
}