#include <stdio.h>

int main()
{

  char cadena[6] = "veamos";
  char caracter = '-';
  int i = 0;
  char cadena2;

  for (i = 0; i < strlen(cadena); i++)
  {
    // en lugar de estar imprimiendo dentro del bucle
    // vas a guardar en una variable la nueva cadena en la
    // cual se soluciona el ejercicio
    cadena2 = cadena2 + cadena[i] + caracter;
    // cadena toma lo que ya tenga almacenado (+=) y guarda una letra
    //  de la cadena a (a[i]) mas la segunda cadena es decir cadena b
    i = i + 1;
  }
  printf("Cadena nueva %c", cadena2);
}
