/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que lea 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar 
  los 10 números en pantalla mediante un solo array. 
  Programa: Eje08_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#include <stdio.h>
#define MAX 10
#define MIN 5

int cargar(int numero[]);
int mostrar(int carga2[]);
int mostrar_en_una_variable(int numero[], int carga2[], int mostrar[]);

int main()
{
    system("cls");
    system("color 70");
    int numeros[MAX];
    int numeros1[MIN];
    int numeros2[MIN];
    cargar(numeros1);
    segunda_carga(numeros2);
    mostrar_en_una_variable(numeros1,numeros2,numeros);
}

int cargar(int numero[])
{
    int i, lim;
    for (lim = 0; lim <5; lim++)
    { //limpio el array para evitar suciedad dentro.
        numero[lim] = 0;
    }
    for (i = 0; i < MIN; i++)
    {
        printf("Numero de vuelta '%d'  Ingrese un numero porfavor:\n", i + 1);
        scanf("%d", &numero[i]);
    }
}

int segunda_carga(int carga2[])
{
    int i, lim,cont=6;
    for (lim = 0; lim <5; lim++)
    { //limpio el array para evitar suciedad dentro.
        carga2[lim] = 0;
    }
    for (i = 0; i < MIN; i++)
    {
        printf("Numero de vuelta '%d'  Ingrese un numero porfavor:\n", cont++);
        scanf("%d", &carga2[i]);
    }
}

int mostrar_en_una_variable(int numero[], int carga2[], int mostrar[])
{
    int i, lim;
    for (lim = 0; lim < 10; lim++)
    { //limpio el array para evitar suciedad dentro.
        mostrar[lim] = 0;
    }
    for (i = 0; i < 5; i++)
    {
        mostrar[i]=numero[i];
        mostrar[5+i]=carga2[i];
    }

for (int i = 0; i < 10; i++)
{
   printf("%d\t",mostrar[i]);
}

}
