#include <iostream>
#include <math.h>

using namespace std;

int main (){
	
	int opc, aux;
	
	
	cout<<"ingrese la opcion que quiera realizar\n";
	cout<<"1. Realizar el cubo de un numero\n";
	cout<<"2. Determinar par e impar\n";
	cout<<"3. Salir\n";
	cin>>opc;
	
	switch(opc){
		case 1: cout<<"Ingrese un numero para realizarle una elevacion al cubo\n";
				cin>>aux;
				aux = pow(aux,3);
				cout<<"El resultado es : "<<aux;
				break;
		case 2: cout<<"Ingrese un numero para saber si es par o impar\n";
				cin>>aux;
				aux %= 2;
				if(aux == 0) {
					cout<<"El numero es par";
					
				} else {
					cout<<"El numero es impar";
				}
				break;
		 case 3: break;
	}
	
	return 0;
}
