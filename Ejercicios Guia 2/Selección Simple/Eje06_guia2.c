#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción:Ingresar 4 números enteros e imprima el menor de todos.
  Programa: Eje06_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int a,b,c,d,menor;

int main(){
    printf("Ingrese los numeros para obtener el menor: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    menor=a;

    if (menor > b)
    {
        menor=b;
    }
    if (menor > c)
    {
        menor = c;
    }
    if (menor >d)
    {
        menor=d;
    }
    printf("El menor es : %d",menor);   
}