/*
 Ejercicios de la guia 2 de ejercicios de programacion. 
  Funciones
  Descripción:Ingresar datos a un vector finalizando con un número negativo, informar el producto.
  Programa: Eje03_guia2
  Alumno: Adolfo Jesús Troncoso.
*/

void datosVector(int v[]);

int calculo(int r[]);

void main(){
  cerrarprograma();  
}

int calculo(int r[]){

}



void cerrarprograma()
{
    char d;
    printf("Esta seguro que quiere salir del programa? Escriba 's' si esta de acuerdo.\n");
    scanf("%c", &d);
    for (;;)
    {
        if (d == 's')
        {
            printf("Esta saliendo del programa.");
            break;
        }
    }
}