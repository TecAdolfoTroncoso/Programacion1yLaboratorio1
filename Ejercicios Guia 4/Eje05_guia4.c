#include <stdio.h>

struct fecha {
 int dia;
 int meses;
 int anyone;
 char mes[40];
}ff;

void escribe (struct fecha f);

void escribe (struct fecha f){
 strcpy(ff.dia,1);
 strcpy(ff.meses,1);
 strcpy(ff.anyone,2000);
 strcpy (ff.mes, "ENERO");
 
}
int main (){
 struct fecha ff;
 escribe (ff);
 return 1;
}