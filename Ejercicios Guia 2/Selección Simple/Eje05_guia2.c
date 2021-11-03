#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción:Ingresar 4 números enteros e imprima el Mayor de todos.
  Programa: Eje05_guia2
  Alumno: Adolfo Jesús Troncoso.
*/


int a,b,c,d,mayor;

int main(){
    printf("Ingrese los numeros para obtener el mayor");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);

    mayor=a;

    if(mayor<b){
        mayor=b;
    }
        if (mayor < c)
        {
            mayor = c;
        }
        if (mayor < d)
        {
            mayor=d;
        }
        
    printf("El mayor es : %d",mayor);
}
