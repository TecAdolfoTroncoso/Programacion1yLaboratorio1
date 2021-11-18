/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con los números pares comprendidos entre 1 y 100 y los muestre 
  en pantalla en orden ascendente. 
  Programa: Eje04_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void cargar();
void ordenar();
void imprimir();


int main(){
  system("cls");
  system ("color 70");
  int pares[MAX];
  cargar_e_imprimir(pares);

}

void cargar_e_imprimir (int par[]){
  int i,cont=0;
  for(int limpio=0;i<=100;i++){
    par[i]=0;
  }
  for(i=1;i<=100;i++){//numeros comprendidos de 1 a 100
  if (i%2==0){// si el modulador de i es de resto 0 es par
   par[cont]=i;
   cont++;
  }

  }
  printf("\n\nNumeros pares comprendidos entre 1 y 100 mostrados de forma ascendente.\n\n");
  for (i=0;i<cont;i++){
  printf("%d \t",par[i]);
}
}
