#include<stdio.h>
#include<string.h>
char texto[5][100];

char aux [30];

int x,y,n=20;

void ver(){
    for (y=0;y<n;y++){
        printf("%c",texto[y]);
    }
}

void burbuja(){

    strcpy(aux,texto[0]);
    for(x=0;x<n;x++){
        for (y=0;y<n;y++){
            if(strcoll (texto[x],texto[y])<0){
                strcpy(aux,texto[x]);
                strcpy(texto[x],texto[x]);
                strcpy(texto[y],aux);
            }
        }
    }
}