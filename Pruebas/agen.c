/*
Creado Por Vicente Mendoza
*/

#include <stdio.h>

#include <string.h>

#define FICHERO «datos»

#define MAX 25

#define ESCAPE ((char)27)

FILE *fichero;

struct agenda
{ //*************************

    int clave; //    Esctructura con   *

    char nom[20]; //    la forma de       *

    char ApPat[15]; //    los datos registro*

    char ApMat[15]; //*************************

    int edad;

    long int tel;

    long int cel;

    char calle[15];

    char col[15];

    char mun[15];

    char estado[15];

    int sw;

    char mail[25];

} r[MAX];

int menu(void);

void agregar(void);

void mostrar(struct agenda);

void buscarnom(char[]);

void buscaredad(int); //********************

void apertura(void); // Prototipos de las

void m_todo(void); //    Funciones

void borrar(int); //********************

void borrartodo(void);

void ordena(void);

void SaveToDisk(struct agenda);

struct agenda ReadToDisk(int);

int ReadAllToDisk(void);

void OrdenaOnMemory(int, int);

void clavesdisponibles(void);

void actualizar(struct agenda, int);

void exportar(void);

int main()
{

    int op, opc = 0, opcls = 0, clave = 0, edades = 0, i;

    int numreg = 0;

    char expresion[20];

    struct agenda reg;
    printf("«Creado por Vicente Mendoza»");

    apertura();

menu:

    op = menu();

    switch (op)
    {

    case 1:

        agregar(); //*********

        goto menu; // AGREGAR

        break; //*********

    case 2:

        printf("Dame la clave a borrar:");

        scanf("%d", &clave); //*********

        borrar(clave); // BORRAR

        printf("tRegistro Borrado: %d", &clave); //*********

        goto menu;

        break;

    case 3:

printf (" Como prefiere hacer la busqueda ?");

printf("\n");

printf("Por Nombre, Apellido Paterno y Materno");

printf("\n"); //***********

printf("2.Por Edad"); // BUSQUEDA

printf("\nOpcion: "); //***********

scanf("%d", &opc);

if (opc == 1)
{

    printf("Escribe el Nombre o Apellidos a buscar:");

    scanf("%s", expresion);

    buscarnom(expresion);
}
else if (opc = 2)
{

    printf("Escribe la edad para buscar");

    scanf("%d", &edades);

    buscaredad(edades);
}

goto menu;

break;

    case 4:

        m_todo(); //*************

        goto menu; // MOSTRAR_TODO

        break; //*************

    case 5:

        ordena();

        goto menu;

        break;

    case 6:

printf(" 1)Nombret2)Ap. Paternot3)Ap. Maternot4)Edadt5)Calle");

printf("\nOpcion: ");

scanf("%d", &opcls);

numreg = ReadAllToDisk(); //******************

OrdenaOnMemory(numreg, opcls); // LISTAR

for (i = 0; i < numreg; i++) //******************

    mostrar(r[i]);

goto menu;

break;

    case 7:

        printf(«nQue registro va actualizar(clave)
               : «);

        scanf(«% d», &clave); //***************

        reg = ReadToDisk(clave); // ACTUALIZAR

        mostrar(reg); //***************

        printf(«nQue dato desea actualizar»);

printf(«n 1)Nombret2)Ap. Paternot3)Ap. Maternot4)Edadt5)Callet6)Telefonot7)Celulart8)Email «);

printf(«n Opcion
       : «);

scanf(«% d», &opcls);

actualizar(reg, opcls);

printf(«nRegistro Actualizado»);

goto menu;

break;

    case 8:

        exportar(); //****************

        goto menu; // EXPORTAR EN CSV

        break; //****************

    case 9:

        printf(«n Ha terminado el programa..n»);

        break;
    }

    fclose(fichero);

    return 1;
}

///////////////////////////////////////////////////////////////////////

