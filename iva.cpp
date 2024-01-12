#include <iostream>

using namespace std;

int main(){
	
	float prod,fin,iva;
	
	cout<<"Ingrese el precio del producto : ";
	cin>>prod;
	
	iva = (21 * prod) / 100;
	fin = prod + iva;
	
	cout<<"El precio del producto con el agregado del iva es: "<<fin;
	
	return 0;
}
