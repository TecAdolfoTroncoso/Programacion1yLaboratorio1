#include<stdio.h>

/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Secuenciales.
  Descripción:Dadas la base y altura de un rectángulo imprimir su superficie.
  Programa: Eje02_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int base;
int altura;
int resultado;
int main(){
  printf("Ingrese la altura del rectángulo:");
scanf("%d",&altura);
  printf("Ingrese la base del rectángulo:");
scanf("%d",&base);
resultado=altura*base;
printf("la superficie es:%d",resultado);
}
