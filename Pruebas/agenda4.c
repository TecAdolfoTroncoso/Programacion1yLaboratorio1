#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

#define SIZE 100  
int person = 0;
int Index = -1;
int fila=7;

typedef struct Info
{
	int  code;
	char name[30];
	char apellido[30];
	char tell[13];
	char apodo[20];
	char afiliacion[20];
}info; 

  void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos); 
  }

 void setconsolecolor(int textColor, int bgColor) {
      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (textColor + (bgColor * 16)));
   }
   
void welcome()
{
	system("cls");
	gotoxy(17,2); setconsolecolor(11, 0);printf("A  G  E  N  D  A    T  E  L  E  F  O  N  I  C  A");setconsolecolor(7, 0);
	gotoxy(0,24); printf("  [1]Crear [2]Consulta/Modifica [3]Eliminar [4]Reporte por Pantalla [5]Salir ");
}

void telefono()
{
	gotoxy(1,7);setconsolecolor(15, 0);
	printf("\n\t\t\t\t   ,==.--------.");
 	printf("\n\t\t\t\t  (    ) ====   \\");
  	printf("\n\t\t\t\t  ||  | [][][]  |");
	printf("\n\t\t\t\t  ||  |         |");
	printf("\n\t\t\t\t,8||  | [][][]  |");
	printf("\n\t\t\t\t8 ||  |         |");
	printf("\n\t\t\t\t8 ||  | [][][]  |");
	printf("\n\t\t\t\t8 ||  |         |");
	printf("\n\t\t\t\t8 (    ) O O O  /");
	printf("\n\t\t\t\t'88`=='--------' ");
	setconsolecolor(7, 0);
}

void lectura (char *cadena, char *texto)
{
	int cont=0;
	char letra=' ';
	gotoxy(2,fila);printf("%s",cadena);
		while (letra!='\r') 
		{
			gotoxy(14+cont,fila);letra=getche();
			if (letra!='\b') 
			{
				texto[cont]=letra;
				cont++;
			}
			else
			{
		  		printf(" \b");
		  		cont--;
		  		if (cont<0) cont=0;
	    	}
			
		}
	texto[cont-1] = '\0';	
}

void searchname(info *card, char *apodos)
{
	int i;
	Index = -1;
	fila=7;
	gotoxy(2,fila); printf("Apodo o Identificaci%cn: ",162);
	scanf("%s",apodos);
	for (i = 0; i < person; i++)
	{
		if (strcmp(card[i].apodo,apodos) == 0)
		{
			Index = i;
			break;
		}
	}
}


void addinfo(info *card)
{
	char opcion= ' ';
	char name[30] = {0};
	char apellido[30] = {0};
	char tell[13] = {0};
	char apodo[20]={0};
	char afiliacion[20]={0};
	char rotulo[10]={0};
	gotoxy(0,24); printf("%79c ",32);
	gotoxy(30,10);printf ("Desea Crear contacto (s/n)",opcion);
	opcion=getche();
	gotoxy(30,10);printf("%30c ",32);
	if (opcion=='s'|| opcion=='S' )
	{
		setconsolecolor(15, 9);gotoxy(3,5); printf("Creando Contacto");setconsolecolor(7, 0);
		searchname(card, apodo);
		if (Index != -1)
		{
			printf("\n\t \t \t%cEl contacto ya existe! ENTER para regresar ",173);
			getche();
		}
		else
		{
			strcpy(rotulo, "Nombres: ");
			++fila; lectura (rotulo, name);
			strcpy(rotulo, "Apellidos: ");
			++fila; lectura (rotulo, apellido);
			++fila; gotoxy(2,fila); printf("Telefono:   ");
			scanf("%s", tell);
			strcpy(rotulo, "Grupo: ");
			fila++;	lectura (rotulo,afiliacion);
			strcpy(card[person].name, name);
			strcpy(card[person].apellido, apellido);
			strcpy(card[person].tell, tell);
			strcpy(card[person].apodo, apodo);
			strcpy(card[person].afiliacion, afiliacion);
			card[person].code=person+1;
			person++;
		}
	} // fin de si
}

void modifyinfo(info *card)
{	
	char name[30] = {0};
	char apellido[30] = {0};
	char tell[13] = {0};
	char apodo[20]={0};
	char afiliacion[20]={0};
	char rotulo[10]={0};
	char i=Index;
	char choice=' ';
	int m=1;
	while(m==1){
		welcome();
		setconsolecolor(15, 9);gotoxy(3,5); printf("Modificando Contacto");setconsolecolor(7, 0);
    	gotoxy(0,24); printf("  [1]Nombre [2]Apellido [3]Telefono [4]Apodo [5]Grupo [6]Salir               ");
		choice=getch();
		switch (choice)
		{
			case '1':
				strcpy(rotulo, "Nombres: ");
				lectura (rotulo, name);
				strcpy(card[i].name, name);
				break;
			case '2':
				strcpy(rotulo, "Apellidos: ");
				lectura (rotulo, apellido);
				strcpy(card[i].apellido, apellido);
				break;				
			case '3':
				gotoxy(2,fila); printf("Telefono:   ");
				scanf("%s", tell);
				strcpy(card[i].tell, tell);
				break;
			case '4':
				searchname(card, apodo);
				if (Index==-1)
				  {
				  	strcpy(card[i].apodo, apodo);
				  }
			  	else
				{
					printf("\n\nalias ya existe, utilice otro");
					printf("\n\n\t\tPresione enter" );
					getche();
				}
				break;
			case '5':
				strcpy(rotulo, "Grupo: ");
				lectura (rotulo,afiliacion);
				strcpy(card[i].afiliacion, afiliacion);
				break;
			case '6':
				m=0;
				break;
			default :
				gotoxy(22,13);printf("La entrada es incorrecta \n\n\t           %cPresione una tecla para continuar!",173);
				getche();
		}
		system("CLS");
	 }
}

