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
int convertirmayus1();
int convertirminus1();
int convertirmayus2();
int convertirminus2();
int derechoyrevez1();
void menu();
char texto[100];
char texto2[100];
#include <stdio.h>

int main()
{

    menu();
}

int cargar_cadenas()
{
    printf("Ingresa una frase: \n");
    gets(texto);
    printf("Ingresa la siguiente frase: \n");
    gets(texto2);
}

int longitud_cadenas()
{
    int contador = 0, aux = 0;
    // Recorrer la cadena hasta encontrar el carácter de terminación
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

int convertirmayus1()
{
    int i = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            texto[i] = texto[i] - ('a' - 'A');
        }
        i++;
    }
    printf("La frase en mayuscula es: %s\n", texto);
}
int convertirminus1()
{
    int i = 0;
    while (texto[i] != '\0')
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] = texto[i] - ('A' - 'a');
        }
        i++;
    }
    printf("La frase en minuscula es: %s\n", texto);
}
int convertirmayus2()
{
    int i = 0;
    while (texto2[i] != '\0')
    {
        if (texto2[i] >= 'a' && texto2[i] <= 'z')
        {
            texto2[i] = texto2[i] - ('a' - 'A');
        }
        i++;
    }
    printf("La frase en mayuscula es: %s\n", texto2);
}
int convertirminus2()
{
    int i = 0;
    while (texto2[i] != '\0')
    {
        if (texto2[i] >= 'A' && texto2[i] <= 'Z')
        {
            texto2[i] = texto2[i] - ('A' - 'a');
        }
        i++;
    }
    printf("La frase en minuscula es: %s\n", texto2);
}
int derechoyrevez1()
{
    int i, len = 0;
    len = strlen(texto);
    for (i = len; i >= 0; i--)
    {
        printf("%c\n", texto[i]);
    }
}
int derechoyrevez2()
{
    int i, len = 0;
    len = strlen(texto2);
    for (i = len; i >= 0; i--)
    {
        printf("%c\n", texto2[i]);
    }
}

void menu()
{
    int opc;
    do
    {
        system("cls");
        printf("Menu de opciones \n \n");
        printf("Ingrese los valores \n");
        printf("1. Ingresa por teclado 2 cadenas de caracteres \n");
        printf("2. Imprimirlas cada cadena del derecho y al revés \n");
        printf("3. Dar la longitud de las cadenas \n");
        printf("4. Copiar las dos cadenas, una después de la otra. \n");
        printf("5. Buscar una cadena dentro de la otra y avisar por pantalla la posición de la 2da cadena donde empiezan a ser iguales\n\n");
        printf("6. Convertir la cadena todo a Minúsculas o Mayúsculas \n");
        printf("7. Salir\n ");
        printf("Opcion a escoger: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            cargar_cadenas();
            system("pause");
            break;
        case 2:
            derechoyrevez1(texto);
            derechoyrevez2(texto2);
            system("pause");
            break;
        case 3:
            longitud_cadenas(texto, texto2);
            system("pause");
            break;
        case 4:
            printf("%c,%c",texto,texto2);
            system("pause");
            break;
        case 5:
        case 6:
        default:
            printf("Salio del programa\n");
            system("pause");
            break;
        }
        system("cls");
    } while (opc <= 7);
}