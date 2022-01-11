/*
            Definir una función “intercala_chr” que, dados como parámetros una cadena de caracteres y
               un carácter, devuelva como resultado la cadena con el carácter insertado entre sus
                caracteres originales. [Ej: para los argumentos ‘veamos’ y ‘-‘, debería devolver
                                        al programa principal ‘v-e-a-m-o-s’ ]. b
*/

#include <stdio.h>
#include <string.h>
#define MAX 100
char intercala_chr(char c[], char d);
int main()
{

    char cadena[6] = "veamos";
    char caracter = '-';
    intercala_chr(cadena, caracter);
}
char intercala_chr(char c[], char d)
{
    int a = 1;
    int tam = strlen(c);
    int tamvector = (tam * 2) - 1;
    char nuevapal[MAX];
    for (int i = 0; i < MAX; i++)
    {
        if (c[i] != 0)
        {
            nuevapal[a] = c[i];
            a++;
            nuevapal[a] = d;
            a++;
        }

        for (int i = 0; i < tamvector; i++)
        {
            printf("%c", nuevapal[i]);
        }
    }
}
