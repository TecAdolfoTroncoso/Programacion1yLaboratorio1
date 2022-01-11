// Declaracion de las librerias usadas.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <unistd.h>  // Libreria del sleep en linux.
#include <windows.h> // Libreria del sleep en windows

// Declaracion de variables globales.
#define MAX 20
int personas = 0;
int bandera = -1;

// Declaracion de la structura de contacto
typedef struct Contacto
{
    int id;
    char Nombre[30];
    char Apellido[30];
    char Telefono[50];
    char Celular[15];
    int Edad;
    char dni[15];
    char Direccion[50];
    char Correo[50];
    char Fechanacimiento[15];
} agenda;

// Declaracion de funciones.
void wellcome();
void telefono();
void existe(agenda *age, char *DNI);
void agregar_contacto(agenda *age);
void modificar_contacto(agenda *age);
void buscar_contacto(agenda *age);
void borrar_contacto(agenda *age);
void mostrar_agenda(agenda *age);
void ordenar_agenda(agenda *age);
void grafico_edades(agenda *age);

// Realizacion de las funciones.
void wellcome()
{
    system("cls");
    system("color 30");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t********************************************\n");
    printf("\t \t \t******* Directorio telef%cnico simple ******* \n", 162);
    printf("\t\t\t********************************************\n");
    printf("\t \t \t \t 1. Agregar contacto.\n ");
    printf("\t \t \t \t 2. Eliminar contacto. \n");
    printf("\t \t \t \t 3. Buscar contacto. \n");
    printf("\t \t \t \t 4. Mostrar lista de contactos sin ordenar.\n");
    printf("\t \t \t \t 5. Mostrar lista ordenada alfabeticamente.\n");
    printf("\t \t \t \t 6. Gr%cfico de edades.\n", 160);
    printf("\t \t \t \t 7. Salir \n");
    printf("\t\t\t********************************************\n");
    printf("\t\t\t********************************************\n");
}

void telefono()
{
    system("color 30");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t********************************************\n");
    printf("\t \t \t********Cargando funciones y archivos******* \n");
    printf("\t\t\t********************************************\n");
    printf("\n");
    printf("\n\t\t\t\t\t   ,==.--------.");
    printf("\n\t\t\t\t\t  (    ) ====   \\");
    printf("\n\t\t\t\t\t  ||  | [][][]  |");
    printf("\n\t\t\t\t\t  ||  |         |");
    printf("\n\t\t\t\t\t,8||  | [][][]  |");
    printf("\n\t\t\t\t\t8 ||  |         |");
    printf("\n\t\t\t\t\t8 ||  | [][][]  |");
    printf("\n\t\t\t\t\t8 ||  |         |");
    printf("\n\t\t\t\t\t8 (    ) O O O  /");
    printf("\n\t\t\t\t\t'88`=='--------' ");
    printf("\n");
    printf("Espere porfavor.....");
    Sleep(3000); // tiempo de espera 3 seg.
}

void existe(agenda *age, char *DNI)
{
    int i;
    bandera = -1;
    printf("Ingrese el dni del contacto: ");
    scanf("%s", DNI);
    for (i = 0; i < personas; i++)
    {
        if (strcmp(age[i].dni, DNI) == 0)
        {
            bandera = i;
            break;
        }
    }
}

void agregar_contacto(agenda *age)
{
    char nombre[30] = {0};
    int edad;
    char apellido[30] = {0};
    char telfijo[50] = {0};
    char cell[15] = {0};
    char DNI[15] = {0};
    char direcc[50] = {0};
    char email[50] = {0};
    char nacimiento[15] = {0};
    char opcion = ' ';
    printf("Desea Crear contacto (s/n)\n");
    opcion = getch();
    printf("%30c ", 32);
    if (opcion == 's' || opcion == 'S')
    {
        printf("Creando contacto...\n");
        existe(age, DNI);
        if (bandera != -1)
        {
            printf("\n\t \t \t%cEl contacto ya existe! ENTER para regresar ", 173);
        }
        else
        {
            fflush(stdin);
            printf("Nombre: ");
            gets(nombre);
            printf("Apellido: ");
            gets(apellido);
            printf("Edad: ");
            scanf("%d", &edad);
            fflush(stdin);
            printf("Telefono: ");
            gets(telfijo);
            printf("Celular: ");
            gets(cell);
            printf("Direcci%cn: ", 162);
            gets(direcc);
            printf("Correo Electronico: ");
            gets(email);
            printf("Fecha de nacimiento dd/mm/aa: ");
            gets(nacimiento);
            strcpy(age[personas].Nombre, nombre);
            strcpy(age[personas].Apellido, apellido);
            strcpy(age[personas].Telefono, telfijo);
            strcpy(age[personas].Celular, cell);
            age[personas].Edad = edad;
            strcpy(age[personas].Direccion, direcc);
            strcpy(age[personas].dni, DNI);
            strcpy(age[personas].Correo, email);
            strcpy(age[personas].Fechanacimiento, nacimiento);
            age[personas].id = personas + 1;
            personas++;
        }
    }
}