void searchinfo(info *card)
{
	char name[30] = {0};
	char apellido[30] = {0};
	char tell[13] = {0};
	char apodo[20]={0};
	char afiliacion[20]={0};
	char rotulo[10]={0};
	char opcion=' ';
	setconsolecolor(15, 9);gotoxy(3,5); printf("Consultando Contacto");setconsolecolor(7, 0);
	searchname(card, name);

	if ( Index == -1)
	{
		printf("\n\n \t \t \t%c No se encontro el registro ! \n ",173);
		printf("\n\n \t \t \t\tENTER para regresar");
		getche();
	}
	else
	{
		gotoxy(2,9);printf("Registro Nro:%d ", card[Index].code);	
		gotoxy(15,11);printf("Nombres:%s", card[Index].name);
		gotoxy(15,12);printf("Apellidos:%s", card[Index].apellido);
		gotoxy(15,13);printf("Telefono:%s", card[Index].tell);
		gotoxy(15,14);printf("Apodo:%s", card[Index].apodo);
		gotoxy(15,15);printf("Grupo:%s", card[Index].afiliacion);
		printf("\n\n\n\t \t\t Desea Modificar la Ficha (S/N):");
		opcion=getche();
		if (opcion=='s' || opcion=='S')	
		{
			modifyinfo(card);
		}
	}
}

void deleteinfo(info *card)
{
	int i;
	char name[32] = {0};
	char ch = '\0';
	Index=-1;
	do{
		if (person==0)
		{
			gotoxy(22,13);printf ("Libreta de Direcciones Vacia \n\n\t\t           ENTER para salir ");
			break;
		}
	    setconsolecolor(15, 9);gotoxy(3,5); printf("Eliminar Contacto");setconsolecolor(7, 0);
		gotoxy(2,7);printf ("N%cmero de Registro a Eliminar, o marque 0 para salir: ",163);
	    scanf ("%d", &Index);
	    --Index;
	    if (Index==-1) break;
	    if (Index >person) {
     		printf ("\n Introduzca un valor valido,  	PRESIONE ENTER\n\n");
	    	getche();
		}
	} while(Index>person);
	if (Index > -1)
	{
		gotoxy(2,9);printf("Registro Nro:%d ", card[Index].code);	
		gotoxy(15,11);printf("Nombres:%s", card[Index].name);
		gotoxy(15,12);printf("Apellidos:%s", card[Index].apellido);
		gotoxy(15,13);printf("Telefono:%s", card[Index].tell);
		gotoxy(15,14);printf("Apodo:%s", card[Index].apodo);
		gotoxy(15,15);printf("Grupo:%s", card[Index].afiliacion);
		//
		getchar();
		printf("\t \t \t%cEliminar? (S/N):",168);
		ch = getche();
		if (ch == 's' || ch=='S')
		{
			if (Index != -1)
			{
				for (i = Index; i < person; i++)
				{
					strcpy(card[i].name,card[i + 1].name);
					strcpy(card[i].apellido,card[i + 1].apellido);
					strcpy(card[i].tell,card[i + 1].tell);
					strcpy(card[i].apodo,card[i + 1].apodo);
					strcpy(card[i].afiliacion,card[i + 1].afiliacion);
					
				}
			}
			person--;
		}
	}

}


void showinfo(info *card)
{
	int i;
	gotoxy(1,6);printf("  CODIGO      NOMBRE                   APELLIDOS                TELEFONO         APODO         GRUPO");
	for (i = 0; i < person; i++)
	{
		gotoxy(1,7+i); printf("    %d         %-15s          %-15s         %-12s      %-10s    %-10s", card[i].code, card[i].name, card[i].apellido, card[i].tell, card[i].apodo, card[i].afiliacion);
	}
		gotoxy(15,14);printf("Presione ENTER para regresar"); 
}

int main()			//	***		MENU PRINCIPAL 	**	
{
	welcome();
	telefono();
	info card[SIZE] = {0};
	char choice = '0';
	while(1)
	{	
		choice=getch();
		welcome();
		switch (choice)
		{
			case '1':
				addinfo(card);
				break;
			case '2':
				searchinfo(card);
				//getch();
				break;				
			case '3':
				deleteinfo(card);
				getch();
				break;
			case '4':
				showinfo(card);
				getch();
				break;
			case '5':
				exit(0);
			default :
				gotoxy(22,13);printf("La entrada es incorrecta \n\n\t           %cPresione una tecla para continuar!",173);
				getch();
		}
		system("CLS");
		welcome();
	}
	return 0;
}
