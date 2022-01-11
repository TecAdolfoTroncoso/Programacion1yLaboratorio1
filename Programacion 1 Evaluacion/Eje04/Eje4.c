/*
        Escribir un programa que le pida al usuario que ingrese una sucesión de calificaciones
        de estudiantes (primero el número de legajo, luego la calificación, y así para cada
         estudiante, hasta que el usuario ingrese el legajo -1 como condición de salida).
          Al final, el programa debe imprimir cuántas calificaciones fueron ingresadas,
          su valor máximo ingresado,la suma total de las calificaciones y el promedio.
*/

#include <stdio.h>
#include <stdlib.h>
#define MAXALUM 5
#define MAXNOTAS 1

typedef struct estudiantes
{
    int legajo;
    int notas[MAXNOTAS];
} alumnos;

int main()
{
    alumnos alum[5];
    int contnotas = 0;
    int acumulador = 0;
    float promnotas = 0.0;
    int auxiliar = 0;
    for (int i = 0; i <= MAXALUM; i++)
    {
        printf("Ingrese el numero de legajo del alumno '%d'.\n", i + 1);
        scanf("%d", &alum[i].legajo);
        if (alum[i].legajo != -1)
        {
            for (int j = 0; j < MAXNOTAS; j++)
            {
                printf("Ingrese las notas del alumno'%d'.\n", i + 1);
                scanf("%d", &alum[i].notas[j]);
                acumulador = acumulador + alum[i].notas[j];
                if (alum[i].notas[j] > auxiliar)
                {
                    auxiliar = alum[i].notas[j];
                }
            }
            contnotas++;
        }
        else
        {
            break;
        }
    }

    printf("Cantidad de notas ingresadas:  %d\n", contnotas);
    printf("La suma de las notas: %d\n", acumulador);
    promnotas = (float)acumulador / (float)contnotas;
    printf("El promedio de las notas es: %0.2f\n", promnotas);
    printf("La nota mas alta es: %d\n",auxiliar);
}