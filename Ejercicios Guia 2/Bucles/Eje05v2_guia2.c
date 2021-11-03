#include <stdio.h>

int main() {
    //Creación de variables
    float resultado;  
    int limite;  
    float aux;
    float num;

    //Inicializo el acumulador 
    resultado = 1.0; //Al ser una multiplicación el valor neutro es 1
    
    //Comienzo el ciclo 
    printf("Ingrese la cantidad de iteraciones \n");
    scanf("%d", &limite);
    for(int n = 1; n <= limite; n++) {
        //Averigua el valor de 2N
        num = 2*n;
        //Realizo el calculo 
        aux = ((num*num) / ((num-1)*(num+1)));
        resultado = resultado * aux;        
    }
    //Informo resultados
    printf("La aproximacion es: %f\n", resultado);
    printf("El aprox de PI: %f\n", (resultado*2.0));  // PI / 2.... resultado * 2
}