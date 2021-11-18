#include<stdio.h>



void main(void){
	
	int vec[10],a=0,b=0,c=0,d=0;
	int aux=0;
	
	for(a=0;a<10;a++)
	vec[a]=0;
	for(a=0;a<10;a++)
	{
		printf("\n ingrese numero:");
		scanf("%d",&vec[a]);
	}
	for ( b=0;b<10;b++)
	{
		for( c=0; c<10;c++){
		
			if (vec[c]>vec[c+1]){
				aux=vec[c+1];
				vec[c+1]=vec[c];
				vec[c]=aux;
				}
			}
		}
		for( d=0;d<10;d++){
		printf("%d \n",vec[d]);
	}
}