/*
    Ejercicios de la guia 2 de ejercicios de programacion. 
    Funciones
    Descripción: Escribir un programa que posea un menú con las siguientes opciones:
    1. Leer por teclado 2 cadenas de caracteres.
    2. Imprimirlas cada cadena del derecho y al revés.
    3. Dar la longitud de las cadenas, sin incluir el NULL.
    4. Copiar las dos cadenas, una después de la otra, mostrando el Resultado por pantalla.
    5. Buscar una cadena dentro de la otra y avisar por pantalla la posición de la 2da cadena
    donde empiezan a ser iguales.
    6. Convertir la cadena todo a Minúsculas o Mayúsculas, según lo desee el usuario.
    7. Salir del programa. (el programa se repite hasta que se seleccione esta opción).
    Programa: Eje05_guia2
    Alumno: Adolfo Jesús Troncoso.
  */
#include<stdio.h>
#include <ctype.h>

void menu();
void pedirdatos();
void minusculaomayus();
void buscar();
void longitud();
void darlovuelta();

char palabra1[100], palabra2[100];

 void main(){

 }

void suma(int a, int b)
{
    int suma = a + b;
    printf("La suma entre %d + %d es igual a %d\n", a, b, suma);
}

void pedirdatos()
{
    printf("Ingresa el primer numero: ");
    scanf("%d", &palabra1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &palabra2);
}

 void menu()
{
    int opc;
    do
    {
        system("cls");
        printf("Menu de opciones \n \n");
        printf("Ingrese los valores \n");
        printf("1. Ingresa las dos cadenas de caracteres \n");
        printf("2. Mostrar las cadenas del derecho al revez \n");
        printf("3. Saber su longitud \n");
        printf("4. Mostrar las dos cadenas juntas \n");
        printf("5. ");
        printf("5. Salir\n\n");
        printf("Opcion a escoger: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            pedirdatos();
           
            system("pause");
            break;
        case 2:
            pedirdatos();
          
            system("pause");
            break;
        case 3:
            pedirdatos();
    
            system("pause");
            break;
        case 4:
            pedirdatos();
           
            system("pause");
            break;
        case 5:
            pedirdatos();
             minusculaomayus();
             system("pause");
        default:
            printf("Salio del programa\n");
            system("pause");
            break;
        }
        system("cls");
    } while (opc <= 4);
}
void minusculaomayus(){

}