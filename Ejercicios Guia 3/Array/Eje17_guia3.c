#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que muestre los primeros 100 números de izquierda a derecha usando un array de dos 
  dimensiones, la última fila a mostrará la suma de sus respectivas columnas.
  Programa: Eje17_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
int cargar(int m[11][10]);
int mostrar(int m[11][10]);
int main()
{
    system("cls");
    system("color 70");
    int numeros[11][10];
    cargar(numeros);
    printf("Los numeros del 1 al 100 con la suma de sus columnas es:\n");
    mostrar(numeros);
}

int cargar(int m[11][10])
{
    int sum, y, x;

    for (y = 0; y < 10; y++)
    {
        sum = 0; // suma vuelve a 0 cuando comienza la columna nueva.
        for (x = 0; x < 10; x++)
        {
            m[x][y] = (x * 10) + 1 + y;
            sum = sum + m[x][y];
        }
        m[10][y] = sum;
    }
}

int mostrar(int m[11][10])
{
    int x, y;
    for (x = 0; x < 11; x++)
    {
        for (y = 0; y < 10; y++)
        {
            printf("%d ", m[x][y]);
        }
        printf("\n");
    }
}