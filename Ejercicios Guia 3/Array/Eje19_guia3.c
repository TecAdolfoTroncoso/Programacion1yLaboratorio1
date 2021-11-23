#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción: Que rellene una matriz de 3x3 y muestre su traspuesta (la traspuesta se consigue 
  intercambiando filas por columnas y viceversa).
  Programa: Eje19_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
int carga(int m[3][3]);
int mostrar(int m[3][3]);
int traspuesta(int m[3][3]);
int main()
{
int matriz[3][3];
carga(matriz);
printf("Matriz 3x3 ingresada\n");
mostrar(matriz);
printf("La traspuesta de esta matriz es");
traspuesta(matriz);
}

int carga(int m[3][3])
{
    int x, y, num = 0;
    for (x = 0; x < 3; x++)
    {
        for (y = 0; y < 3; y++)
        {
            m[x][y] = num;
            num++;
        }
    }
}

int mostrar(int m[3][3]){
    int x,y;
    printf("El array original es: \n\n\n");
   
    for(x = 0;x < 3;x++)
    {
      for(y = 0;y < 3;y++)
      {
          printf("    %d     ", m[x][y]);
      }
      printf("\n\n\n");
    }
}
int traspuesta(int m[3][3]){
    int x,y;
 printf("La traspuesta es: \n\n\n");
   
    for(x = 0;x < 3;x++)
    {
      for(y = 0;y < 3;y++)
      {
          printf("    %d     ", m[y][x]);
      }
      printf("\n\n\n");
    }
}
