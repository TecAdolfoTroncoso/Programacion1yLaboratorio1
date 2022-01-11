/*
    Modificar el programa anterior para que solamente permita una cantidad fija de intentos. 
            Al finalizar, deberá imprimir en pantalla “Eureka” si acertó la clave o, 
            en caso contrario, “Clave incorrecta” y la cantidad de intentos fallidos. 
*/
#include <stdio.h>
#include <stdlib.h>
#define CLAVE "CLAVE"

int main()
{
    system("cls");
    char clave[100];
    int intentos = 0;
    int mostrar = 3;
    int ingreso = 0;
    do
    {
        printf("\tIngrese su password.\n");
        gets(clave);

        if (strcmp(clave, CLAVE) == 0)
        {
            printf("Eureka\n");
            ingreso = 1;
        }
        else
        {
            mostrar--;
            printf("Contraseña incorrecta le quedan '%d' intentos\n", mostrar);
            intentos++;
        }
    } while (intentos < 3 && ingreso==0);
}
