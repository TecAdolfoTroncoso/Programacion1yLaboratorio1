#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Funciones
  Descripción:.Realizar un programa que lea los lados a,b,c de un triangulo y Realizar una función que 
  informe si conforman triangulo
  Programa: Eje08_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int estriangulo(int a, int b, int c);

int main()
{
    int lado1, lado2, lado3;
    printf("ingrese el valor de lado 1 \n");
    scanf("%d", &lado1);
    printf("Ingrese el valor de lado 2 \n");
    scanf("%d", &lado2);
    printf("Ingrese el valor de lado 3 \n");
    scanf("%d", &lado3);
    estriangulo(lado1,lado2,lado3);
    return 0;
}

int estriangulo(int a, int b, int c)
{
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
    {
        printf("Es triangulo");
    }else
    {
        printf("No es triangulo");
    }
    
}