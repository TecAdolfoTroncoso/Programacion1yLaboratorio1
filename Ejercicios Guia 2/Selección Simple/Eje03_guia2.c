#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción:Ingresar un número y determinar si pertenece al intervalo -2 < x < 4
  Programa: Eje03_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

float numero;

int main(){
    printf("Ingrese el valor del numero: ");
    scanf("%f",&numero);
    if ((-2 < numero) && ( numero < 4))
    {
        printf("El numero pertenece al intervalo -2 < x < 4\n");
    }else{
        printf("El numero no pertenece al intervalo -2 < x <4\n");
    }
    
}