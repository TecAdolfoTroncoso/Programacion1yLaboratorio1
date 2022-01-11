/*
 Dado un número natural n, imprimir su tabla de multiplicar desde 0 hasta 100 ocurrencias.
*/

#include <stdio.h>
int main()
{
	// VARIABLE PARA ALMACENAR QUE TABLA DESEA IMPRIMIR EL USUARIO
	int tabla;

	// VARIABLE QUE VA A ITERAR EN NUESTRO BUCLE
	int i; // 5*1 5*2 5*3
	
	// PEDIMOS AL USUARIO QUE LE ASIGNE UN VALOR A ESTA VARIABLE
	printf("\nDigite el numero de tabla que desea imprimir: ");
	scanf("%d", &tabla);

	// CREAMOS EL BUCLE
	for (i = 0; i <= 100; i++)
	{
		printf("\n %i * %i = %i ", tabla, i, tabla * i);
	}
}
