#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción:Ingresar un Dígito por teclado, del 0 al 10, e imprimirlo en Letras: Si Ingreso 1, imprimir
“Uno”, si ingreso 2, imprimir “Dos”, y así sucesivamente.
  Programa: Eje10_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int numero;

int main (){
    printf("Ingrese el numero: ");
    scanf("%d",&numero);

    switch (numero)
    {
    case 0:
        printf("Ingreso %d \n",numero);
        break;
    case 1:
        printf("Ingreso %d \n",numero);
        break;
    case 2:
        printf("ingreso %d \n",numero);
        break;
    case 3:
        printf("ingreso %d \n",numero);
        break;
    case 4:
        printf("ingreso %d \n",numero);
        break;
    case 5:
        printf("ingreso %d \n",numero);
        break;
    case 6:
        printf("ingreso %d \n",numero);
        break;
    case 7:
        printf("ingreso %d \n",numero);
        break;
    case 8:
        printf("ingreso %d \n",numero);
        break;
    case 9:
        printf("ingreso %d \n",numero);
        break;
    case 10:
        printf("ingreso %d \n",numero);
        break;   
    
    default:
        printf("El número que ingreso no es valido porfavor ingrese un numero del 0 al 10 e intentelo nuevamente. \n");
        break;
    }
}