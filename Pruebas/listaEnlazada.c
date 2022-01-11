#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
    int valor;
    struct nodo *siguiente;
} nod;


int main()
{
    int aux, contador;
    struct nodo *cabecera, *flecha;

    printf("ingrese un valor: ");
    scanf("%d", &aux);

    cabecera = (nod *)malloc(sizeof(nod));
    cabecera->valor = aux;
    cabecera->siguiente = NULL;

    printf("ingrese un segundo valor: ");
    scanf("%d", &aux);

    cabecera->siguiente = (struct nodo *)malloc(sizeof(struct nodo));
    cabecera->siguiente->valor = aux;
    cabecera->siguiente->siguiente = NULL;

    printf("ingrese un tercer valor: ");
    scanf("%d", &aux);

    cabecera->siguiente->siguiente = (struct nodo *)malloc(sizeof(struct nodo));
    cabecera->siguiente->siguiente->valor = aux;
    cabecera->siguiente->siguiente->siguiente = NULL;

    contador = 1;
    flecha = cabecera; // Hacemos que flecha apunte al primer nodo
    while (flecha->siguiente != NULL)
    {
        printf("El valor del nodo %d es: %d\n", contador, flecha->valor);
        contador++;
        flecha = flecha->siguiente; // Hacemos que apunte al otro nodo
    }
    printf("El valor del nodo %d es: %d", contador, flecha->valor);

    return 0;
}