#include <stdio.h>
#include <stdlib.h>
int anios;
int cargarAlumno(char nombre[15]);
int imprimirAlumno(char nombre[15]);

int main()
{
    char alumno[15];
    cargarAlumno(alumno);
    printf("\n");
    system("cls");
    imprimirAlumno(alumno);
    printf("\n");
}


int cargarAlumno(char nombre[15])
{
    fflush(stdin);
    printf("INGRESE NOMBRE DEL Alumno \n");
    gets(nombre);

    fflush(stdin);
    printf("Edad del alumno \n");
    scanf("%d", &anios);

    fflush(stdin);
};

int imprimirAlumno(char nombre[15])
{
    printf("Nombre alumno: %s \n",nombre);
    printf("Edad Alumno: %i \n",anios);
}
