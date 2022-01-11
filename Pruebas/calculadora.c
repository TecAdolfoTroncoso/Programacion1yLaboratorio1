#include<stdio.h>

// Declaracion de estructuras

struct nombreestructura{
    
    // declaracion de las variables en la estructura
   
   int numero;
   
   char palabra[] ;
};

// declarar funciones 
void cargaestaciones (int a, int b);
void impresionestaciones(int a, int b);


//Resolver funciones
void suma (int a,int b){
    int resultado = a +b;
}
void resta (int a ,int  b){
    int result = a-b;
}

// desarrollo del programa 
int main (){
int num=0,numero2=0;
   print ("ingrese numero ");
   scanf("%d",&num);
   printf("Ingrese numero 2");
   scanf("%d",&numero2);
    printf ("Resultado de suma",suma(num,numero2));
}
