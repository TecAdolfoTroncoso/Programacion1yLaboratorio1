#include <stdio.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Bucle
  Descripción:Escribir un Programa q obtenga la Media de las Notas obtenidas por un alumno. Se 
  pueden introducir hasta 4 notas entre 0 y 100 y luego imprimir por teclado la Media y la 
  Categoría
  Programa: Eje07_guia2
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAXNOTAS 4
int i;
int main()
{
  int nota;
  int acumulador, media, contador;
  media = 0;
  acumulador = 0;
  contador = 0;

  for (i = 1; i <= MAXNOTAS; i++)
  {
    printf("Ingrese la nota\n");
    printf("Lleva ingresadas [%i] notas de 4\n", i);
    scanf("%d", &nota);
    acumulador += nota;
    contador++;
  }
  media = acumulador / contador;
  printf("La media de las 4 notas es: %d\n", media);
  switch (media)
  {
  case 90 ... 100:
    printf("Y usted entro en la categoria 'A'\n");
    break;
  case 80 ... 89:
    printf("Y usted entro en la categoria 'B'\n");
    break;
  case 70 ... 79:
    printf("Y usted entro en la categoria 'C'\n");
    break;
  case 60 ... 69:
    printf("Y usted entro en la categoria 'D'\n");
    break;
  case 0 ... 59:
    printf("Y usted entro en la categoria 'E'\n");
    break;
  default:
    printf("Aun no se ha realizado una categoria para usted, vuelva mas tarde");
    break;
  }
}