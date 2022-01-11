// Librerias incluidas y usadas en el trabajo.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <unistd.h> // Libreria del sleep.

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

// Realizacion de las funciones.
void wellcome()
{
    system("cls");
    system("color 70");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\t\t\t********************************************\n");
    printf("\t \t \t******* Directorio telef%cnico simple ******* \n", 149);
    printf("\t\t\t********************************************\n");
    printf("\t \t \t \t 1. Agregar contacto.\n ");
    printf("\t \t \t \t 2. Eliminar contacto. \n");
    printf("\t \t \t \t 3. Buscar contacto. \n");
    printf("\t \t \t \t 4. Mostrar lista de contactos sin ordenar.\n");
    printf("\t \t \t \t 5. Mostrar lista ordenada alfabeticamente.\n");
    printf("\t \t \t \t 6. Salir \n");
    printf("\t\t\t********************************************\n");
    printf("\t\t\t********************************************\n");
}

void telefono()
{
    system("color 70");
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
    sleep(5); // tiempo de espera 5 seg.
}

void existe(agenda *age, char *DNI)
{
    int i;
    printf("Ingrese DNI: ");
    scanf("%s", DNI);
    for (i = 0; i < personas; i++)
    {
        if (strcmp(age[i].dni, DNI) == 0) // Comparo si existe ya una persona con ese dni.
        {
            bandera = i; // Si la persona existe a bandera le asigno el valor de i.
            break;
        }
    }
}

