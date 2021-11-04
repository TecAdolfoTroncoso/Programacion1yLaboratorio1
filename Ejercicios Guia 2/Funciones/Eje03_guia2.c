/*
 Ejercicios de la guia 2 de ejercicios de programacion. 
  Funciones
  Descripción:Dado un triángulo rectángulo cuyos lados son: base=3, altura=4, hipot=5. Calcular
  matemáticamente los ángulos con una o mas funciones
  Programa: Eje08_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265359;

int angulosAgudos(float base, float altura, float hipotenusa);
float cargarhipotenusa();
float cargarbase();
float cargaraltura();

void main(void)
{

    system("cls");
    puts("\n******************************************");
    float a, b, c;
    a = cargarbase();
    b = cargaraltura();
    c = cargarhipotenusa();

    angulosAgudos(a, b, c);
    puts("\n******************************************");
}

int angulosAgudos(float base, float altura, float hipotenusa)
{
    double angulo1, angulo2, arcoseno, seno;

    seno = altura / hipotenusa;
    arcoseno = asin(seno);         // resultado en radianes
    angulo1 = arcoseno * 180 / PI; // conversión a grados
    angulo2 = 90 - angulo1;
    printf("Los angulos agudos del triangulo son %f y %f", angulo1, angulo2);
    return 0;
}

float cargarbase()
{
    float var;
    printf("Ingrese la base del triangulo rectangulo: \n");
    scanf("%f", &var);
    return var;
}
float cargaraltura()
{
    float var2;
    printf("Ingrese la altura del triangulo rectangulo: \n");
    scanf("%f", &var2);
    return var2;
}
float cargarhipotenusa()
{
    float var3;
    printf("Ingrese la hipotenusa del triangulo rectangulo: \n");
    scanf("%f", &var3);
    return var3;
}