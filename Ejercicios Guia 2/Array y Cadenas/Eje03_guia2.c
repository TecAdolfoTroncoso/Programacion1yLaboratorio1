/*
 Ejercicios de la guia 2 de ejercicios de programacion. 
  Funciones
  Descripción:Ingresar datos a un vector finalizando con un número negativo, informar el producto.
  Programa: Eje03_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

#include <stdio.h>
#define MAX 60

int cargadatos(int carga[]);
int producto(int carga[]);
int main()
{
    int numero[MAX];
    cargadatos(numero);
    printf("El producto de los numeros ingresados es %d\n", producto(numero));
}

int cargadatos(int carga[])
{
    int i;
    do
    {
        i++;
        printf("Ingrese elementos para cargar el array: ");
        scanf("%d", &carga[i]);
    } while (carga[i] > 0);

    for (int i = 0; i < MAX; i++)
    {
        if (carga[i] < 0)
        {
            printf("Ingresaste un numero negativo, el programa se detendra.\n");
            break;
        }
    }

}

int producto(int carga[])
{
    int prod = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (carga[i] < 0)
        { //Si es negativo rompo el for
            break;
        }
        else
        {
            prod = 1;
        }
        
        if (prod != 0)
        {
            prod = prod * carga[i];
        }
    }
    return prod;
}
