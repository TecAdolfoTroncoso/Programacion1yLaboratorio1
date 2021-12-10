#include <stdio.h>
#include <locale.h>

struct Carga_clientes
{
    char Nombre[50];
    char Apellido[50];
    char Estado_Moroso;
    int unidades;
    float Valor_unidades;
};

int main()
{
    system("color f3");
    setlocale(LC_ALL, "es_ES");
    const int cantidad = 100;
    struct Carga_clientes lista_clientes[cantidad];
    int contador_clientes = 0;
    int contador_moroso = 0;
    int contador_Atrasado = 0;
    int contador_Pagado = 0;
    
}