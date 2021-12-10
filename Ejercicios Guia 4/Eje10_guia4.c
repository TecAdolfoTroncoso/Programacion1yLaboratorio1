#include<stdio.h>

struct alumno
{
    char nombre[15];
    char apellido[15];
    int edad;
    char curso[15];
    char direccion[50];
    int notas[10];
};

void imprimirDatos(struct alumno estudiante);
struct alumno carga_de_datos();

int main()
{
    struct alumno est; // declaración de la variable alumno
    est=carga_de_datos();  // a la variable aa le asigno la función que carga los datos
    imprimirDatos(est);   // a la función imprimir le digo qué variable quiero imprimir
}