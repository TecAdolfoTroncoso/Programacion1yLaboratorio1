/*
 Ejercicios de la guia 2 de ejercicios de programacion. 
  Funciones
  Descripción:Ingresar datos a un vector finalizando con un número negativo, informar el producto.
  Programa: Eje03_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

#include <stdio.h>
#define MAX 100

int cargadatos(int carga[]);
int producto(int carga[]);
int main()
{
    int numero[MAX];
    cargadatos(numero);
    printf("El producto es: %d\n", producto(numero));
}

int cargadatos(int carga[])
{


    for (int i = 0; i < MAX; i++)
    {
        printf("Ingrese elementos para cargar el array: ");
        scanf("%d", &carga[i]);
        if (carga[i] < 0)
        {
            break;
        }
    }
}

int producto(int carga[])
{
    int prod=0,aux=1;
    for (int i = 0; i < MAX; i++)
    {
        if (carga[i] < 0)
        { //Si es negativo rompo el for
        printf("Ha introducido un numero negativo el programa se terminara en unos instantes.\n");
            prod = 0;
            break;
        }
        else
        {
            prod = 1;
            
        }

        if (prod != 0)
        {
          aux=aux*carga[i];  
        }
    }
    return aux;
}
