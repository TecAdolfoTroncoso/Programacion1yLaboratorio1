/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que lea 10 números por teclado, los almacene en un array y los ordene de forma 
  ascendente. 
  Programa: Eje07_guia3
  Alumno: Adolfo Jesús Troncoso.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int cargar(int numero[]);
int ordenar(int numero[]);
int mostrar(int numero[]);

int main()
{
  system("cls");
  system("color 70");
  int numeros[MAX];
  cargar(numeros);
  ordenar(numeros);
}

int cargar(int numero[])
{
  int i, lim;
  for (lim = 0; lim <= 10; lim++)
  { //limpio el array para evitar suciedad dentro.
    numero[lim] = 0;
  }
  for (i = 0; i < MAX; i++)
  {
    printf("Numero de vuelta '%d'  Ingrese un numero porfavor:\n", i + 1);
    scanf("%d", &numero[i]);
  }
}

int ordenar(int numero[])
{
  printf("\n\nOrden Ascendente\n");
  int a, i;                      // Contadores
  for (int a = 0; a < MAX; a++) // recorre los 100 lugares del array
  {
    for (i = 0; i < MAX-1; i++) //recorre 99 lugares del array deja el lugar 100 del array como el ultimo como menor.
    {
      if (numero[i] > numero[i + 1]) // Compara el primer valor del array contra el siguiente del mismo.
      {
        int mayor = numero[i]; 
        numero[i] = numero[i + 1];
        numero[i + 1] = mayor;
      }
    }
  }
  for (i = 0; i < MAX; i++)
  {
    printf("%d\t", numero[i]);
  }
}
