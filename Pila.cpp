#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <winuser.h>

using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;	
};

void Agregar(Nodo *&, char);
void Sacar(Nodo *&, char&);

int main(){
	
	Nodo *pila = NULL;
	char dato;
	int aux;
	bool M = true,m = true;

	while(M){
		cout<<"Inserte el numero que se inidica para acceder a la opcion\n";
		cout<<"1 .Insertar un caracter a la pila\n";
		cout<<"2 .Sacar los elemntos de la pila\n";
		cout<<"3 .Salir\n";
		cin>>aux;
		switch(aux){
			case 1: 
				while(m){
					cout<<"Inserte un caracter para agregar a la pila , presione F1 para salir\n";
					cin>>dato;
					Agregar(pila,dato);
					if( GetAsyncKeyState(0x70)){
						m = false;
						system("pause");
						system("cls");
					}
				}
				break;
			case 2:
				cout<<"Sacando los elemntos de la pila";
				while (pila != NULL){
					Sacar(pila,dato);
					if(pila != NULL){
						cout<<dato<<" , ";
					} else {
						cout<<dato<<" . ";
					}
				}
					system("pause");
					system("cls");
				break;
			case 3:
				cout<<"Saliendo";
				system("pause");
				system("cls");
				M = false;
				break;
			default:
				cout<<"La opcion ingresada es invalida intentelo de nuevo\n";
				system("pause");
				system("cls");
				break;
		}
		
		
	}
	
	
	getch();
	return 0;
}

void Agregar(Nodo *&pila, char n){
	
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
}

void Sacar(Nodo *&pila, char &n){
	
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
	
}


