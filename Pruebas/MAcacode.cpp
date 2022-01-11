#include <iostream>
#include <string.h>

using namespace std;
// Escriba una función en C++ que reciba como parámetros 2 cadenas, y retorne un cadena
// conteniendo las 2 cadenas de manera intercalada

char* intercalar(char* cadena1, char* cadena2) {
	

	int nro_cadena1 = strlen(cadena1); //cantidad de caracteres cadena 1
	int nro_cadena2 = strlen(cadena2); //numero de caracteres de la cadena 2


	int cant_total = nro_cadena1 + nro_cadena2;
	char* resultado = new char[nro_cadena1 + nro_cadena2];

	// contamos caracteres (para recorrido)

	//int c = 0;

	if (nro_cadena1 <= nro_cadena2)
	{
		strcpy(resultado, cadena1); strcat(resultado, cadena2); //copia y concatena las cadenas 
		for (int i = 0; i<nro_cadena1; i++)
		{
			resultado[i * 2] = cadena1[i];
		} // lena f de 2 en 2 (par) 
		for (int k = 1; k <= nro_cadena1; k++)
		{
			resultado[((k * 2) - 1)] = cadena2[k - 1]; // llena f de 2 en 2 (impar) 
		}
	}
	else
	{
		strcpy(resultado, cadena2); strcat(resultado, cadena1);
		for (int i = 0; i<nro_cadena2; i++)
		{
			resultado[i * 2] = cadena1[i];
		}
		for (int k = 1; k <= nro_cadena2; k++)
		{
			resultado[((k * 2) - 1)] = cadena2[k - 1];
		}
	}

	return resultado; 
	
}



int main(){


	char cadena1[] = "veamos";
	char cadena2[] = "-----";


	// cout<< intercalar(cadena1, cadena2 )<<endl;
	cout << intercalar(cadena1, cadena2) << endl;
	system("pause");
}