void agregar_contacto(agenda *age)
{
    char nombre[30] = {0};
    char apellido[30] = {0};
    char telfijo[50] = {0};
    char cell[15] = {0};
    char DNI[15] = {0};
    char direcc[50] = {0};
    char email[50] = {0};
    char nacimiento[15] = {0};
    char opcion = ' ';
    printf("Desea Crear contacto (s/n)\n");
    opcion = getche();
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
    // char DNI[15] = {0};
    char direcc[50] = {0};
    char email[50] = {0};
    char nacimiento[15] = {0};
    // char i = bandera;
    char choice = ' ';
    int m = 1;
    while (m == 1)
    {
        wellcome();
        printf("\t\t\t�Que desea modificar?\n");
        printf("Opcion 1.  Nombre\n");
        printf("Opcion 2.  Apellido\n");
        printf("Opcion 3.  Telefono\n");
        printf("Opcion 4.  Celular\n");
        printf("Opcion 5.  Correo Electronico\n");
        printf("Opcion 6.  Direccion.\n");
        printf("Opcion 7.  DNI.\n");
        printf("Opcion 8.  Fecha de Nacimiento.\n");
        printf("Opcion 9.  Salir al menu.\n");
        choice = getch();
        switch (choice)
        {
        case '1':
            printf("Ingrese el nombre a modificar\n");
            gets(nombre);
            strcpy(age[bandera].Nombre, nombre);
            break;
        case '2':
            printf("Ingrese el apellido a modificar\n");
            gets(apellido);
            strcpy(age[bandera].Nombre, nombre);
            break;
        case '3':
            printf("Ingrese el telefono a modificar\n");
            gets(telfijo);
            strcpy(age[bandera].Telefono, telfijo);
            break;
        case '4':
            printf("Ingrese el celular a modificar\n");
            gets(cell);
            strcpy(age[bandera].Celular, cell);
            break;
        case '5':
            printf("Ingrese el email a modificar\n");
            gets(email);
            strcpy(age[bandera].Correo, email);
            break;
        case '6':
            printf("Ingrese el direccion a modificar\n");
            gets(direcc);
            strcpy(age[bandera].Direccion, direcc);
            break;
        case '7':
            /*   existe(age, DNI);
               if (baindera == -1)
               {
                   strcpy(age[i].dni, DNI);
               }
               else
               {
                   printf("\n\n El DNI ingresado ya existe, utilice otro");
                   printf("\n\n\t\tPresione enter");
                   getche();
               }
               */
            break;
        case '8':
            printf("Ingrese la fecha de nacimiento a modificar\n");
            gets(nacimiento);
            strcpy(age[bandera].Fechanacimiento, nacimiento);
            break;
        case '9':
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
    char Direccion[50];
    char Correo[50];
    char Fechanacimiento[15];
    char opcion = ' ';
    printf("Consultando Contacto;\n");
    existe(age, dni);
    if (bandera == -1)
    {
        printf("\n\n \t \t \t%c No se encontro el registro ! \n ", 173);
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
        printf("\nDireccion:%s", age[bandera].Direccion);
        printf("\nCorreo Electronico:%s", age[bandera].Correo);
        printf("\nDNI:%s", age[bandera].dni);
        printf("\nFecha de Nacimiento:%s", age[bandera].Fechanacimiento);
        printf("\n\n\n\t \t\t Desea Modificar la Ficha (S/N):");
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
	bandera=-1;
	do{
		if (personas==0)
		{
			printf ("Libreta de Direcciones Vacia \n\n\t\t           ENTER para salir ");
			break;
		}
	   printf("Eliminar Contacto");setconsolecolor(7, 0);
		printf ("N%cmero de Registro a Eliminar, o marque 0 para salir: ",163);
	    scanf ("%d", &bandera);
	    --bandera;
	    if (bandera==-1) break;
	    if (bandera >personas) {
     		printf ("\n Introduzca un valor valido,  	PRESIONE ENTER\n\n");
	    	getche();
		}
	} while(bandera>personas);
	if (bandera > -1)
	{
		printf("\nRegistro Nro:%d ", age[bandera].id);
        printf("\nNombres:%s", age[bandera].Nombre);
        printf("\nApellidos:%s", age[bandera].Apellido);
        printf("\nTelefono:%s", age[bandera].Telefono);
        printf("\nCelular:%s", age[bandera].Celular);
        printf("\nDireccion:%s", age[bandera].Direccion);
        printf("\nCorreo Electronico:%s", age[bandera].Correo);
        printf("\nDNI:%s", age[bandera].dni);
        printf("\nFecha de Nacimiento:%s", age[bandera].Fechanacimiento);
		getchar();
		printf("\t \t \t%cEliminar? (S/N):",168);
		ch = getche();
		if (ch == 's' || ch=='S')
		{
			if (bandera != -1)
			{
				for (i = bandera; i < personas; i++)
				{
					strcpy(age[i].Nombre, age[i + 1].Nombre);
                    strcpy(age[i].Apellido, age[i + 1].Apellido);
                    strcpy(age[i].Telefono, age[i + 1].Telefono);
                    strcpy(age[i].Celular, age[i + 1].Celular);
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

void ordenar_agenda(agenda *age)
{
}

void mostrar_agenda(agenda *age)
{
    int i;
    printf("  CODIGO      NOMBRE                   APELLIDOS                TELEFONO         CELULAR         DIRECCION         DNI         EMAIL         FECHA NACIMIENTO\n");
    for (i = 0; i < personas; i++)
    {
        printf("    %d         %-15s          %-15s         %-12s      %-10s    %-10s    %-10s    %-10s    %-10s\n", age[i].id, age[i].Nombre, age[i].Apellido, age[i].Telefono, age[i].Celular, age[i].Direccion, age[i].dni, age[i].Correo, age[i].Fechanacimiento);
    }
    printf("Presione ENTER para regresar");
}

int main() //	***		MENU PRINCIPAL 	**
{
    telefono();
    wellcome();
    agenda carg[MAX] = {0};
    int choice = 0;
    while (1)
    {
        wellcome();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            agregar_contacto(carg);
            getch();
            break;
        case 2:
            borrar_contacto(carg);
            getch();
            break;
        case 3:
            buscar_contacto(carg);
            break;
            break;
        case 4:
            mostrar_agenda(carg);
            getch();
        case 5:
            ordenar_agenda(carg);
            break;
            getch();
        case 7:
            break;
        case 8:
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