void modificar_contacto(agenda *age)
{
    char nombre[30] = {0};
    char apellido[30] = {0};
    char telfijo[50] = {0};
    char cell[15] = {0};
    char DNI[15] = {0};
    int edad;
    char direcc[50] = {0};
    char email[50] = {0};
    char nacimiento[15] = {0};
    int i = bandera;
    char choice = ' ';
    int m = 1;
    while (m == 1)
    {
        wellcome();
        printf("\t\t\t%cQue desea modificar?\n", 168);
        printf("Opcion 1.  Nombre\n");
        printf("Opcion 2.  Apellido\n");
        printf("Opcion 3.  Telefono\n");
        printf("Opcion 4.  Celular\n");
        printf("Opcion 5.  Correo Electronico\n");
        printf("Opcion 6.  Direccion.\n");
        printf("Opcion 7.  DNI.\n");
        printf("Opcion 8.  Fecha de Nacimiento.\n");
        printf("Opcion 9.  Edad.\n");
        printf("Opcion s.  Salir al menu.\n");
        choice = getch();
        switch (choice)
        {
        case '1':
            printf("Ingrese el nombre a modificar\n");
            gets(nombre);
            strcpy(age[i].Nombre, nombre);
            break;
        case '2':
            printf("Ingrese el apellido a modificar\n");
            gets(apellido);
            strcpy(age[i].Nombre, nombre);
            break;
        case '3':
            printf("Ingrese el telefono a modificar\n");
            gets(telfijo);
            strcpy(age[i].Telefono, telfijo);
            break;
        case '4':
            printf("Ingrese el celular a modificar\n");
            gets(cell);
            strcpy(age[i].Celular, cell);
            break;
        case '5':
            printf("Ingrese el email a modificar\n");
            gets(email);
            strcpy(age[i].Correo, email);
            break;
        case '6':
            printf("Ingrese el direccion a modificar\n");
            gets(direcc);
            strcpy(age[i].Direccion, direcc);
            break;
        case '7':
            existe(age, DNI);
            if (bandera == -1)
            {
                strcpy(age[i].dni, DNI);
            }
            else
            {
                printf("\n\n El DNI ingresado ya existe, utilice otro");
                printf("\n\n\t\tPresione enter");
                getche();
            }
            break;
        case '8':
            printf("Ingrese la fecha de nacimiento a modificar\n");
            gets(nacimiento);
            strcpy(age[i].Fechanacimiento, nacimiento);
            break;
        case '9':
            printf("Ingrese la edad a modificar\n");
            scanf("%d", &edad);
            age[i].Edad = edad;
            break;
        case 's':
            m = 0;
            break;
        default:
            printf("La entrada es incorrecta \n\n\t           %cPresione una tecla para continuar!", 173);
            getche();
        }
        system("cls");
    }
}

