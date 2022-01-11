#include <stdio.h>
#include <stdlib.h>

void intercambio (int * a , int * b);

int main()
{
    char cadena[80] = "holamundo"; /// \0
    printf("Por Cadena %s \n", cadena);

    char *p = &cadena[0] ; // === //
    //p = cadena;

    printf("Por Puntero %s \n", p);
    printf("%c \n", *(p + 4));
    printf("%s \n", p + 4);
    printf("%c \n", *p);
    printf("%p \n", p);
    printf("%d \n", p);

    int a = 10;
    int b = 20;
    
    printf("%d %d\n", a,b);
    
    intercambio(a,b);
    
   
    printf("%d %d\n", a,b);
    
    return 0;
}


void intercambio (int * a , int * b){
    int aux = *a;
    *a = *b;
    *b = aux;
}