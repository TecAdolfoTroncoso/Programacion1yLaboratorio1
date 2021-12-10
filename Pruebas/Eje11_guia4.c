/*
Alumno: JUAN ADRIAN CORSO

Descripción:

   Ejercicio 11:
   Escribir un programa de facturación de clientes
   Los clientes tienen: 
   •Nombre.
   •Número de unidades solicitadas. 
   •Precio de cada unidad.
   •Estado en que se encuentra: 
      • Moroso.
      • Atrasado.
      • Pagado. 
   El programa debe generar los diversos clientes.

   Ejercicio 12:
   Modifique el programa de facturación de clientes de tal modo que 
   se puedan obtener los siguientes listados.
      • Clientes en estado moroso.
      • Clientes en estado pagado con factura mayor de 
   una determinada cantidad.

Ejercicio 11 y 12 de la guia 4.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LARGO 3

struct client
{
   char nombre[30];
   int unidadesSolicitadas;
   float precioUnidad;
   char estado[10];
};

struct client listaClientes[LARGO];

struct client cargarCliente();
void imprimirClientes(struct client v[], int i);
void menuOpciones();
void estadosMorosos(struct client v[], int i);
void pagados(struct client v[], int i);

int main()
{
   for (int i = 0; i < LARGO; i++)
   {
      listaClientes[i] = cargarCliente();
      printf("\n");
   }
   //system("cls");
   for (int i = 0; i < LARGO; i++)
   {
      imprimirClientes(listaClientes, i);
      printf("\n");
   }

   menuOpciones();
}

struct client cargarCliente()
{
   fflush(stdin);
   struct client cl;

   printf("INGRESE NOMBRE DEL CLIENTE \n");
   gets(cl.nombre);

   fflush(stdin);
   printf("UNIDADES SOLICITADAS POR EL CLIENTE\n");
   scanf("%i", &cl.unidadesSolicitadas);

   fflush(stdin);
   printf("INGRESE PRECIO POR UNIDAD \n");
   scanf("%f", &cl.precioUnidad);

   fflush(stdin);

   int num = 0;
   int i = 0;
   while (i <= 0)
   {
      printf("INGRESE ESTADO DEL CLIENTE \n");
      printf(" 1. MOROSO \n");
      printf(" 2. ATRASADO \n");
      printf(" 3. PAGADO \n");
      scanf("%i", &num);
      if (num > 0 && num < 4)
      {

         switch (num)
         {
         case 1:
            strcpy(cl.estado, "MOROSO");
            break;

         case 2:
            strcpy(cl.estado, "ATRASADO");
            break;

         case 3:
            strcpy(cl.estado, "PAGADO");
            break;
         }

         i = 1;
      }
      else
      {
         printf("INGRESE ELECCION CORRECTA (1 A 3)\n");
         i = 0;
      }
   }
   return cl;
};

void imprimirClientes(struct client v[], int i)
{
   printf("NOMBRE DE CLIENTE: %s \n", v[i].nombre);
   printf("UNIDADES SOLICITADAS: %i \n", v[i].unidadesSolicitadas);
   printf("PRECIO UNIDAD: %0.2f \n", v[i].precioUnidad);
   printf("ESTADO DEL CLIENTE: %s \n", v[i].estado);
}

void menuOpciones()
{
   int opcion = 0;
   int i = 0;
   while (i <= 0)
   {
      printf("SELECCIONE LA OPCION DESEADA\n");
      printf(" 1. MUESTRA LISTA MOROSOS \n");
      printf(" 2. MUESTRA GENTE QUE PAGO \n");
      scanf("%i", &opcion);
      printf("\n");
      if (opcion > 0 && opcion < 4)
      {

         switch (opcion)
         {
         case 1:
            estadosMorosos(listaClientes,i);
            break;

         case 2:
            pagados(listaClientes,i);
            break;
         }

         i = 1;
      }
      else
      {
         printf("INGRESE ELECCION CORRECTA (1 A 3)\n");
         i = 0;
      }
   }
}

void estadosMorosos(struct client v[], int i)
{
   for (int i = 0; i < LARGO; i++)
   {
      if (strcmp(v[i].estado, "MOROSO") == 0)
      {
         printf("ESTADO DEL CLIENTE: %s \n", v[i].estado);
         printf("NOMBRE DE CLIENTE: %s \n", v[i].nombre);
         printf("UNIDADES SOLICITADAS: %i \n", v[i].unidadesSolicitadas);
         printf("PRECIO UNIDAD: %0.2f \n", v[i].precioUnidad);
      }
   }
}

void pagados(struct client v[], int i)
{
   float precioBase = 0.00;
   printf("INGRESE PRECIO BASE A EVALUAR :  ");
   scanf("%f", &precioBase);
   printf("\n");
   for (int i = 0; i < LARGO; i++)
   {
      float multi = v[i].precioUnidad * v[i].unidadesSolicitadas;
      if ((strcmp(v[i].estado, "PAGADO") == 0) && multi > precioBase)
         printf("NOMBRE DE CLIENTE: %s \n", v[i].nombre);
         printf("ESTADO DEL CLIENTE: %s \n", v[i].estado);
         printf("UNIDADES SOLICITADAS: %i \n", v[i].unidadesSolicitadas);
         printf("PRECIO UNIDAD: %0.2f \n", v[i].precioUnidad);
         printf("GASTO TOTAL : %0.2f\n",multi);
         printf("\n");
         printf("\n");
   }
};