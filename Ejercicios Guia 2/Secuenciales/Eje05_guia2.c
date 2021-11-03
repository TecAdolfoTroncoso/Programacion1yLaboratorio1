#include<stdio.h>

/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Secuenciales.
  Descripción: Ingresar tres números, informar su promedio.
  Programa: Eje05_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int a,b,c,promedio;

int main (){
printf("ingrese el primer numero ");
scanf ("%d", &a);
printf("ingrese el segundo numero numero ");
scanf ("%d", &b);
printf("ingrese el tercer y ultimo numero ");
scanf ("%d", &c);
promedio=(a+b+c)/3;
printf("El promedio es: %f \n",promedio);
}