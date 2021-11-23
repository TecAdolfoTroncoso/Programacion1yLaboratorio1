#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 3 de ejercicios de programacion. 
  Array
  Descripción: Que lea una cadena y diga cuantas vocales hay.
  Programa: Eje20_guia3
  Alumno: Adolfo Jesús Troncoso.
*/
int cargar_frase(char frase[]);
int busqueda_de_vocales(char frase[]);
int main()
{
    int frase[50];
    cargar_frase(frase);
    printf("%s tiene %d vocal(es).\n", frase, busqueda_de_vocales(frase));
}

int cargar_frase(char frase[])
{
    printf("Introduzca una frase: ");
    gets(frase);
}

int busqueda_de_vocales(char frase[])
{
    int x, sum = 0;
    for (x = 0; x < 50; x++)
    {
        switch (frase[x])
        {
        case 'a':
            sum++;
            break;
        case 'e':
            sum++;
            break;
        case 'i':
            sum++;
            break;
        case 'o':
            sum++;
            break;
        case 'u':
            sum++;
            break;
        default:
            break;
        }
    }
    return sum;
}