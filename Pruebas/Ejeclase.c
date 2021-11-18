#include<stdio.h>

 struct alumnos 
    {
        char nombre[100];
        int edad;
        char curso[10];
        char direccion[100];
    };

int main (){
    struct alumnos alu[4];
    int i;
    // creamos el for para cargar las variables de nuestra estructura
    for (i = 0; i < 4; i++)
    {
        printf("\ Alumno [%i]- Digite su nombre: ",i+1);
        gets(alu[i].nombre);
        printf("\ Alumno [%i]- Digite su edad: ",i+1);
        scanf("%d",&alu[i].edad);
        printf("\ Alumno [%i]- Digite su curso: ",i+1);
        gets(alu[i].curso);
        printf("\ Alumno [%i]- Digite su direccion: ",i+1);
        gets(alu[i].direccion);
    }
    
    

   
    
}