void ordena(void)
{

    int i, c;

    c = ReadAllToDisk();

    OrdenaOnMemory(c, 1); //*******************************

    borrartodo(); // Funcion que Ordena el Archivo

    for (i = 0; i < c; i++)
    { // Por Nombre

        r[i].clave = i + 1; //*******************************

        SaveToDisk(r[i]);
    }

    printf(«nArchivo Ordenadon»);
}

///////////////////////////////////////////////////////////////////////

void OrdenaOnMemory(int c, int tipo)
{

    int pas, i;

    struct agenda aux = {0};

    for (pas = 1; pas < c; pas++)

        for (i = 0; i < c - 1; i++)
        {

            if (strcmp(r[i].nom, r[i + 1].nom) > 0 && tipo == 1)
            {

                aux = r[i];

                r[i] = r[i + 1]; //*******************

                r[i + 1] = aux; // esta funcion
            }
            else if (strcmp(r[i].ApPat, r[i + 1].ApPat) > 0 && tipo == 2)
            { // ordena en memoria

                aux = r[i]; // recibe el numero de

                r[i] = r[i + 1]; // registros c

                r[i + 1] = aux; // Y tipo que sirve
            }
            else if (strcmp(r[i].ApMat, r[i + 1].ApMat) > 0 && tipo == 3)
            { // para saber sobre

                aux = r[i]; // que campo ordenar

                r[i] = r[i + 1]; //*******************

                r[i + 1] = aux;
            }
            else if (r[i].edad >= r[i + 1].edad && tipo == 4)
            {

                aux = r[i];

                r[i] = r[i + 1];

                r[i + 1] = aux;
            }
            else if (strcmp(r[i].calle, r[i + 1].calle) > 0 && tipo == 5)
            {

                aux = r[i];

                r[i] = r[i + 1];

                r[i + 1] = aux;
            }
        }
}

///////////////////////////////////////////////////////////////////////

void apertura(void)
{ //*********************************

    if ((fichero = fopen(FICHERO,»r +»)) == NULL) // Metodo para abrir el archivo

        fichero = fopen(FICHERO,»w»); // En caso de error crea el archivo

} //*********************************

///////////////////////////////////////////////////////////////////////

