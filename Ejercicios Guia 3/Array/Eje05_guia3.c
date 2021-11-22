/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con los números impares comprendidos entre 1 y 100 y los 
  muestre en pantalla en orden ascendente. 
  Programa: Eje04_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void cargar_e_imprimir(int impar[]);

int main(){
  system("cls");
  system ("color 70");
  int impares[MAX];
  cargar_e_imprimir(impares);

}

void cargar_e_imprimir (int impar[]){
  int i,cont=0,lim;
  for(lim=0;lim<=100;lim++){ //limpio el array para evitar suciedad dentro.
    impar[lim]=0;
  }
  for(i=1;i<=100;i++){//numeros comprendidos de 1 a 100
  if (i%2==1){// si el modulador de i es de resto 1 es impar
   impar[cont]=i;
   cont++;
  }

  }
  printf("\n\nNumeros impares comprendidos entre 1 y 100 mostrados de forma ascendente.\n\n");
  for (i=0;i<cont;i++){
  printf("%d \t",impar[i]);
}
}