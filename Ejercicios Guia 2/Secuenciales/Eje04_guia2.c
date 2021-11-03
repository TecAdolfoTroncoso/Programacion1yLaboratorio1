#include<stdio.h>

/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Secuenciales.
  Descripción: Dado el radio de una circunferencia informar su perímetro y superficie.
  Programa: Eje04_guia2
  Alumno: Adolfo Jesús Troncoso.
*/


int a,b,c,suma,multiplicacion;

int main(){
printf("ingrese el primer numero: ");
scanf("%d", &a);
printf("ingrese el segundo numero ");
scanf("%d",&b);
printf("ingrese e tercer numero ");
scanf("%d",&c);
suma = a + b +c;
multiplicacion = a * b * c;
printf("La multiplicacion de los 3 numeros es: %d \n", multiplicacion);
printf("la suma de los tres numeros es: %d \n",suma);
}