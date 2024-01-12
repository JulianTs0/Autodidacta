#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

int main(){
	
	ofstream Archivo;
	ifstream archivo;
	string nombre,texto;
	cout<<"Ingrese el nombre del archivo que desea leer";
	getline(cin,nombre);
	
	archivo.open(nombre.c_str(),ios::in);
	
	if(archivo.fail()){
		cout<<"No se a encontrado el archivo elejido";
	} else {
		while(!archivo.eof()){
			getline(archivo,texto);
			cout<<texto;
		}
	}
	
	archivo.close();
		
	system("pause");
}
