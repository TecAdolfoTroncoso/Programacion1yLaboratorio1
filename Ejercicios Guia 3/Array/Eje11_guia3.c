/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción: Que rellene un array con los 100 primeros números pares y muestre su suma.
  Programa: Eje11_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

int cargar(int numero[]);

int main()
{
    system("cls");
    system("color 70");
    int numeros[MAX];
    cargar(numeros);
}

int cargar(int numero[])
{
    int j, i, z;
    int cont = 0;
    int sum = 0;
    for (i = 1; i < MAX; i++)
    {
        numero[i] = 0;
    }

    for (j = 1; j <= MAX; j++)
    {
        if (j % 2 == 0)
        {
            numero[cont] = j;
            cont++;
        }
    }

    for (j = 0; j < cont; j++)
    {
        sum = sum + numero[j];
    }
    printf("\nLa suma de los numeros ingresados es: %d \n", sum);
}
