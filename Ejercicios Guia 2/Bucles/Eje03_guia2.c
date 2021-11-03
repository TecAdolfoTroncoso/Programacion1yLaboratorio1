#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Bucle
  Descripción:Ingresar datos finalizando con un número negativo, informar el producto.
  Programa: Eje03_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int main()
{
    int numero, aux;
    aux = 1;
    
    do
    {
        puts("******************************************");
        printf("Ingresar numeros para optener el producto. \n");
        scanf("%d", &numero);

        if (numero > 0)
        {
            aux = aux * numero;
        }
        

    } while (numero > 0);
    puts("******************************************");
    printf("El producto de los numeros ingresados es:%d", aux);
}
