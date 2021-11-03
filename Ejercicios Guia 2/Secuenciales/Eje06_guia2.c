#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Secuenciales.
  Descripción: Ingresar dos valores numéricos que corresponden a un horario expresados horas y
  minutos, convertirlo a minutos. Mostrar el resultado.
  Programa: Eje06_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int horas,minutos,totalminutos;

int main (){
    printf("Ingrese las horas");
    scanf("%d",&horas);
    printf("Ingrese los minutos");
    scanf("%d",&minutos);
    totalminutos = (horas*60) + minutos;
    printf ("Total en minutos es : %d \n", totalminutos);
}