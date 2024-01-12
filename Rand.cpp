#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main (){
	
	int numeros [100][100];
	int matriz2 [100][100];
	
	int filas=0,columnas =0,dato=0;
	
	cout<<"ingrese la cantidad de flias";
	cin>>filas;
	cout<<"ingrese la cantidad de columnas";
	cin>>columnas;
	
	srand(time(NULL));
	
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			
			dato = rand()%(100);
			numeros[i][j] = dato;
		}
	}
	for (int i=0;i<filas;i++){
		for (int j=0;j<columnas;j++){
			matriz2 [i][j] = numeros [i][j];
		}
	}
	for (int i=0;i<filas;i++){
		cout<<"\n";
		for (int j=0;j<columnas;j++){
			cout<<matriz2 [i][j];
			cout<<"\n";
		}
	}
	cout<<"\n";
	system("pause");
	return 0;
}