void buscar_contacto(agenda *age)
{
    char Nombre[30];
    char Apellido[30];
    char Telefono[50];
    char Celular[15];
    char dni[15];
    int edad;
    char Direccion[50];
    char Correo[50];
    char Fechanacimiento[15];
    char opcion = ' ';
    printf("Consultando Contacto;\n");
    existe(age, dni);
    if (bandera == -1)
    {
        printf("\n\n \t \t \t%c No se encontro en el registro ! \n ", 173);
        printf("\n\n \t \t \t\tENTER para regresar");
        getche();
    }
    else
    {
        printf("\nRegistro Nro:%d ", age[bandera].id);
        printf("\nNombres:%s", age[bandera].Nombre);
        printf("\nApellidos:%s", age[bandera].Apellido);
        printf("\nTelefono:%s", age[bandera].Telefono);
        printf("\nCelular:%s", age[bandera].Celular);
        printf("\nEdad: %d", age[bandera].Edad);
        printf("\nDireccion:%s", age[bandera].Direccion);
        printf("\nCorreo Electronico:%s", age[bandera].Correo);
        printf("\nDNI:%s", age[bandera].dni);
        printf("\nFecha de Nacimiento:%s", age[bandera].Fechanacimiento);
        printf("\n\n\n\t \t\t Desea Modificar el contacto (S/N):");
        opcion = getche();
        if (opcion == 's' || opcion == 'S')
        {
            modificar_contacto(age);
        }
    }
}

void borrar_contacto(agenda *age)
{
    int i;
    char ch = '\0';
    bandera = -1;
    do
    {
        if (personas == 0)
        {
            printf("Libreta de Direcciones Vacia \n\n\t\t           ENTER para salir ");
            break;
        }
        printf("Eliminar Contacto\n");
        printf("N%cmero de Registro a Eliminar, o marque '0' para salir: ", 163);
        scanf("%d", &bandera);
        --bandera;
        if (bandera == -1)
            break;
        if (bandera > personas)
        {
            printf("\n Introduzca un valor valido,   PRESIONE ENTER\n\n");
            getche();
        }
    } while (bandera > personas);
    if (bandera > -1)
    {
        printf("\nRegistro Nro:%d ", age[bandera].id);
        printf("\nNombres:%s", age[bandera].Nombre);
        printf("\nApellidos:%s", age[bandera].Apellido);
        printf("\nTelefono:%s", age[bandera].Telefono);
        printf("\nCelular:%s", age[bandera].Celular);
        printf("\nEdad:%d", age[bandera].Edad);
        printf("\nDireccion:%s", age[bandera].Direccion);
        printf("\nCorreo Electronico:%s", age[bandera].Correo);
        printf("\nDNI:%s", age[bandera].dni);
        printf("\nFecha de Nacimiento:%s", age[bandera].Fechanacimiento);
        getchar();
        printf("\t \t \t%cEliminar? (S/N):", 168);
        ch = getche();
        if (ch == 's' || ch == 'S')
        {
            if (bandera != -1)
            {
                for (i = bandera; i < personas; i++)
                {
                    strcpy(age[i].Nombre, age[i + 1].Nombre);
                    strcpy(age[i].Apellido, age[i + 1].Apellido);
                    strcpy(age[i].Telefono, age[i + 1].Telefono);
                    strcpy(age[i].Celular, age[i + 1].Celular);
                    age[i].Edad = age[i + 1].Edad;
                    strcpy(age[i].Direccion, age[i + 1].Direccion);
                    strcpy(age[i].Correo, age[i + 1].Correo);
                    strcpy(age[i].dni, age[i + 1].dni);
                    strcpy(age[i].Fechanacimiento, age[i + 1].Fechanacimiento);
                }
            }
            personas--;
        }
    }
}

void mostrar_agenda(agenda *age)
{
    int i;
    printf("  CODIGO      NOMBRE                   APELLIDOS                EDAD         TELEFONO         CELULAR         DIRECCION         DNI             E-MAIL            FECHA NACIMIENTO.\n");
    for (i = 0; i < personas; i++)
    {
        printf("    %d         %-15s          %-15s           %d      %-12s      %-10s    %-10s        %-10s    %-10s    %-10s\n", age[i].id, age[i].Nombre, age[i].Apellido, age[i].Edad, age[i].Telefono, age[i].Celular, age[i].Direccion, age[i].dni, age[i].Correo, age[i].Fechanacimiento);
    }
    printf("Presione ENTER para regresar");
}

