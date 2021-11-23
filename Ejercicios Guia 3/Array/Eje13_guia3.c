#include <stdio.h>
/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que mediante un array almacene números tanto positivos como negativos y los 
  muestre ordenado.  
  Programa: Eje13_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 10
int main()
{
    system("cls");
    system("color 70");
    int number[MAX];
    cargar(number);
    printf("\nArray sin ordenar\n");
    mostrar(number);
    ordenar(number);
    printf("\n Array ya ordenado\n");
    mostrar(number);
}

int cargar(int numero[])
{
    for (int i = 0; i < MAX; i++)
    {
        numero[i] = 0;
    }
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese cualquier numero positivo o negativo: ");
        scanf("%d", &numero[i]);
    }
}

int ordenar(int numero[])
{
    int aux;

    for (int i = 0; i < MAX - 1; i++)
    {
        for (int j = i + 1; j < MAX; j++)
        {
            if (numero[i] > numero[j])
            {
                aux = numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
    }
}

int mostrar(int numero[])
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", numero[i]);
    }
}