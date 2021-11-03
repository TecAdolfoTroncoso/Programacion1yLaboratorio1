#include<stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Selección simple
  Descripción: Lea 3 Números por teclado y descubra si Uno de ellos, es la suma de los otros Dos. Debe
  informarlo por pantalla indicado qué Numero es la suma de los otros dos.
  Programa: Eje08_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int a,b,c;

int main(){
    printf("Ingrese los 3 valores: ");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if ((a+b)==c)
    {
        printf("La suma de %d + %d es igual a %d",a,b,c);
    }

    if ((a+c)==b)
    {
        printf("La suma de %d + %d es igual a %d",a,c,b);
    }
    
    if ((c+b)==a)
    {
        printf("La suma de %d + %d es igual a %d",b,c,a);
    }
        
}

