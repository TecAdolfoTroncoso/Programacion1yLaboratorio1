#include <stdio.h>
#include <stdlib.h>

typedef struct etiqueta
{
    char rotulo[30];
    long int codigo;
} eti;

int main()
{
    eti *e;
    e = (eti *)malloc(sizeof(eti));
    scanf("%s", &e->rotulo);
    printf("El rotulo de la etiqueta es: %s \n", e->rotulo);
    scanf("%ld", &e->codigo);
    printf("El codigo de barras es: %d\n", e->codigo);
    return 0;
}