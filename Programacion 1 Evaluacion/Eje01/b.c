/*
            Dado un número natural n, imprimir la suma total de los naturales de 1 a n. 
*/
#include <stdio.h>

int main(){
    int numero_base=1;
    int resultado=1;
    int numero_ingresado;
    int contador=1;


    printf("Ingrese hasta donde quiere sumar:  ");
    scanf("%d",&numero_ingresado);

    for(int i=1;i<numero_ingresado;i++){
        contador++;
        resultado = numero_base+ contador;
        printf("\n %i + %i = %i ",numero_base,contador,resultado);
        numero_base=resultado;
    }
}