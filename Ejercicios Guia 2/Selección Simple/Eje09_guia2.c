#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción:Construir un programa que permita ingresar un Nro por teclado y nos diga: Si es
  positivo, igual q cero o negativo y si es par o impar.
  Programa: Eje09_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int numero;

int main(){
    printf("Ingrese el numero para saber si es positivo,negativo,par e impar: ");
    scanf("%d",&numero);

    if (numero==0){
        printf("El numero es %d",numero);
    }else{
        if (numero > 0){
            printf("El numero %d es positivo",numero);
        }else{
            printf("El numero %d es negativo",numero);
            }
                
        if ((numero % 2) ==0){
            printf("El numero %d es par",numero);
            }else{
                printf("El numero %d es impar",numero);
                }                
            }
        }