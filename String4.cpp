#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
	
	char entero [100], real[100];
	int numero;
	float flotante,suma;
	
	cout<<"Ingresa un numero entero \n";
	cin.getline(entero,100,'\n');
	cout<<"Ingresa un numero real \n";
	cin.getline(real,100,'\n');
	
	numero = atoi(entero);
	flotante = atof(real);
	
	suma = numero + flotante;
	
	cout<<"La suma de los dos numeros es de: \n"<<suma;
	
	
	
	system("pause");
	return 0;
}
