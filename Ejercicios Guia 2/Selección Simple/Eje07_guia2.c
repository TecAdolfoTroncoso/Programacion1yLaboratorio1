#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción: Ingresar 4 números enteros e imprimirlos de Menor a Mayor.
  Programa: Eje07_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int a, b, c, d, aux;
int main()
{
  printf("Ingrese los 4 valores a ordenar: ");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  if (a > b)
  {
    aux = a;
    a = b;
    b = aux;
  }
  if (a > c)
  {
    aux = a;
    a = c;
    c = aux;
  }
  if (a > d)
  {
    aux = a;
    a = d;
    d = aux;
  }
  if (b > c)
  {
    aux = b;
    b = c;
    c = aux;
  }
  if (b > d)
  {
    aux = b;
    b = d;
    d = aux;
  }
  if (c > d)
  {
    aux = c;
    c = d;
    d = aux;
  }
  printf("El menor es: %d - El siguiente del menor es: %d - El mediano es: %d - El mayor es: %d", a, b, c, d);
  return 0;
}
