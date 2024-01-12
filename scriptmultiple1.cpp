#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void PedirDatos();
void Buscar(int *,int);

int nelemn, *array;

int main (){
	
	PedirDatos();
	Buscar(array,nelemn);
	
	
	delete [] array;
	getch();
	return 0;
}

void PedirDatos(){
	
	cout<<"Cuantos Elementos quiere tener en su lista de numeros \n";
	cin>>nelemn;
	
	array = new int[nelemn];
	
	for(int i=0;i<nelemn;i++){
		cout<<"Ingrese el numero de la posicion "<<i<<": ";
		cin>>array[i];
	}
	
	
}

void Buscar(int *array,int nelemn){
	
	int aux,i=0,j=0;
	bool auxb = true;
	
	cout<<"Que numero de la lista quiere buscar?\n";
	cin>>aux;
	
	while (auxb && (i<nelemn)){
		if(array[i] == aux){
			cout<<"\n El numero "<<aux<<" Esta en la posicion : "<<nelemn<<"\n";
			auxb == false;
		} else {
			j++;
		}
		i++;
	}
	
	if(j == nelemn){
		cout<<"No se encontro el numero en el arreglo";
	}
	
	
	
}
