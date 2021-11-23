#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción: Que rellene un array de dos dimensiones con números pares, lo pinte y después que 
pida una posición X,Y y mostrar el número correspondiente. 
  Programa: Eje18_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
int cargar(int m[3][3]);
int mostrar(int m[3][3]);
int buscar(int m[3][3]);
int main()
{
    int numeros[3][3];
    cargar(numeros);
    printf("Los numeros pares del 1 al 100 \n");
    mostrar(numeros);
    printf("La busqueda del numero\n");
    buscar(numeros);
}

int cargar(int m[3][3])
{
    int x, y, num = 2;

    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            m[x][y] = num;
            num = num * 2;
        }
    }
}

int mostrar(int m[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            print("%d ", m[x][y]);
        }
        printf("\n");
    }
}
int buscar(int m[3][3])
{
    int i, j;
    printf("Ingrese el numero de fila: ");
    scanf("%d", &i);
    printf("Ingrese el numero de columna: ");
    scanf("%d", &j);
    printf("En la fila %d columna %d se encuentra el %d\n", i, j, m[i][j]);
}