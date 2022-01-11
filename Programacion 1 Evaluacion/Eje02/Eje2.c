/*
Escribir un programa de astrología que pida al usuario que ingrese el número de día y el número de mes correspondientes a su fecha de cumpleaños, e imprima en pantalla el signo del zodíaco al que pertenece. Considere las siguientes fechas: (valor 2 ptos)
                                        Aries: 21 de marzo al 20 de abril.
                                        Tauro: 21 de abril al 20 de mayo.
                                        Géminis: 21 de mayo al 20 de junio.
                                        Cáncer: 21 de junio al 21 de julio.
                                        Leo: 22 de julio al 22 de agosto.
                                        Virgo: 23 de agosto al 22 de septiembre.
                                        Libra: 23 de septiembre al 22 de octubre.
                                        Escorpio: 23 de octubre al 22 de noviembre.
                                        Sagitario: 23 de noviembre al 21 de diciembre.
                                        Capricornio: 22 de diciembre al 20 de enero.
                                        Acuario: 21 de enero al 19 de febrero.
                                        Piscis: 20 de febrero al 20 de marzo
*/

#include <stdio.h>

int main()
{
    int mes, dia;
    printf("\t\tSIGNO ZODIACAL \n");
    printf("Lista de meses:\n");
    printf("1. Enero  2. Febrero  3. Marzo  4. Abril \n");
    printf("5.Mayo   6. Junio    7. Julio  8. Agosto \n");
    printf("9. Septiembre  10. Octubre  11. Noviembre  12. Diciembre \n");
    printf("Ingrese dia: ");
    scanf("%d", &dia);
    printf("Ingrese mes: ");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1:
        if (dia < 21)
        {
            printf("Capricornio");
        }
        else
        {
            printf("Acuario");
        }
        break;
    case 2:
        if (dia < 19)
        {
            printf("Acuario");
        }
        else
        {
            printf("Piscis");
        }
        break;
    case 3:
        if (dia < 21)
        {
            printf("Piscis");
        }
        else
        {
            printf("Aries");
        }
        break;
    case 4:
        if (dia < 21)
        {
            printf("Aries");
        }
        else
        {
            printf("Tauro");
        }
        break;
    case 5:
        if (dia < 21)
        {
            printf("Tauro");
        }
        else
        {
            printf("Geminis");
        }
        break;
    case 6:
        if (dia < 21)
        {
            printf("Geminis");
        }
        else
        {
            printf("Cancer");
        }
        break;
    case 7:
        if (dia < 23)
        {
            printf("Cancer");
        }
        else
        {
            printf("Leo");
        }
        break;
    case 8:
        if (dia < 25)
        {
            printf("Leo");
        }
        else
        {
            printf("Virgo");
        }
        break;
    case 9:
        if (dia < 24)
        {
            printf("Virgo");
        }
        else
        {
            printf("Libra");
        }
        break;
    case 10:
        if (dia < 21)
        {
            printf("Libra");
        }
        else
        {
            printf("Escorpio");
        }
        break;
    case 11:
        if (dia < 23)
        {
            printf("Escorpio");
        }
        else
        {
            printf("Sagitario");
        }
        break;
    case 12:
        if (dia < 22)
        {
            printf("Sagitario");
        }
        else
        {
            printf("Capricornio");
        }
        break;
    default:
        printf("Este mes no existe");
        break;
    }
}