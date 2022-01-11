/*
    Que contenga una contraseña de 4 caracteres inventada, que le pregunte al usuario
    la contraseña y no le permita continuar hasta que la haya ingresado correctamente.
*/

#include <stdio.h>
#define CLAVE "CLAVE"
int main()
{
    char clave[100];
    int bandera = 0;
    while (bandera < 1)
    {
        printf("\tIngrese su password.\n");
        gets(clave);

        if (strcmp(clave, CLAVE) == 0)
        {
            bandera = 2;
        }
        else
        {
            bandera = 0;
        }
    }
}