void ordenar_agenda(agenda *age)
{
    char aux2[50];
    int aux;
    for (int i = 0; i < personas; i++)
    {
        for (int j = i + 1; j < personas; j++)
        {
            if (strcmp(age[i].Nombre, age[j].Nombre) > 0)
            {

                strcpy(aux2, age[i].Nombre);
                strcpy(age[i].Nombre, age[j].Nombre);
                strcpy(age[j].Nombre, aux2);

                strcpy(aux2, age[i].Apellido);
                strcpy(age[i].Apellido, age[j].Apellido);
                strcpy(age[j].Apellido, aux2);

                strcpy(aux2, age[i].Telefono);
                strcpy(age[i].Telefono, age[j].Telefono);
                strcpy(age[j].Telefono, aux2);

                strcpy(aux2, age[i].Celular);
                strcpy(age[i].Celular, age[j].Celular);
                strcpy(age[j].Celular, aux2);

                aux = age[i].Edad;
                age[i].Edad = age[j].Edad;
                age[j].Edad = aux;

                strcpy(aux2, age[i].Direccion);
                strcpy(age[i].Direccion, age[j].Direccion);
                strcpy(age[j].Direccion, aux2);

                strcpy(aux2, age[i].Correo);
                strcpy(age[i].Correo, age[j].Correo);
                strcpy(age[j].Correo, aux2);

                strcpy(aux2, age[i].dni);
                strcpy(age[i].dni, age[j].dni);
                strcpy(age[j].dni, aux2);
            }

            strcpy(aux2, age[i].Fechanacimiento);
            strcpy(age[i].Fechanacimiento, age[j].Fechanacimiento);
            strcpy(age[j].Fechanacimiento, aux2);
        }
    }

    printf("Contactos Ordenados Alfabeticamente\n");

    for (int i = 0; i < personas; i++)
    {
        printf("\nRegistro Nro:%d ", age[i].id);
        printf("\nNombres:%s", age[i].Nombre);
        printf("\nApellidos:%s", age[i].Apellido);
        printf("\nTelefono:%s", age[i].Telefono);
        printf("\nCelular:%s", age[i].Celular);
        printf("\nEdad:%d", age[i].Edad);
        printf("\nDireccion:%s", age[i].Direccion);
        printf("\nCorreo Electronico:%s", age[i].Correo);
        printf("\nDNI:%s", age[i].dni);
        printf("\nFecha de Nacimiento:%s", age[i].Fechanacimiento);
        printf("\n--------------------------------------------\n");
    }
}

void grafico_edades(agenda *age)
{
    int i;
    int j;
    int aux = 0;
    int cant;
    int menores18=0;
    int de19a35=0;
    int mayora35=0;

    int gruedades[3];

    for (i = 0; i < 3; i++)//Limpia el array
    {
        gruedades[i] = 0;
    }

// Recorro el array de personas y cuento cantidad de cada grupo de edades
    for (i = 0; i < MAX; i++)
    {
        if (age[i].Edad > 0 && age[i].Edad < 19)
        {
            menores18++;
        }
        else
        {
            if (age[i].Edad > 18 && age[i].Edad < 36)
            {
                de19a35++;
            }else
            if (age[i].Edad > 35)
            {
                mayora35++;
            }
        }
    }

    gruedades[0]=menores18;
    gruedades[1]=de19a35;
    gruedades[2]=mayora35++;

//Busco el grupo de edades con mas personas.
 
 for (i=0; i<3; i++)
    {
        if (gruedades[i]>aux)
        {
            aux=gruedades[i];
        }
    }

    cant = aux;

    for (i = 0; i < aux; i++)    // Imprime la matriz
    {
        for (j = 0; j < 3; j++)
        {
            if (gruedades[j] >= cant)
            {
                printf("%c\t",254);
            }
            else
            {
                printf(" \t");
            }
        }
        cant--;
        printf("\n");
    }
    printf("<18  19-35   >35");

}

int main() // *** MENU PRINCIPAL **
{
    telefono();
    wellcome();
    agenda carg[MAX] = {0};
    char choice = 0;
    while (1)
    {
        wellcome();
        choice = getch();
        // scanf("%d", &choice);
        switch (choice)
        {
        case '1':
            agregar_contacto(carg);
            getch();
            break;
        case '2':
            borrar_contacto(carg);
            getch();
            break;
        case '3':
            buscar_contacto(carg);
            break;
        case '4':
            mostrar_agenda(carg);
            getch();
            break;
        case '5':
            ordenar_agenda(carg);
            getch();
            break;
        case '6':
            grafico_edades(carg);
            getch();
            break;
        case '7':
            exit(0);
            break;
        default:
            printf("La entrada es incorrecta \n\n\t           %cPresione una tecla para continuar!", 173);
            getch();
        }
        system("cls");
        wellcome();
    }
    return 0;
}