#include<stdio.h>
#include<string.h>
//Declaramos un tipo de estructura (struct), y me refiero(typedef) a ella como CLI//
 typedef struct clientes 
{
    char nombre[21];
    int numerosUnidades;
    float precio;    
    char estado[10]; 
    
}cli; 
//Declramos un enunciado (enum) en este caso nos referimos a ella como ESTADO//
enum estado{vacio,pagado,atrasado,moroso};

//Declaramos las funciones//
void cargarClientes(cli v[]);
void imprimirDatos(cli c);
void listaMoros( cli v[]);
void buscarMonto(cli v[]);
struct clientes cargaDedatos();


//Cuerpo del programa donde llamamos a las funciones//
int main()
{
    cli listaClientes[5];
    printf("bienvenidos a usar mi sistema de facturacion\n");
    printf("Desea ver los clientes ya cargados anteriormenete?\n");
    printf("Presione 'S' O 's' para ver los datos ya cargado  \n");
    printf("Presione 'R' o 'r' para registrar nuevos clientes\n");
    char continuar;
    scanf("%c", &continuar);
    if (continuar== 'S' || continuar =='s' )
    {
        cargarClientes(listaClientes);
        for (int i = 0; i <3; i++)
        {
            imprimirDatos(listaClientes[i]);
        }
    }else if(continuar== 'R' || continuar =='r')
    {
        cargarClientes(listaClientes);
        for (int i =3; i <5; i++){
            listaClientes[i]= cargaDedatos();
        }
        for (int i =0; i <5; i++){
            imprimirDatos(listaClientes[i]);
        }
    }
    printf("        Menu pricipal        \n");
    printf("1. Moroso\n");
    printf("2. Lista de clientes que han pagado una factura mayor a la cantidad ingresada.\n");
    int opcion;
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1 :
        listaMoros(listaClientes);
        break;
    case 2 :
        buscarMonto(listaClientes);
        break;
    
    default:
        break;
    }
}
struct clientes cargaDedatos(){
    struct clientes cln;

    fflush(stdin);
    printf("ingrese el nombre del cliente\n");
    gets(cln.nombre);
    fflush(stdin);
    printf("Ingrese el numero de unidades solicitadas\n");
    scanf("%d", &cln.numerosUnidades);
    fflush(stdin);
    printf("Ingrese el precio del producto\n");
    scanf("%f", &cln.precio);
    fflush(stdin);

    int numero=0;
    while (numero<=0)
    {
        printf("Seleccione el estado en el que se encuentre el cliente\n");
        printf("1. Pagado\n");
        printf("2. Atrasado\n");
        printf("3.Moroso\n");

        enum estado est;
        scanf("%d", &est);
        if(est>0 && est<4){
            switch (est)
            {
            case pagado:
                strcpy(cln.estado,"Pagado");
                break;
            case atrasado:
                strcpy(cln.estado,"Atrasado");
                break;
            case moroso:
                strcpy(cln.estado,"Moroso");
                break;        
            
            default:
                break;
            }
            numero=1;
        }else{
            printf("Por favor, ingrese la opcion correcta\n");
            printf("1. Pagado\n");
            printf("2. Atrasado\n");
            printf("3.Moroso\n");
            numero=0;
        }
    

    }
    return cln;
}

//Declaramos una función que ya ha cargado los clientes en este caso me refiero
//a ella como cli v[]//
void cargarClientes(cli v[])
{
    cli cliente1={"Sofia Aranda", 2, 250.50, "pagado"};
    cli cliente2={"Daniel Martinez", 5, 300, "atrasado"};
    cli cliente3={"Gabriel Martinez", 10, 450.75, "moroso"};

    v[0]= cliente1;
    v[1]= cliente2;
    v[2]= cliente3;
}
//Imprimo los datos cargados por teclado y ya ingresados//
void imprimirDatos(cli c)
{
    float totalGastado= c.numerosUnidades * c.precio;
    printf("=============================================\n\n");
    printf("\tnombre: %s\n", c.nombre);
    printf("Numero de unidad: %d\n", c.numerosUnidades);
    printf("Precio  %0.2f\n", c.precio);
    printf("estado: %s\n", c.estado);
    printf("Total facturado: %0.2f\n", totalGastado);
    printf("=============================================\n\n");
}
//Buscamos y mostramos los clientes en estado moroso//
void listaMoros( cli v[])
{
    for(int i=0; i<5; i++){
        if(strcmp(v[i].estado, "moroso")==0){
            imprimirDatos(v[i]);
        }
    }   
}
//Buscamos factura que se excedan el monto a buscar y estos tienen que estar en estado pagado//
void buscarMonto(cli v[]){
    int totalGastado;
    printf("Introduzca el valor a buscar\n");
    scanf("%d", &totalGastado);

    for (int i = 0; i <5; i++)
    {
        float precioFinal= v[i].numerosUnidades * v[i].precio;
        if((strcmp(v[i].estado,"pagado")==0) && precioFinal < totalGastado){

            imprimirDatos(v[i]);

        }
    }   
}