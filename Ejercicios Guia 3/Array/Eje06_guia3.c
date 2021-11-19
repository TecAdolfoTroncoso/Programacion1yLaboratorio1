/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:. Que lea 10 números por teclado, los almacene en un array y muestre la suma, resta, 
  multiplicación y división de todos.  
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