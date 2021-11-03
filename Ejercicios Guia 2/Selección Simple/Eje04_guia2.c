#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción:Ingresar un número e informar si es múltiplo de 7.
  Programa: Eje04_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int numero;

int main(){
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    
    if ((numero % 7)== 0)
    {
        printf("El numero es multiplo de 7\n");
    }else {
        printf("El numero no es multiplo de 7\n");
    }
    
}