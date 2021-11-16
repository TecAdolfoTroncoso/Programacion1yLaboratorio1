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
int cargar_cadenas();
int longitud_cadenas();
char texto[100];
char texto2[100];
#include <stdio.h>

int main()
{

    cargar_cadenas(texto, texto2);
    longitud_cadenas(texto, texto2);
    
}

int cargar_cadenas()
{
    printf("Ingresa una frase: ");
    gets(texto);
    printf("Ingresa la siguiente frase: ");
    gets(texto2);
}

int longitud_cadenas()
{
    int contador = 0, aux = 0;
    // Recorrer la cadena hasta encontrar el carácter NUL o de terminación
    while (texto[contador] != 0)
    {
        contador++;
    }
    printf("La longitud de '%s' es %d\n", texto, contador);
    while (texto2[aux] != 0)
    {
        aux++;
    }
    printf("La longitud de '%s' es %d\n", texto2, aux);

    return 0;
}

