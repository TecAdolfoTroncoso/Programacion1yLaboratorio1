/*
                Lea de teclado dos tiempos expresados en horas, minutos y segundos, los sume y
                        muestre por pantalla el resultado en horas, minutos y segundo
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int horas, minutos, segundos;
    int horas1, minutos1, segundos1;
    int hora2, minuto2, segundos2;
    int dia, residuo;
    int resultadoMin, resultadoHoras, resultadoSegundos;
    system("cls");
    // Ingresa primer fecha.
    do
    {
        printf("\t\tIngrese el primer tiempo expresados en horas , minutos, en formato hh:mm:ss\n");
        scanf("%d : %d : %d", &horas, &minutos, &segundos);
    } while ((horas < 0 || horas > 23) || (minutos < 0 || minutos > 59) || (segundos < 0 || segundos > 59));

    printf("Hora: %d Minutos: %d Segundos: %d \n", horas, minutos, segundos);
    printf("Este mensaje desaparecera en 4 seg.\n");
    sleep(4);
    system("cls");

    // Ingresa la segunda fecha.

    do
    {
        printf("\t\tIngrese el segundo tiempo expresados en horas , minutos, en formato hh:mm:ss\n");
        scanf("%d : %d : %d", &horas1, &minutos1, &segundos1);
    } while ((horas1 < 0 || horas1 > 23) || (minutos1 < 0 || minutos1 > 59) || (segundos1 < 0 || segundos1 > 59));

    printf("Hora: %d Minutos: %d Segundos: %d \n", horas1, minutos1, segundos1);
    printf("Este mensaje desaparecera en 4 seg.\n");
    sleep(4);

// Resolucion del problema

    // Suma de segundos de ambos tiempos.
    resultadoSegundos = segundos + segundos1;

    // Verificamos si pasamos los minutos.
    if (resultadoSegundos > 59)
    {
        resultadoSegundos = resultadoSegundos - 60;
        residuo = 1;
    }

    //  Suma de minutos de ambos tiempos.
    resultadoMin = minutos + minutos1 + residuo;
    residuo = 0;

    // verificamos si pasamos la hora.
    if (resultadoMin > 59)
    {
        resultadoMin = resultadoMin - 60;
        residuo = 1;
    }

    // Sumamos las Horas
    resultadoHoras = horas + horas1 + residuo;
    residuo = 0;

    // Verificamos si pasamos el dia.
    if (resultadoHoras > 23)
    {
        resultadoHoras = resultadoHoras - 24;
        residuo = 1;
    }

    // Obtenemos el dia.
    dia = residuo;

    system("cls");
    printf("\t\tPrimer tiempo:\n ");
    printf("Hora: %d Minutos: %d Segundos: %d \n", horas, minutos, segundos);
    printf("\t\tSegundo tiempo: \n ");
    printf("Hora: %d Minutos: %d Segundos: %d \n\n", horas1, minutos1, segundos1);
    printf("\t\tHoras sumadas:\n");
    printf("Dia %d %d:%d:%d", dia, resultadoHoras, resultadoMin, resultadoSegundos);
}
