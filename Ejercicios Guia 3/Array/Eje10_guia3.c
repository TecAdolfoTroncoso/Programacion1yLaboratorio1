/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción: Que lea 5 números por teclado, los copie a otro array multiplicados por 2 y los muestre 
  todos ordenados usando un tercer array.. 
  Programa: Eje10_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#include <stdio.h>
#include <stdlib.h>
int cargar(int array1[]);
int multiplicar(int array1[], int array2[]);
int mostrar(int muestra[]);
int copiararray(int array2[], int array3[]);
#define MAX 5
int main()
{
    system("cls");
    system("color 70");
    int numeros[MAX];
    int numeros2[MAX];
    int numero3[MAX];
    cargar(numeros);
    printf("Array Ingresado\n");
    mostrar(numeros);
    printf("\nArray Multiplicado \n");
    multiplicar(numeros, numeros2);
    mostrar(numeros2);
    printf("\nArray Ordenado\n");
    ordenarycopiar(numeros2, numero3);
    mostrar(numero3);
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

int ordenarycopiar(int array2[], int array3[])
{
    int aux;
    for (int i = 1; i < MAX; i++) //ordenamiento del array2
    {
        for (int j = 0; j < MAX - 1; j++)
        {
            if (array2[i] > array2[j + 1])
            {
                aux = array2[j];
                array2[j] = array2[j + 1];
                array2[j] = aux;
            }
        }
        for (int i = 0; i < MAX; i++) //copia del array2 ordenado al array3
            array3[i] = array2[i];
    }
}

int mostrar(int muestra[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", muestra[i]);
    }
}
