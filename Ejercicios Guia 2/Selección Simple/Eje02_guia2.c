#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción:Ingresar la base y altura de un triangulo y el diámetro de una circunferencia. informar
cual es el de mayor superficie.
  Programa: Eje02_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

#define pi 3.1416

int main()
{
  float altura, base, diametro, superficietri, superficiecir, radio;
  printf("Ingrese la base del triangulo");
  scanf("%f", &base);
  printf("Ingrese la altura del triangulo");
  scanf("%f", &altura);
  printf("Ingrese el diametro de la circunferencia");
  scanf("%f", &diametro);
  superficietri = (base * altura) / 2;
  radio = diametro / 2;
  superficiecir = pi * radio * radio;

  if (superficietri > superficiecir)
  {
    printf("La superficie del triangulo es mayor a la circunferencia\n");
  }
  else
  {
    printf("La superficie de la circunferencia es mayor a la del triangulo\n");
  }
}