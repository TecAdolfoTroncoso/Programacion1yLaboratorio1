#include <stdio.h>
#include <stdlib.h>
/*
  Ejercicios de la guia 2 de ejercicios de programacion. 
  Funciones
  Descripción: Escribir un programa que realice las siguientes tareas: Leer 2 números reales , 
  llame a una función menu() con 4 opciones + - * /, realizar la operación correspondiente y 
  mostrar el resultado.
  Programa: Eje04_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

void suma(int a, int b);
void resta(int a, int b);
void divisiones(int a, int b);
void multiplicar(int a, int b);
void menu();
void pedirdatos();
int num1, num2;

int main()
{
    menu();
}

void pedirdatos()
{
    printf("Ingresa el primer numero: ");
    scanf("%d", &num1);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &num2);
}

void suma(int a, int b)
{
    int suma = a + b;
    printf("La suma entre %d + %d es igual a %d\n", a, b, suma);
}
void resta(int a, int b)
{
    int resta = a - b;
    printf("La resta entre %d - %d es igual a %d\n", a, b, resta);
}
void multiplicar(int a, int b)
{
    int multiplicacion = a * b;
    printf("La multiplicacion entre %d * %d es igual a %d\n", a, b, multiplicacion);
}
void divisiones(int a, int b)
{
    int divisiones = a / b;
    printf("La division entre %d / %d es igual a %d\n", a, b, divisiones);
}

void menu()
{
    int opc;
    do
    {
        system("cls");
        printf("Menu de opciones \n \n");
        printf("Ingrese los valores \n");
        printf("1. Sumar \n");
        printf("2. Restar \n");
        printf("3. Multiplicar \n");
        printf("4. Dividir \n");
        printf("5. Salir\n\n");
        printf("Opcion a escoger: ");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            pedirdatos();
            suma(num1, num2);
            system("pause");
            break;
        case 2:
            pedirdatos();
            resta(num1, num2);
            system("pause");
            break;
        case 3:
            pedirdatos();
            multiplicar(num1, num2);
            system("pause");
            break;
        case 4:
            pedirdatos();
            divisiones(num1, num2);
            system("pause");
            break;
        default:
            printf("Salio del programa\n");
            system("pause");
            break;
        }
        system("cls");
    } while (opc <= 4);
}
