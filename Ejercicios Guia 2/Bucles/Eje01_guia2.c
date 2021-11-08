#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Bucle
  Descripción:Ingresar 10 números e informar el promedio.
  Programa: Eje01_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int numero,i,prom,aux,suma;

int main() {

    for (i = 1; i <= 10; i++)
    {
      puts("******************************************");
      printf("Ingrese el numero %d('Numero de ciclo'): ",i);
      scanf("%d",&aux);
      suma= suma +aux;
    }

    puts("******************************************");

    prom = suma / 10;
    printf("El promedio es %d", prom);
    
}