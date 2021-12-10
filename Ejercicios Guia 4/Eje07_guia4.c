/*
Alumno: Adolfo Jesús Troncoso.
Estructuras.
Descripcion: Declara un tipo de dato estructura para representar un alumno; los campos que tiene que tener son: 
nombre, curso, edad,dirección y notas de las 10 asignaturas. Declara otro tipo estructura para representar un profesor; los campos que debetener son:
 nombre, asignaturas que imparte y dirección.
 Ejer07_guia4.c
*/

struct alumno
{
    char nombrealum[10];
    char curso[15];
    int edad;
    char dirección[20];
    int notas[10];
};

struct profesor{
    char nombreprof[10];
    char asignaturasimpartidas[2];
    char dirección[20];
};
