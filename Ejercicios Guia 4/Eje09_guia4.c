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

struct alumno carga_de_datos()
{
    struct alumno estudiante;    //creo la variable x a la cual le cargo los datos
    printf("Ingrese el nombre del alumno: ");
    gets(estudiante.nombre);
    fflush(stdin);
    printf("Ingrese el apellido del alumno: ");
    gets(estudiante.apellido);
    fflush(stdin);
    printf("Ingrese la edad del alumno: ");
    scanf("%d", &estudiante.edad);
    fflush(stdin);
    printf("Ingrese el curso del alumno: ");
    gets(estudiante.curso);
    fflush(stdin);
    printf("Ingrese la direccion: ");
    gets(estudiante.direccion);
    for(int i=0; i<10; i++){
        printf("Ingrese la nota: ");
        scanf("%i", &estudiante.notas[i]);
    }
    return estudiante;   //al finalizar la carga, devuelve al main los datos cargados en x y los copia en aa
}

void imprimirDatos(struct alumno estudiante)
{
    printf("nombre: %s\n", estudiante.nombre);
    printf("Apellido: %s\n", estudiante.apellido);
    printf("Edad: %d\n", estudiante.edad);
    printf("curso: %s\n", estudiante.curso);
    printf("direccion: %s\n", estudiante.direccion);
    for (int i = 0; i <10; i++)
    {
        printf("las notas son %d\n", estudiante.notas[i]);
    }
}