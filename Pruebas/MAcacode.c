#include<stdio.h>
#include<stdlib.h>
int edad;
int cargaDedatos(char nombre[15],char apellido[15],char curso[15],char direccion[50],int notas[10]);
void imprimirDatos(char nombre[15],char apellido[15],char curso[15],char direccion[50],int notas[10]);

int cargaDedatos(char nombre[15],char apellido[15],char curso[15],char direccion[50],int notas[10])
{
    printf("Ingrese el nombre del alumno:\n");
    gets(nombre);
    printf("Ingrese el apellido del alumno:\n");
    gets(apellido);
    printf("Ingrese la edad del alumno:\n");
    scanf("%d",&edad);
    fflush(stdin);
    printf("Ingrese el curso del alumno:\n");
    gets(curso);
    fflush(stdin);
    printf("Ingrese la direccion: \n");
    gets(direccion);
    for(int i=0; i<10; i++){
        printf("Ingrese la  nota numero '%i': \n ",i+1);
        scanf("%d",&notas[i]);
    }
}

void imprimirDatos(char nombre[15],char apellido[15],char curso[15],char direccion[50],int notas[10])
{
    printf("Nombre: %s\n",nombre);
    printf("Apellido: %s\n",apellido);
    printf("Edad: %d\n",edad);
    printf("Curso: %s\n",curso);
    printf("Direccion: %s\n",direccion);
    printf("Las notas de las materias son:\n");
    for (int i = 0; i <10; i++)
    {
        printf("Notas de las materias del alumno del Alumno: %d \n", notas[i]);
    }
    
    
}
int main()
{
    system("cls");
    system("color 70");
    char nombre1[15];
    char apellido1[15];
    char curso1[15];
    char direccion1[50];
    int notas1[10];
    cargaDedatos(nombre1,apellido1,curso1,direccion1,notas1);
    system("cls");
    imprimirDatos(nombre1,apellido1,curso1,direccion1,notas1);
    system ("pause");
}