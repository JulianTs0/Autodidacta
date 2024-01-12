#include <iostream>

using namespace std;

int main (){
	float a,b,c;
	
	cout<<"Ingrese 3 numeros para determinal cual de ellos es el mayor: ";
	cin>>a>>b>>c;
	
	if(a==b && b==c){
		cout<<"Todos los numeros son iguales";
	} else if (a>b && a>c) {
		cout<<"A es el mas grande";
	} else if (b>a && b>c) {
		cout<<"B es el mas grande";
	} else if (c>a && c>b){
		cout<<"C es el mas grande";
	} else {
		cout<<"Los numeros iguales son los mas grandes";
	}

	return 0;
}
