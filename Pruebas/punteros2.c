#include <stdio.h>
#include <stdlib.h>

typedef struct Punto3d
{
    int x;
    int y;
    int z;
} p3d;

int main()
{
    int n=10;
    p3d *poligono;
    poligono = (p3d *)calloc(n,sizeof(p3d));
   
   if(poligono==NULL){
       printf("Error de asiganacion de memoria dinamica");
       exit(1);
   }
   printf("Asiganacion exitosa\n");
    return 0;
}