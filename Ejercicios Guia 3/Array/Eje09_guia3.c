/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que lea 5 números por teclado, los copie a otro array multiplicados por 2 y muestre el 
  segundo array. 
  Programa: Eje09_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int cargar(int numero[]);
int mostrar(int numero[]);

int main(){
  system("cls");
  system ("color 70");
  int numeros[MAX];
  cargar(numeros);
  mostrar(numeros);

}


int cargar(int numero[]){
  int i,lim;
  for(lim=0;lim<=10;lim++){ //limpio el array para evitar suciedad dentro.
    numero[lim]=0;
  }
  for ( i = 0; i < MAX; i++)
  {
    printf("Numero de vuelta '%d'  Ingrese un numero porfavor:\n",i+1);
    scanf("%d",&numero[i]);
  }
  
}

int mostrar (int numero[]){
  int i;
  for(i=0;i<10;i++){ 

  printf("%d\t",numero[i]);
  }

  }
  