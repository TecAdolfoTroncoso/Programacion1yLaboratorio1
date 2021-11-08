/*
 Ejercicios de la guia 2 de ejercicios de programacion. 
  Funciones
  Descripción:Ingresar datos a un vector finalizando con un número negativo, informar el producto.
  Programa: Eje03_guia2
  Alumno: Adolfo Jesús Troncoso.
*/
#define MAX 100
void datosVector(int v[]);

int calculo(int r[]);
void salirprograma(char d);
void main()
{
    int cargavector[MAX];
    datosVector(cargavector);
    printf("El producto de los numeros ingresados es %d \n", calculo(cargavector));
}

void datosVector(int v[])
{
    int i;
    for (i = 0; i <= v[MAX]; i++)
    {
        printf("ingrese un numero\n");
        scanf("%d", &v[i]);
        if (v[i] < 0)
        {
            break;
        }
    }
}

int calculo(int r[])
{
    int prod = 1;
    char c;
    for (int i = 0; i <= MAX; i++)
    {
        if (r[i] > 0)
        {
            prod = prod * r[i];
        }
        else
        {
            printf("Usted ingreso un numero negativo\n");
            break;
        }
        
        
    }
    return prod;
}


