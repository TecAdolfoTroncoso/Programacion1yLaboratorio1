/*
            Escriba una función que reciba cantidad de bytes descargados y el tiempo
              expresado en minutos y segundos, y devuelva la velocidad de descarga
                         expresada en kB/seg (kilobytes por segundo).
        [Considere el Sistema Internacional de Unidades (Decimal) donde un kilobyte (kB)
                                    equivale a 103 bytes].
*/

#include <stdio.h>

float recibebytes(int bytes, int Tempminutos, int Tempsegundos);


int main()
{
    int B, Kilobytes, minutos, segundos;
    printf("ingrese la cantidad de bytes descargados \n");
    scanf("%d", &B);
    printf("ingrese la cantidad de minutos y segundos que demoro la descarga en formato de (mm:ss):\n");
    scanf("%d:%d", &minutos, &segundos);
    ;
    printf("Velocidad de descarga: %0.2f kB/s \n", recibebytes(B, minutos, segundos));
}

float recibebytes(int bytes, int Tempminutos, int Tempsegundos)
{

    int totalDeSegundos;
    float kB,acumulador;
    totalDeSegundos = (Tempminutos * 60) + Tempsegundos;
    acumulador=bytes/totalDeSegundos;
    kB = acumulador / 103;
    return kB;
}