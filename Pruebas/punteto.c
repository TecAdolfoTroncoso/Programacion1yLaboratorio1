#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Cantidad 3

struct alumno
{
    char nombre[50];
    int nota;
};

void ordenar(struct alumno *arrayPunteroAlumnos[3], int longitudArray);

int main()
{
    int i, auxiliarNota;
    char auxiliarNombre[50];
    struct alumno arrayAlumnos[Cantidad];
    struct alumno *arrayPunterosAlumnos[Cantidad];

    for (i = 0; i < Cantidad; i++)
    {
        arrayPunterosAlumnos[i] = &arrayAlumnos[i];
        printf("\n Ingrese el nombre: ");
        scanf("%s", auxiliarNombre);
        strcpy(arrayAlumnos[i].nombre, auxiliarNombre);
        printf("\n Ingrese la Nota: ");
        scanf("%i", &auxiliarNota);
        arrayAlumnos[i].nota = auxiliarNota;
    }
   
    ordenar(arrayPunterosAlumnos, Cantidad);
    printf("\n - Mostramos el array ordenado- ");
    for (i = 0; i < Cantidad; i++)
    {
        printf("\n %s", arrayPunterosAlumnos[i]->nombre);
        printf("-%i", arrayPunterosAlumnos[i]->nota);
    }
    printf("\n -Mostramos el sin ordenar array- ");
    for (i = 0; i < Cantidad; i++)
    {
        printf("\n %s", arrayAlumnos[i].nombre);
        printf("-%i", arrayAlumnos[i].nota);
    }
    return 0;
}

void ordenar(struct alumno *arrayPunterosAlumnos[], int longitudArray)
{
    struct alumno *punteroAuxiliarAlumno;
    int i, j;

    for (i = 0; i < longitudArray - 1; i++)
    {
        for (j = i + 1; j < longitudArray; j++)
        {
            if (arrayPunterosAlumnos[i]->nota > arrayPunterosAlumnos[j]->nota)
            {
                punteroAuxiliarAlumno = arrayPunterosAlumnos[i];
                arrayPunterosAlumnos[i] = arrayPunterosAlumnos[j];
                arrayPunterosAlumnos[j] = punteroAuxiliarAlumno;
            }
        }
    }
}