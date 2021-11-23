#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que muestre los primeros 100 números de izquierda a derecha usando un array de dos 
  dimensiones.
  Programa: Eje16_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 10
void cargar(int array1[MAX][MAX]);
void mostrar(int array1[MAX][MAX]);

void main()
{
    system("cls");
    system("color 70");
    int v[MAX][MAX];
    cargar(v);
    printf("Los numeros del 1 al 100\n");
    mostrar(v);
}

void cargar(int array1[MAX][MAX])
{
 int x,y;
for (x=0;x<10;x++)
    {
        for (y=0;y<10;y++)
        {
            array1[x][y]=(x*10)+1+y;
        }
       
    }
}

void mostrar(int array[MAX][MAX])
{
    int x,y;
     for (x=0;x<10;x++)
    {
        for (y=0;y<10;y++)
        {
            printf("%d ",array[x][y]);
        }
        printf("\n");
    }
}