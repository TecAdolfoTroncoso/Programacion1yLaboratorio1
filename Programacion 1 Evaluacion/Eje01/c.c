/*
                    Dado grados en Fahrenheit y los muestre convertidos a grados Celsius. 
 Considere que la fórmula para conversión de grados Celsius a grados Fahrenheit es: F = 9 / 5 x C + 32

*/
#include <stdio.h>

int main(){
    float f=0,c=0;
    printf ("Ingrese la temperatura en grados fahrenheit: \n");
    scanf("%f",&f);
    c=5.0/9.0*(f-32);
    printf("La temperatura convertida en grados celcius es: %0.0f grados",c);
}