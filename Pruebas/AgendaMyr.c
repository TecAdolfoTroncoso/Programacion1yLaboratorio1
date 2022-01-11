#include <stdio.h>
#include <conio.h>
#include <string.h>
struct datos
{
    char nombre[40];
    char apellido[40];
    int fijo;
    int movil;
    char mail[40];
} agenda[10];
int cont = 0;

void cargar();
void buscar();
void eliminar();
void imprimir();
struct contacto ordenarAgenda();
int main()
{
    int opcion;

    do
    {
        printf("MENU\n");
        printf("1. Agregar\n");
        printf("2. Buscar\n");
        printf("3. eliminar\n");
        printf("4. Ver todos los contactos\n");
        printf("5. Salir\n");

        scanf("%i", &opcion);

        switch (opcion)
        {
        case 1:
            cargar();

            break;

        case 2:
            buscar();

            break;

        case 3:
            eliminar();

            break;
        case 4:
            imprimir();

            break;
        }
    } while (opcion != 5);

    getch();
    return 0;
}
void cargar()
{

    printf("\nIngrese los datos del contacto #%i: ", cont + 1);
    fflush(stdin);
    printf("\nIngrese el nombre: ");
    gets(agenda[cont].nombre);
    fflush(stdin);
    printf("Ingrese el apellido: ");
    gets(agenda[cont].apellido);
    printf("Ingrese el numero telefonico: ");
    scanf("%i", &agenda[cont].fijo);
    printf("Ingrese el celular: ");
    scanf("%i", &agenda[cont].movil);
    fflush(stdin);
    printf("Ingrese email: ");
    gets(agenda[cont].mail);
    printf("\n");
    printf("--------------------------------------------\n");
    cont++;
}
void buscar()
{
    int cant = 0;
    char nombre[40];
    printf("\nIngrese el nombre del contacto que quiera consultar: ");
    fflush(stdin);
    gets(nombre);
    for (int i = 0; i < cont; i++)
    {
        if (strcmp(nombre, agenda[i].nombre) == 0)
        {
            printf("\ncontacto #%i:\n", i + 1);
            printf("Nombre:%s\n", agenda[i].nombre);
            printf("apellido:%s\n", agenda[i].apellido);
            printf("fijo:%i\n", agenda[i].fijo);
            printf("Movil:%i\n", agenda[i].movil);
            printf("correo:%s\n", agenda[i].mail);
            printf("--------------------------------------------\n");
            cant++;
        }
        else if (cant == 0)
        {
            printf("\nNo existe ese contacto.\n");
        }
    }
}

void eliminar()
{
    int cant = 0;
    int encontro = -1;
    char nombre[40];
    printf("\nIngrese el nombre del contacto que quiera borrar: ");
    fflush(stdin);
    gets(nombre);

    for (int i = 0; i < cont; i++)
    {
        if (strcmp(nombre, agenda[i].nombre) == 0)
        {
            cant++;
            encontro = i;
        }
    }
    if (cant == 0)
    {
        printf("\nNo existe ese contacto.\n");
        printf("\n--------------------------------------------\n");
    }

    for (int i = encontro; i < cont; i++)
    {
        strcpy(agenda[i].nombre, agenda[i + 1].nombre);
        strcpy(agenda[i].apellido, agenda[i + 1].apellido);
        agenda[i].fijo = agenda[i + 1].fijo;
        agenda[i].movil = agenda[i + 1].movil;
        strcpy(agenda[i].mail, agenda[i + 1].mail);
    }
    printf("\nContacto Eliminado.\n");
    printf("\n--------------------------------------------\n");
}

void imprimir()
{
    for (int i = 0; i < cont; i++)
    {
        printf("\ncontacto:#%i\n", i + 1);
        printf("Nombre:%s\n", agenda[i].nombre);
        printf("apellido:%s\n", agenda[i].apellido);
        printf("fijo:%i\n", agenda[i].fijo);
        printf("Movil:%i\n", agenda[i].movil);
        printf("correo:%s\n", agenda[i].mail);
        printf("\n--------------------------------------------\n");
    }
}
struct contacto ordenarAgenda()
{
    char auxNombre[25], auxDireccion[30], auxTFijo[10], auxMovil[10], auxMail[15];
    for(int i=0; i<MAX-1; i++)
    {
        for(int j=i+1; j<MAX; j++)
        {
            if(strcmp(agenda[i].nombre, agenda[j].nombre)>0)
            {
                strcpy(auxNombre, agenda[i].nombre);
                strcpy(agenda[i].nombre, agenda[j].nombre);
                strcpy(agenda[j].nombre, auxNombre);

                strcpy(auxDireccion, agenda[i].direccion);
                strcpy(agenda[i].direccion, agenda[j].direccion);
                strcpy(agenda[j].direccion, auxDireccion);
                
                strcpy(auxTFijo, agenda[i].telFijo);
                strcpy(agenda[i].telFijo, agenda[j].telFijo);
                strcpy(agenda[j].telFijo, auxTFijo);

                strcpy(auxMovil, agenda[i].telMovil);
                strcpy(agenda[i].telMovil, agenda[j].telMovil);
                strcpy(agenda[j].telMovil, auxMovil);
                
                strcpy(auxMail, agenda[i].email);
                strcpy(agenda[i].email, agenda[j].email);
                strcpy(agenda[j].email, auxMail);
            }
        }
    }

    printf("Agenda ordenada alfabeticamente\n");
    for(int i=0; i<MAX; i++)
    {
        if(strcmp(agenda[i].nombre, "") !=0)
        {
            imprimirContacto(agenda[i]);
        }
    }
    return agenda[MAX];
}