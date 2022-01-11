#include <stdio.h>
#include <string.h>

#define MAX 20
void intercala_chr(char c[], char cad);
int main()
{
system("cls");
    char cd[MAX];
    char caracter;
    for (int i = 0; i < MAX; i++)
    { // limpio el array para evitar suciedad dentro.
        cd[i] = 0;
    }
    printf("Escriba la cadena de caracter\n");
    gets(cd);
    printf("Escribe el caracter\n");
    scanf("%c", &caracter);
    intercala_chr(cd, caracter);
}

void intercala_chr(char c[], char cad)
{
system("cls");
    int tamvector = strlen(c);
    int tam = (tamvector * 2) - 1;
    char r[MAX];
    int pos = 0;

    for (int i = 0; i < tamvector; i++)
    {
        r[pos] = c[i];
        pos++;
        r[pos] = cad;
        pos++;
    }
    for (int i = 0; i < tam; i++)
    {
        printf("%c", r[i]);
    }
}