int menu(void)
{

    int opmenu = 0;

printf("%c",ESCAPE);                //*********************************

printf(" M E N U"); // Fucion que muestra el Menu

printf("\n"); // retorna un entero con el valor

printf("%c",ESCAPE);                //de la opcion elegida

printf ("1)Agregar");                    //*********************************

printf (" 2)Borrar");

printf ("3)Buscar");

printf (" 4)M.Todo");

printf (" 5)OrdenarArchivo");

printf (" 6)Listar");

printf (" 7)Modificar Registro");

printf ("8)Exportar");

printf ("9)Salir");

printf("\n");

printf(«Opcion
       : «);

scanf(«% d», &opmenu);

printf(«%c[0m»,ESCAPE);

return opmenu;
}

///////////////////////////////////////////////////////////////////////

void SaveToDisk(struct agenda registro)
{ //****************************************

    fseek(fichero, (registro.clave - 1) * sizeof(registro), SEEK_SET); // Funcion para Salvar 1 registro en disco

    fwrite(&registro, sizeof(registro), 1, fichero); // recibe el registro y lo guarda dependiendo de su

} // clave en el archivo

//////////////////////////////////////////////////////////////////////  //**********************************************

void agregar(void)
{

    int clave;

    struct agenda registro, aux;

printf("%c",ESCAPE);

clavesdisponibles();

printf("%c",ESCAPE);

do
{

    printf(" Dame tu clave: "); //******************************

    scanf("%d", &clave); // Codigo para validar la clave

    if (clave > MAX)
    { // debe de ser menor que MAX

printf(«%c[31m»,ESCAPE);            //Y no puede usar una con datos

printf("Tu clave debe ser menor que %d\n", MAX); // asociados

printf("%c",ESCAPE);                //******************************
    }

    aux = ReadToDisk(clave);

    if (aux.sw == 1)
    {

printf(«%c[31m»,ESCAPE);

printf(«La clave ya esta en uso n»);

printf(«%c[0m»,ESCAPE);
    }

} while (clave > MAX || aux.sw == 1);

registro.clave = clave;

printf (» Cual es tu nombre ? «);                //******************************

scanf(«% s», registro.nom); // Metodo para Pedir datos

printf (» Cual es tu Apellido Paterno ? «);            //y despues agregarlos a disco

scanf(«% s», registro.ApPat); //******************************

printf (» Cual es tu Apellido Materno ? «);

scanf(«% s», registro.ApMat);

printf (» Cual es tu edad ? «);

scanf(«% d», &registro.edad);

printf (» Cual es tu telefono ? «);

scanf(«% ld», &registro.tel);

printf (» Cual es tu telefono celular? «);

scanf(«% ld», &registro.cel);

printf (» Cual es tu calle ? «);

scanf(«% s», registro.calle);

printf (» Cual es tu colonia ? «);

scanf(«% s», registro.col);

printf (» Cual es tu Municipio ? «);

scanf(«% s», registro.mun);

printf (» En que Estado vives ? «);

scanf(«% s», registro.estado);

printf (» Cual es tu e-mail ? «);

scanf(«% s», registro.mail);

registro.sw = 1;

SaveToDisk(registro);

printf(«Se ha agregado otro elemento a la agenda»);
}

///////////////////////////////////////////////////////////////////////

void buscarnom(char expresion[20])
{ //************************************

    int i = 2; // Funcion que sirve para buscar una expresion (NOMBRE)

    struct agenda registro; // en todos los registros.

    registro = ReadToDisk(1); //************************************

    do
    {

        if ((strcmp(registro.nom, expresion)) == 0 || (strcmp(registro.ApPat, expresion)) == 0 || (strcmp(registro.ApMat, expresion)) == 0)

            mostrar(registro);

        registro = ReadToDisk(i);

        i++;

    } while (!feof(fichero));
}

///////////////////////////////////////////////////////////////////////

void buscaredad(int edades)
{

    int i = 2;

    struct agenda registro; //*********************************

    registro = ReadToDisk(1); // Funcion que sirve para buscar

    do
    { // una edad en todos los registros

        if (registro.edad == edades) //*********************************

            mostrar(registro);

        registro = ReadToDisk(i);

        i++;

    } while (!feof(fichero));
}

///////////////////////////////////////////////////////////////////////

int ReadAllToDisk(void)
{

    struct agenda registro;

    int i = 2, c = 0;

    registro = ReadToDisk(1);

    do
    {

        if (registro.sw == 1)
        { //*************************************

            r[c] = registro; // Funcion que lee todos los registros

            c++; // del archivo

        } //*************************************

        registro = ReadToDisk(i);

        i++;

    } while (!feof(fichero));

    return c;
}

///////////////////////////////////////////////////////////////////////

struct agenda ReadToDisk(int clave)
{

    struct agenda registro; //*********************************************

    fseek(fichero, (clave - 1) * sizeof(registro), SEEK_SET); // funcion que recibe una clave ,se diige a ella

    fread(&registro, sizeof(registro), 1, fichero); // en el archivo la lee y retorna la estructura

    return registro; //*********************************************
}

///////////////////////////////////////////////////////////////////////

void m_todo(void)
{

    int i = 2;

    struct agenda registro;

    registro = ReadToDisk(1); //**************************

    do
    { // Metodo para mostrar todos

        if (registro.sw == 1) // los registros del archivo

            mostrar(registro); //***************************

        registro = ReadToDisk(i);

        i++;

    } while (!feof(fichero));
}

///////////////////////////////////////////////////////////////////////

void mostrar(struct agenda registro)
{

    printf(«n»);

    printf(» Clave
           : tt % d «, registro.clave);

    printf(«n»);

    printf(» Nombre
           : tt % s», registro.nom);

    printf(«n»);

    printf(» Apellido Paterno
           : t % s», registro.ApPat);

    printf(«n»);

    printf(» Apellido Materno
           : t % s», registro.ApMat); //*******************************

    printf(«n»); // Funcion que recibe un registro

    printf(» Edad
           : ttt % d», registro.edad); // y muestra sus campos

    printf(«n»); //*******************************

    printf(» Telefono
           : tt % ld», registro.tel);

    printf(«n»);

    printf(» Telefono Celular
           : t % ld», registro.cel);

    printf(«n»);

    printf(» Calle
           : tt % s», registro.calle);

    printf(«n»);

    printf(» Colonia
           : tt % s», registro.col);

    printf(«n»);

    printf(» Municipio
           : tt % s», registro.mun);

    printf(«n»);

    printf(» Estado
           : tt % s», registro.estado);

    printf(«n»);

    printf(» Mail
           : ttt % s», registro.mail);

    printf(«n»);

    sleep(1);
}

///////////////////////////////////////////////////////////////////////

void borrar(int clave)
{

    struct agenda aux = {0,»»,»»,»», 0, 0, 0,»»,»»,»»,»», 0,»»}; //******************************

    fseek(fichero, (clave - 1) * sizeof(aux), SEEK_SET); // Funcion que guarda un registro

    fwrite(&aux, sizeof(aux), 1, fichero); // vacio para borrar el anterior

} //******************************

///////////////////////////////////////////////////////////////////////

void borrartodo(void)
{

    int i; //*****************************

    for (i = 1; i <= MAX; i++) // Metodo que deja el Archivo

        borrar(i); // en blanco (borra todo)

} //*****************************

///////////////////////////////////////////////////////////////////////

void clavesdisponibles(void)
{

    struct agenda registro;

    int i = 2;

    registro = ReadToDisk(1);

    printf(«Las claves disponibles son
           : «); //***********************

    do
    { // Metodo que visualiza

        if (registro.sw != 1) // todas las claves

            printf(«% d «, i - 1); // disponibles

        registro = ReadToDisk(i); //***********************

        i++;

    } while (!feof(fichero));

    for (; i <= MAX + 1; i++)

        printf(«% d «, i - 1);

    printf(«n»);
}

///////////////////////////////////////////////////////////////////////

void actualizar(struct agenda registro, int opcion)
{

    switch (opcion)
    {

    case 1:

printf (» Nombre ? «);

scanf(«% s», registro.nom);

break;

    case 2:

printf (» Apellido Paterno ? «);

scanf(«% s», registro.ApPat);

break; //**********************************

    case 3: // Funcion que recibe un registro

printf (» Apellido Materno ? «);    //y modifica segun «opcion»

scanf(«% s», registro.ApMat); // el campo correspondiente

break; //**********************************

    case 4:

printf (» Edad ? «);

scanf(«% d», &registro.edad);

break;

    case 5:

printf (» Calle ? «);

scanf(«% s», registro.calle);

break;

    case 6:

printf (» Telefono ? «);

scanf(«% ld», &registro.tel);

break;

    case 7:

printf (» Telefono celular? «);

scanf(«% ld», &registro.cel);

break;

    case 8:

printf (» Cual es tu e-mail ? «);

scanf(«% s», registro.mail);

break;
    }

    SaveToDisk(registro);
}

///////////////////////////////////////////////////////////////////////

void exportar(void)
{

    FILE *archivo;

    char nombre[20]; //********************************

    int c, i; // Metodo que sirve para

    c = ReadAllToDisk(); // crear un archivo de texto

    OrdenaOnMemory(c, 1); // con valores separados por comas

    printf(«Nombre del Archivo
           : «); //********************************

    scanf(«% s», nombre);

    if ((archivo = fopen(nombre,»w»)) == NULL)

        archivo = fopen(nombre,»w»);

    for (i = 0; i < c; i++)

        fprintf(archivo,»% d, % s, % s, % s, % d, % d, % d, % s, % s, % s, % s, % s, n», r[i].clave, r[i].nom, r[i].ApPat, r[i].ApMat, r[i].edad, r[i].tel, r[i].cel, r[i].calle, r[i].col, r[i].mun, r[i].estado, r[i].mail);

    fclose(archivo);
}

///////////////////////////////////////////////////////////////////////﻿