#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Bucle
  Descripción:Ingresar números, sumarlos. Se termina cuando se ingresó un 0, informar la cantidad de 
  datos ingresados y los números múltiplos de 3. 
  Programa: Eje04_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

int main()
{
    int numero, aux,mostrados;
    aux = 0;
    mostrados=1;
    do
    {
        puts("******************************************");
        printf("Ingresar numeros para optener el producto. \n");
        scanf("%d", &numero);
        mostrados++;
        if (numero != 0)
        {
            aux = aux + numero;
        }

        if ((numero % 3) == 0)
        {
            printf("El numero %d es multiplo de 3\n", numero);
        }
        else
        {
            printf("El numero %d no es multiplo de 3\n", numero);
        }

    } while (numero > 0);
    puts("******************************************");
    printf("La suma de los numeros ingresados es:%d \n", aux);
    printf("Cantidad de numeros ingresados:  %d \n",mostrados);
}