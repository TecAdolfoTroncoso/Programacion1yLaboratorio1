#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct
{
    char nombre[40] ;
    int dni;
    int edad;
    int flag;

}Persona;

Persona * alta(Persona * persona, int * longitudPers);

int mostrar(Persona * persona, int * longitudPers);

int buscar(Persona * persona, int * longitudPers);

void menu();

int main()
{
    int option = 0;
    int * longitudPers ;
    Persona * persona;
    do{
        menu();
        printf("ingrese una opcion:");
        scanf("%d", &option);
        switch (option){
            case 1 : persona = alta(persona,longitudPers);break;
            case 2 : mostrar(persona,longitudPers);break;
            case 3 : buscar(persona,longitudPers);break;
        }

    }while(option != 5);

}

void menu(){
     printf("1-Alta\n");
     printf("2-Mostar\n");
     printf("3-Busca\n");
     printf("5-Salir\n");
}

Persona * alta(Persona * persona, int * longitudPers){
    printf("alta");

    int option=1;
    int auxNuevaLogitud;
    Persona* punteroAux;
    *longitudPers = 1;
    persona = (Persona * ) malloc(sizeof(Persona));

    while(option==1)
    {
        printf("\nIngrese apellido/s y nombre/s: :  " );
        scanf("%s", persona[*longitudPers-1].nombre);

        printf("\nIngrese el DNI: ");
        scanf("%d", &(persona[*longitudPers-1].dni));// notacion como vector

        printf("\nIngrese la edad: ");
        scanf("%d", &((persona+*longitudPers-1)->edad) ); // puntero

        (persona+*longitudPers-1)->flag=0; // puntero

        printf("\nSi desea cargar otra persona ingrese 1 o para finalizar 2: ");
        scanf("%d", &option);

        if(option == 1)
        {

            auxNuevaLogitud = sizeof(Persona) * (*longitudPers + 1) ;

            punteroAux = (Persona*)realloc( persona, auxNuevaLogitud);
            if (punteroAux == NULL)
            {
                printf("\nNo hay lugar en memoria\n");
                break;
            }
            (*longitudPers)++;
            persona = punteroAux;

        }
        else
        {
            break;
        }
    }
    mostrar(persona,longitudPers);
    return persona;
}

int mostrar(Persona * persona, int * longitudPers){
    printf("mostrar %d\n",*longitudPers);

    for(int i = 0 ; i < (* longitudPers); i++ ){
        printf("\nNombre: %s\n", persona[i].nombre);
        printf("\nDNI: %ld\n", persona[i].dni);
        printf("\nEdad: %d\n", persona[i].edad);
        printf("\nflag: %d\n", persona[i].flag);
    }

     return 1;
}

int buscar(Persona *persona, int * longitudPers)
{
    char contact[40];
    int bandera=0;

    printf("\nIngrese apellido/s y nombre/s: :  " );
    scanf("%s", contact);

    for(int i=0; i< *longitudPers; i++)
    {
        if(strcmp((persona+i)->nombre, contact)==0 && (persona+i)->flag==0)
        {
            printf("\nNombre: %s\n", persona[i].nombre);
            printf("\nDNI: %ld\n", persona[i].dni);
            printf("\nEdad: %d\n", persona[i].edad);
            printf("\nflag: %d\n", persona[i].flag);
            bandera=1;
        }
    }

    if(bandera==0)
    {
        printf("\nNo se encontro el contacto\n");
    }
}