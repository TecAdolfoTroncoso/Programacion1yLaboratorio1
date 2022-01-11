/*
    Modificar el programa anterior para que después de cada intento agregue una pausa 
    cada vez mayor, busque en la documentación del Lenguaje C la función que permita 
                                    hacer la pausa de ejecución. 
*/

#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#define CLAVE "CLAVE"

int main()
{
    system("cls");
    char clave[100];
    int intentos = 0;
    int mostrar = 3;
    int ingreso = 0;
    int espera=3;
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
            sleep(espera);
            espera++;
            intentos++;
        }
    } while (intentos < 3 && ingreso==0);
}
