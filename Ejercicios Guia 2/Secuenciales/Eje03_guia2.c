#include<stdio.h>

/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Secuenciales.
  Descripción: Dado el radio de una circunferencia informar su perímetro y superficie.
  Programa: Eje03_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

#define Pi 3.1416

int main(){
int radio;
float superficie;
float perimetro;
printf("Ingrese porfavor el radio de la circunferencia:");
scanf("%d", &radio);
perimetro = 2*Pi*radio;
superficie = Pi*radio*radio;
printf("El perimetro es: %f \n", perimetro);
printf("La superficie es: %f \n", superficie);
}
