#include <stdio.h>

int main()
{
    char frase[100];
    char cAux;
    int cont;

    printf("Introduce la frase: ");

    cont = 0;
    while (cAux != '\n')
    {
        scanf("%c", &cAux);
        frase[cont] = cAux;
        cont++;
    }

    while (cont >= 0)
    {
        printf("%c", frase[cont - 1]);
        cont--;
    }
    printf("\n");
    getch();
    return 0;
}
