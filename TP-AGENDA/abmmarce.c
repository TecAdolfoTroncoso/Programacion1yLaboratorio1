#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>

#define A 20


//Estructura de las coordenadas de pantalla
COORD coord={0,0};

void gotoxy(int x, int y)
{
	coord.X=x;
	coord.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


typedef struct
{

    char nombre[50];
    int edad;
    int estado;
    int dni;

} ePersonas;


/**  obtiene la estructura
 *
 *  cada parte de la estructura obtiene un valor
 *
 *  retorna a las variables.
 *
 */
 
 void iniPersona(ePersonas laPersona[], int );
// * Inicializacion vacio

 void crearPersona(ePersonas laPersona[], int ) ;

/** buscar un lugar en 0 o sea vacio
 * carga datos donde esta 0
 */
void borrarPersona(ePersonas[],int);

/*
 * elimina los nombres de las estructuras
 */
void ordenarPersonasPorNombre(ePersonas[],int);

/**
 * ordena los datos alfabeticamente
 * los nombre de las estructuras
 */

int buscarPorDni(ePersonas[], int);
/*dni el dni a ser buscado en el array.
*el indice en donde se encuentra el elemento que coincide con el parametro dni
*/

int main()
{

    ePersonas misPersonas[A];//estructura  de 20.
	iniPersona(misPersonas,A);
	
    int opcion=0, cont=0;
    char seguir='s';
    int i;
    while(seguir=='s')
    {
    	system("CLS");
    	gotoxy(15,5);
        system("Color 0A");
                //------------------MENU-----------------------------
        printf("º-----------------------------------------------------º");
        gotoxy(25,6);
		cout<<("1- Agregar persona");
		gotoxy(15,7);
		printf("º-----------------------------------------------------º");
        gotoxy(25,8);
		printf("2- Borrar persona");
        gotoxy(15,9);
		printf("º-----------------------------------------------------º");
        gotoxy(25,10);
		printf("3- Imprimir lista ordenada por  nombre");
        gotoxy(15,11);
		printf("º-----------------------------------------------------º");
        gotoxy(25,12);
		printf("4- Imprimir grafico de edades");
		gotoxy(15,13);
        printf("º-----------------------------------------------------º");
        gotoxy(25,14);
		printf("5- Salir");
		gotoxy(15,15);
        printf("º-----------------------------------------------------º");
        gotoxy(25,16);
        printf("- Ingrese una opcion :");
        scanf("%d",&opcion);
		system("CLS");
        switch(opcion)
        {
	        case 1:
			    crearPersona(misPersonas,cont);
        	    cont++;
            	system("PAUSE");
            	break;
        	case 2:
	            borrarPersona(misPersonas,cont);
    	        break;
        	case 3:
            	ordenarPersonasPorNombre(misPersonas,cont);
            	break;
        	case 4:
            	buscarPorDni(misPersonas,cont);
            	break;
        	case 5:
            	seguir='n';
            	break;
        }//cierre del switch
    }//cierre del while
	system("Color 0A");
	gotoxy(15,7);
	printf("Gracias por usar nuestro programa!!!!");
	gotoxy(15,9);
    printf("º-----------------------------------------------------º");
    gotoxy(15,10);
    printf("º DESARROLLADO POR :                                  º");
    gotoxy(15,11);
    printf("º MAURICIO VIBANCO Y MARCELO MIGUEL	             º");
    gotoxy(15,12);
	printf("º-----------------------------------------------------º");
	
	printf("\n\n");
}//cierre del main

//Cargar personas
void crearPersona(ePersonas laPersona[], int tam)
{
    int i;
   	system("Color 0F");

    for(i=0; i<A; i++)
    {
        if(laPersona[i].estado==0)
        {
            printf("Ingrese Nombre: ");//Ingreso datos.
            fflush(stdin);
            gets(laPersona[i].nombre);

            printf("Ingrese edad: ");
            scanf("%d",&laPersona[i].edad);

            while(laPersona[i].edad>101 || laPersona[i].edad<0)
            {
                printf("\nLa edad solo puede estar dentro de los parametros 1 - 100 ");
                scanf("%d",&laPersona[i].edad);
            }

            printf("Ingrese D.N.I.: ");
            scanf("%d",&laPersona[i].dni);

            laPersona[i].estado=1;//se utilizara el campo de estado para indicar si el item del array esta ocupado o no.
            return ;//laPersona;

        }//cierredelif

    }//cierre del for
}

//Borrar persona
void borrarPersona(ePersonas laPersona[],int tam)
{
   	system("Color 0C");
    int i;
    int auxDni;
    int respuesta;
    int flagCapacidad=0;
    printf("Ingrese el DNI a eliminar : "); //ingreso el dni de la persona a borrar 
    scanf("%d", &auxDni);

    for(i=0; i<tam; i++)
    {
        if(laPersona[i].estado==1 &&auxDni == laPersona[i].dni)//encontro la serie
        {
            printf("Esta seguro de eliminar? s/n ");
            printf("\nNombre %s \t\t %d \t\t %d \n",laPersona[i].nombre,laPersona[i].edad,laPersona[i].dni);
            respuesta = getche();
            if(respuesta=='s')
            {
                printf("\n Persona eliminada. Muchas gracias \n"); 
                laPersona[i].estado=0;
            }
            else
            {
                printf("\n Accion cancelada por el usuario :"); 
                
            }
            flagCapacidad=1;
            break;
        }
    }
    if(flagCapacidad==0)
    {
        printf("La Persona es inexistente!");
    }

    for(i=0; i<tam; i++)
    {
        if(laPersona[i].estado==1)
        {
            printf("\nNombre %s \t\t %d \t\t %d \n",laPersona[i].nombre,laPersona[i].edad,laPersona[i].dni);
        }
    }
	system("PAUSE");
}

//Ordenar personas
void ordenarPersonasPorNombre(ePersonas laPersona[],int tam)
{
   	system("Color 0E");

    int i,j;
    ePersonas auxNombre;
    for(i=0; i<tam-1; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(strcmp(laPersona[i].nombre,laPersona[j].nombre)>0)// se ordena las personas 
            {
                auxNombre = laPersona[i];
                laPersona[i] = laPersona[j];
                laPersona[j] = auxNombre;
            }
        }
    }

    for(i=0; i<tam; i++)
    {
        if(laPersona[i].estado==1)
        {
            printf("\n         Nombre   Edad       DNI\n");
            printf("%15s    %2d    %8d\n",laPersona[i].nombre,laPersona[i].edad,laPersona[i].dni); // imprime el nombre de las personas, edad y dni.
        }
    }
    system ("PAUSE");
    printf("\n");
}

