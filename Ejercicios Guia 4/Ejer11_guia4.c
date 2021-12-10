#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CLIENTMAX 5
enum estado_cuenta
{
    invalido,
    MOROSO,
    ATRASADO,
    PAGADO
};

typedef struct client // con el typedef llamo la estructura clientes.
{
    char nombre[15];
    int unidadesSolicitadas;
    float precioUnidadesSolicitadas;
    char estado_Factura[15];
} clientes;

struct client cargarCliente();
void BDClientes(clientes v[]);
void imprimirCliente(clientes cl); // (struct client cl)
void morosos(clientes v[]);
void buscarpagodemayorcantidad(clientes v[]);

int main()
{
    clientes listaClientes[CLIENTMAX]; // struct client listaClientes[3];
    char G_continuar;
    system("cls");
    printf("\t\tBienvenido al sistema de facturacion\n\n");
    printf("Este programa se encuentra en face de desarrollo \n");
    printf("Para cualquier consulta puede comunicarse al siguiente email tec.adolfotroncoso@gmail.com\n");
    printf("Desea ver la lista de clientes ya cargada?\n");
    printf("Presione 'n' o 'N' Para ver la lista de clientes ya prestablecida\n");
    printf("Presione 's' o 'S' si desea registrar un nuevo cliente.\n");
    scanf("%c", &G_continuar);
    if (G_continuar == 'n' || G_continuar == 'N')
    {
        BDClientes(listaClientes);
        for (int i = 0; i < 3; i++)
        {
            imprimirCliente(listaClientes[i]);
        }
    }
    else if (G_continuar == 's' || G_continuar == 'S')
    {
        BDClientes(listaClientes);
        for (int i = 3; i < CLIENTMAX; i++)
        {
            listaClientes[i] = cargarCliente();
        }
        for (int i = 0; i < CLIENTMAX; i++)
        {
            imprimirCliente(listaClientes[i]);
        }
    }
    int opcion;
    int juansito = 0;

    while (juansito < 1)
    {
        printf("-------------- MENU PRINCIPAL --------------\n");
        printf("1. Lista de clientes que se encuentran en estado 'MOROSO'\n");
        printf("2. Lista de clientes han pagado una factura mayor a una cantidad ingresada.\n");
        printf("Digite cualquier tecla para salir del programa.\n");
        printf("Por favor digite la opcion a realizar.\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            morosos(listaClientes);
            break;
        case 2:
            buscarpagodemayorcantidad(listaClientes);
            break;
        default:
            juansito = 2;
            break;
        }
    }
}

struct client cargarCliente()
{
    fflush(stdin);
    struct client cl;
    printf("INGRESE NOMBRE DEL CLIENTE \n");
    gets(cl.nombre);
    fflush(stdin);
    printf("UNIDADES SOLICITADAS POR EL CLIENTE\n");
    scanf("%d", &cl.unidadesSolicitadas);

    fflush(stdin);
    printf("INGRESE PRECIO POR UNIDAD \n");
    scanf("%f", &cl.precioUnidadesSolicitadas);

    fflush(stdin);

    int i = 0;
    while (i <= 0)
    {
        printf("INGRESE ESTADO DEL CLIENTE \n");
        printf(" 1. MOROSO \n");
        printf(" 2. ATRASADO \n");
        printf(" 3. PAGADO \n");
        enum estado_cuenta estado;
        scanf("%d", &estado);
        if (estado > 0 && estado < 4)
        {
            switch (estado)
            {
            case MOROSO:
                strcpy(cl.estado_Factura, "MOROSO");
                break;

            case ATRASADO:
                strcpy(cl.estado_Factura, "ATRASADO");
                break;

            case PAGADO:
                strcpy(cl.estado_Factura, "PAGADO");
                break;
            }

            i = 1;
        }
        else
        {
            printf("Por favor ingrese una opcion correcta\n");
            printf("Opcion 1 = MOROSO");
            printf("Opcion 2 = ATRASADO");
            printf("Opcion 3 = PAGADO");
            i = 0;
        }
    }
    return cl;
}

void BDClientes(clientes v[])
{
    clientes primerCliente = {"Pepe Argento", 2, 350, "MOROSO"};
    clientes segundoCliente = {"Moni Argento", 10, 500, "PAGADO"};
    clientes tercerCliente = {"Paola Argento", 100, 10, "ATRASADO"};
    v[0] = primerCliente;
    v[1] = segundoCliente;
    v[2] = tercerCliente;
}

void imprimirCliente(clientes cl)
{
    float multi = cl.unidadesSolicitadas * cl.precioUnidadesSolicitadas;
    printf("=============================================\n\n");
    printf("\tNombre Cliente: %s\n\n", cl.nombre);
    printf("Unidades solicitadas por el cliente: %d\n", cl.unidadesSolicitadas);
    printf("Precio unidad %0.2f \n", cl.precioUnidadesSolicitadas);
    printf("Estado actual de cliente: %s \n", cl.estado_Factura);
    printf("Total gastado: $%0.2f\n", multi);
    printf("=============================================\n");
}

void morosos(clientes v[])
{
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(v[i].estado_Factura, "MOROSO") == 0)
        {
            imprimirCliente(v[i]);
        }
    }
}

void buscarpagodemayorcantidad(clientes v[])
{
    int precioFinal = 0;
    printf("Ingrese un valor aproximado para evaluar una factura mayor de una determinada cantidad.");
    scanf("%d", &precioFinal);
    printf("\n");
    for (int i = 0; i < CLIENTMAX; i++)
    {
        float multi = v[i].unidadesSolicitadas * v[i].precioUnidadesSolicitadas;
        if ((strcmp(v[i].estado_Factura, "PAGADO") == 0) && multi > precioFinal)
        {
            imprimirCliente(v[i]);
        }
    }
}