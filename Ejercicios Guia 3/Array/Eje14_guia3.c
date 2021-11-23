#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción:Que rellene un array con 20 números y luego busque un número concreto. Informando 
  su posición.
  Programa: Eje14_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 20
int cargar(int numeros[]);
int buscar_numero_en_array(int numeros[]);

int main()
{
    system("cls");
    system("color 70");
    int busqueda[MAX];
    cargar(busqueda);
    buscar_numero_en_array(busqueda);
}

int cargar(int numeros[])
{
    for (int i = 0; i < MAX; i++)
    {
        numeros[i] = 0;
    }
    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }
}

int buscar_numero_en_array(int numeros[])
{
    int numeroabuscar, bandera = 0;

    printf("Ingrese el numero a encontrar: ");
    scanf("%d", &numeroabuscar);

    for (int i = 0; i < MAX; i++)
    {
        if (numeroabuscar == numeros[i])
        {
            printf("Se ha encontrado el numero en la posicion: %d\n", i + 1);
        }

        bandera = 1;
        if (bandera == 0)
        {
            printf("No se ha encontrado el numero en la cadena de numeros ingresada anteriormente.\n");
        }
    }
}