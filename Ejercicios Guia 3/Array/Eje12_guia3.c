#include <stdio.h>
/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que lea 10 números por teclado, los almacene en un array y muestre la media.  
  Programa: Eje12_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
void cargar(float numeros[]);
float media(float numeros[]);
#define MAX 10
int main()
{
    system("cls");
    system("color 70");
    int number[MAX];
    cargar(number);
    media(number);
}

void cargar(float numeros[]){
    for (int i = 0; i < MAX; i++)
    {
        numeros[i]=0;
    }
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%f",&numeros[i]);
    }
}

float media(float numeros[]){
    float media=0,suma=0;
    for (int i = 0; i < MAX; i++)
    {
        suma=suma+numeros[i];
    }
    media=suma/10;
    printf("La media de los numeros ingresados es: %0.2f \n",media);
}