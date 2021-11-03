#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Funciones
  Descripción:.Realizar una función que lo clasifique en isósceles, equilátero o escaleno.
  Programa: Eje08_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int determinartriangulo(int a, int b, int c);

int main()
{
    int lado1, lado2, lado3;
    printf("ingrese el valor de lado 1 \n");
    scanf("%d", &lado1);
    printf("Ingrese el valor de lado 2 \n");
    scanf("%d", &lado2);
    printf("Ingrese el valor de lado 3 \n");
    scanf("%d", &lado3);
    determinartriangulo(lado1, lado2, lado3);
}

int determinartriangulo(int a, int b, int c)
{
    if ((a == b) && (a == c))
    {
        printf("Equilatero");
    }
    else if ((a != b) && (a != c))
    {
        printf("Escaleno");
    }
    else
    {
        printf("Isóceles");
    }
}
