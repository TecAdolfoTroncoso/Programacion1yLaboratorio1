#include <stdio.h>
#include <windows.h>
#include <iostream>
using namespace std;
int main(){
	int columna, columna2, columna3, columna4, q, k;
	int x, y, z[100], mayor=0, menor=0, veces, veces2, acum1=0, acum2[100];
	cout << "Escriba la cantidad de datos" << endl;
	cin >> x;
	for (y=1; y<=x; y++){
		cout << "Ingrese la frecuencia del dato " << y << endl;
		cin >> z[y];
		system ("cls");
		if (mayor < z[y]){
			mayor = z[y];
		}
		if (menor > z[y]){
			menor = z[y];	
		}
	}
	columna = mayor;
	columna2 = mayor;
	columna3 = mayor;
	columna4 = mayor;
	for (q=1; q <= columna; q++){
		cout << columna2 << "  ";
		columna2=columna2-1;
		for (k=1; k<=x; k++){
			if (z[k]>=columna3){
				cout <<"* ";
			}
			else{
				cout << "  ";
			}
		}
		columna3 = columna3 -1;
		cout << "\n";
	}
	cout << "  ";
	for (columna4=1; columna4<=x;columna4++){
		cout << " " << columna4;
	}
	cout << "\n" << endl;
	cout << "\n" << endl;
	system ("pause");
}