//Matriz grafica
int buscarPorDni(ePersonas laPersona[], int tam)
{
	system("Color 0B");
    int max=0, contadorMayor=0, contadorMenor=0, contadorIntermedio=0, i , j ;
    int tabla [3];
    char impresion [tam][3];
    for(i=0; i<tam; i++)
    {
        if(laPersona[i].edad<18 && laPersona[i].estado==1 )
        {
            contadorMenor++;
        }//Menores de 18  De 19 a 35 Mayores de 35.
        else
		{
		    if(laPersona[i].edad>35 && laPersona[i].estado==1)
         	{
            	contadorMayor++;
        	}
        	else
			{
			 	if(laPersona[i].edad>17 && laPersona[i].edad<36 && laPersona[i].estado==1)
        		{
            		contadorIntermedio++;
        		}
    		}
    	}
	}
    tabla[0]=contadorMenor; 
    tabla[1]=contadorIntermedio; 
    tabla[2]=contadorMayor; 
    for (i=0; i<3; i++)
    {
        if (tabla[i]>max)
        {
            max=tabla[i];
        }
    }
    for (i=0; i <=max; i++)
    {
    	if (i<contadorMenor)
    	{
			impresion[i][0]=254;  
     	}
     	else
     	{
     		impresion[i][0]=32;		 
		}
    	if(i<contadorIntermedio)
    	{
    		impresion[i][1]=254;  
		}
		else
     	{
     		impresion[i][1]=32;		 
		}
		if (i<contadorMayor)
		{
    		impresion[i][2]=254;  
		}
		else
     	{
     		impresion[i][2]=32;		 
		}
	}
	for (i = max-1; i>=0; i--) 
	{
		gotoxy(5,20-i);
		cout<<i+1;
		gotoxy(10,20-i);
		cout<<char(impresion[i][0]);
		gotoxy(25,20-i);
		cout<<char(impresion[i][1]);
		gotoxy(40,20-i);
		cout<<char(impresion[i][2]);
	}
    printf("\n\t<18\t\t19-35\t\t>35 \n");
	system("PAUSE");
    
  	return 0;

}

void iniPersona(ePersonas laPersona[], int tam)
{
    int i;
    for(i=0; i<A; i++)
    {
        strcpy(laPersona[i].nombre," ");
    	laPersona[i].edad=0;
	    laPersona[i].estado=0;//Se utilizara el campo de estado para indicar si el item del array esta ocupado o no.
		laPersona[i].dni=0;
	}//cierre del for
}
