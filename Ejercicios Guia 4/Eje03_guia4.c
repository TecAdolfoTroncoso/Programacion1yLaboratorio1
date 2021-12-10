#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Epocas 4

struct estaciones ListaEstaciones[Epocas];
struct estaciones cargaEstacion();
void imprimirEstaciones(struct estaciones v[], int i);

struct estaciones
{
    char estaciones[100];
};

struct estaciones cargaEstacion()
{
    fflush(stdin);
    struct estaciones esta;

    printf("Ingrese las estaciones del año\n");
    gets(esta.estaciones);

    return esta;
};

void imprimirEstaciones(struct estaciones v[], int i)
{
    int contador = 0;

    printf("La '%i' estacion es: %s", contador + 1, v[i].estaciones);
};

int main()
{
    for (int i = 0; i < Epocas; i++)
    {
        ListaEstaciones[i] = cargaEstacion();
        printf("\n");
    }
    fflush(stdin);
    system("cls");
    for (int i = 0; i < Epocas; i++)
    {
        imprimirEstaciones(ListaEstaciones, i);
        printf("\n");
    }
}