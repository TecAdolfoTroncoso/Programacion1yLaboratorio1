/*
Alumno: Adolfo Jesús Troncoso.
Estructuras.
Descripcion: Definir dos variables correspondientes a los dos tipos de datos declarados en el ejercicio anterior y asignarles un nombre.
 Ejer08_guia4.c
*/
#include <stdio.h>
struct alumno
{
    char nombrealum[15];
    char curso[20];
    int edad;
    char dirección[20];
    int notas[10];
};

struct profesor{
    char nombreprof[15];
    char asignaturasimpartidas[20];
    char dirección[30];
};

int main (){
    struct alumno estudiante={"Adolfo Trocoso","UTN PROGRAMACION",28,"SAN BLAS 44", {7,7,7,7,7,7,7,7,7,7}};
    struct profesor maestro={"Daniel Benitez","Programacion","El profe no pasa su dire ajaj"};
}