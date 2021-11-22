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
#define MAX 5

int cargar(int array1[]);
int multiplicar(int array1[], int array2[]);
int mostrar(int muestra[]);
int main()
{
    system("cls");
    system("color 70");
    int numeros[MAX];
    int numeros2[MAX];
    cargar(numeros);
    multiplicar(numeros,numeros2);
    mostrar(numeros2);
}

int cargar(int array1[])
{
    int i, lim;
    for (lim = 0; lim < MAX; lim++)
    { //limpio el array para evitar suciedad dentro.
        array1[lim] = 0;
    }
    for (i = 0; i < MAX; i++)
    {
        printf("Numero de vuelta '%d'  Ingrese un numero porfavor:\n", i + 1);
        scanf("%d", &array1[i]);
    }
}

int multiplicar(int array1[], int array2[])
{
    int i, lim;
    for (lim = 0; lim < MAX; lim++)
    { //limpio el array para evitar suciedad dentro.
        array2[lim] = 0;
    }

    for (i = 0; i < MAX; i++)
    {
        array2[i] = array1[i] * 2;
    }
     
}

int mostrar(int muestra[]){
    for(int i=0;i<MAX;i++){
        printf("%d\t",muestra[i]);
    }
}

