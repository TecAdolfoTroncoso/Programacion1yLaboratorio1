/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:. Que lea 10 números por teclado, los almacene en un array y muestre la suma, resta, 
  multiplicación y división de todos.  
  Programa: Eje04_guia3
  Alumno: Adolfo Jesús Troncoso.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int cargar(int numero[]);
int suma(int numero[]);
int resta(int numero[]);
float division(int numero[]);
int multiplicacion(int numero[]);

int main()
{
  system("cls");
  system("color 70");
  int numeros[MAX];
  cargar(numeros);
  suma(numeros);
  resta(numeros);
  multiplicacion(numeros);
  division(numeros);
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

int suma(int numeros[])
{
  int sum = 0, i;
  for (i = 0; i < MAX; i++)
  {
    sum = sum + numeros[i];
  }
  printf("La suma de los numeros ingresados es: %d\n", sum);
}

int resta(int numeros[])
{
  int rest = 0, i;
  for (int i = 0; i < MAX; i++)
  {
    rest = rest - numeros[i];
  }
  printf("La resta de los numeros ingresados es: %d\n", rest);
}

int multiplicacion(int numeros[])
{
  int mult = 1, i;
  for (i = 0; i < MAX; i++)
  {
    mult = mult * numeros[i];
  }
  printf("La multiplicacion de los numeros ingresados es: %d\n", mult);
}

float division(int numero[])
{
  float div = 1, aux = 0;
  int i;
  for (i = 0; i < MAX; i++)
  {
    aux = (float)numero[i];// uso la funcion typecast para forzar los numeros enteros de mi array a ser float.
    div = div / aux;
  }
  printf("La division de los numeros ingresados es: %0.2f\n", div);
}
